#include "dbscan.hpp"

#include <cstddef>
#include <nanoflann.hpp>

#include <type_traits>
#include <vector>
#include <iostream>

// And this is the "dataset to kd-tree" adaptor class:

inline auto get_pt(const point2& p, std::size_t dim)
{
    if(dim == 0) return p.x;
    return p.y;
}


inline auto get_pt(const point3& p, std::size_t dim)
{
    if(dim == 0) return p.x;
    if(dim == 1) return p.y;
    return p.z;
}


template<typename Point>
struct adaptor
{
    const std::span<const Point>&  points;
    adaptor(const std::span<const Point>&  points) : points(points) { }

    /// CRTP helper method
    //inline const Derived& derived() const { return obj; }

    // Must return the number of data points
    inline std::size_t kdtree_get_point_count() const { return points.size(); }

    // Returns the dim'th component of the idx'th point in the class:
    // Since this is inlined and the "dim" argument is typically an immediate value, the
    //  "if/else's" are actually solved at compile time.
    inline float kdtree_get_pt(const std::size_t idx, const std::size_t dim) const
    {
        return get_pt(points[idx], dim);
    }

    // Optional bounding-box computation: return false to default to a standard bbox computation loop.
    //   Return true if the BBOX was already computed by the class and returned in "bb" so it can be avoided to redo it again.
    //   Look at bb.size() to find out the expected dimensionality (e.g. 2 or 3 for point clouds)
    template <class BBOX>
    bool kdtree_get_bbox(BBOX& /*bb*/) const { return false; }

    auto const * elem_ptr(const std::size_t idx) const
    {
        return &points[idx].x;
    }
};



auto sort_clusters(std::vector<std::vector<size_t>>& clusters)
{
    for(auto& cluster: clusters)
    {
        std::sort(cluster.begin(), cluster.end());
    }
}


template<int n_cols, typename Adaptor>
auto dbscan(const Adaptor& adapt, float eps, int min_pts)
{
    eps *= eps;
    using namespace nanoflann;
    using  my_kd_tree_t = KDTreeSingleIndexAdaptor<L2_Simple_Adaptor<float, decltype(adapt)>, decltype(adapt), n_cols>;

    auto index = my_kd_tree_t(n_cols, adapt, KDTreeSingleIndexAdaptorParams(10));
    index.buildIndex();

    const auto n_points = adapt.kdtree_get_point_count();
    auto visited  = std::vector<bool>(n_points);
    auto clusters = std::vector<std::vector<size_t>>();
    // auto matches  = std::vector<std::pair<size_t, float>>();
    // auto sub_matches = std::vector<std::pair<size_t, float>>();
    auto matches = std::vector<ResultItem<unsigned int, float>>();
    auto sub_matches = std::vector<ResultItem<unsigned int, float>>();


    for(size_t i = 0; i < n_points; i++)
    {
        if (visited[i]) continue;

        index.radiusSearch(adapt.elem_ptr(i), eps, matches, SearchParameters(0.0f, false));
        if (matches.size() < static_cast<size_t>(min_pts)) continue;
        visited[i] = true;

        auto cluster = std::vector({i});

        while (matches.empty() == false)
        {
            auto nb_idx = matches.back().first;
            matches.pop_back();
            if (visited[nb_idx]) continue;
            visited[nb_idx] = true;

            index.radiusSearch(adapt.elem_ptr(nb_idx), eps, sub_matches, SearchParameters(0.0f, false));

            if (sub_matches.size() >= static_cast<size_t>(min_pts))
            {
                std::copy(sub_matches.begin(), sub_matches.end(), std::back_inserter(matches));
            }
            cluster.push_back(nb_idx);
        }
        // std::cout << "cluster X" << std::endl;
        clusters.emplace_back(std::move(cluster));
    }
    sort_clusters(clusters);
    return clusters;
}



// Function to standardize a vector of 3D points
std::vector<point3> standardizePoints(const std::span<const point3> &points) {
  // Calculate the means for each coordinate (x, y, z)
  double meanX = 0.0;
  double meanY = 0.0;
  double meanZ = 0.0;

  for (const point3 &point : points) {
    meanX += point.x;
    meanY += point.y;
    meanZ += point.z;
  }

  meanX /= points.size();
  meanY /= points.size();
  meanZ /= points.size();

  // Calculate the standard deviations for each coordinate
  double stdDevX = 0.0;
  double stdDevY = 0.0;
  double stdDevZ = 0.0;

  for (const point3 &point : points) {
    // std::cout << " p:      " << point.x << ", " << point.y << ", " << point.z
    //           << std::endl;

    stdDevX += pow(point.x - meanX, 2);
    stdDevY += pow(point.y - meanY, 2);
    stdDevZ += pow(point.z - meanZ, 2);
  }

  stdDevX = sqrt(stdDevX / points.size());
  stdDevY = sqrt(stdDevY / points.size());
  stdDevZ = sqrt(stdDevZ / points.size());

  //   std::cout <<
  //   "==============================================================="
  //                "============="
  //             << std::endl;
  //   std::cout <<
  //   "==============================================================="
  //                "============="
  //             << std::endl;
  //   std::cout <<
  //   "==============================================================="
  //                "============="
  //             << std::endl;
  //   std::cout <<
  //   "==============================================================="
  //                "============="
  //             << std::endl;

  // Standardize the 3D points
  std::vector<point3> standardizedPoints;
  for (const point3 &point : points) {
    point3 standardizedPoint;
    standardizedPoint.x = (point.x - meanX) / stdDevX;
    standardizedPoint.y = (point.y - meanY) / stdDevY;
    standardizedPoint.z = (point.z - meanZ) / stdDevZ;
    // std::cout << " sd:      " << standardizedPoint.x << ", "
    //           << standardizedPoint.y << ", " << standardizedPoint.z
    //           << std::endl;
    standardizedPoints.push_back(standardizedPoint);
  }

  return standardizedPoints;
}




auto dbscan(const std::span<const point2>& data, float eps, int min_pts) -> std::vector<std::vector<size_t>>
{
    const auto adapt = adaptor<point2>(data);

    return dbscan<2>(adapt, eps, min_pts);
}

auto dbscan(const std::span<const point3> &data, float eps, int min_pts) -> std::vector<std::vector<size_t>> {

  auto standartizedData = standardizePoints(data);
  const auto adapt = adaptor<point3>(standartizedData);
//   const auto adapt = adaptor<point3>(data);

  return dbscan<3>(adapt, eps, min_pts);
}


