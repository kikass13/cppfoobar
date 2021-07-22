#include <iostream>
#include <vector>
#include <chrono>
#include <assert.h>     /* assert */

/**********************************************
/* this is the loop unroll template
***********************************************/
template <size_t N> struct uint_{ };

template <size_t N, typename Lambda, typename IterT>
inline void unroller(const Lambda& f, const IterT& iter, uint_<N>) {
	unroller(f, iter, uint_<N-1>());
	f(iter + N);
}

template <typename Lambda, typename IterT>
inline void unroller(const Lambda& f, const IterT& iter, uint_<0>) {
	f(iter);
}
/**********************************************
/**********************************************
***********************************************/

#define N 500000000

//define unroll factor
#define UNROLL_FACTOR 50




int main()
{
	std::vector<double> vec(N);

	//////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////
	// loop body as a lambda 
	auto body = [&](const int& i) { vec[i] = i*(i-1)*4*(i+1); };
	// assert if unrolling cant be done
	assert(vec.size() % UNROLL_FACTOR == 0 && "Vector size must be divisible by the Unrolling Factor");

	// lets go through the loop
	auto start = std::chrono::system_clock::now();
	for(size_t i = 0, size=vec.size(); i!=size; i+=UNROLL_FACTOR) 
	{
		unroller( body, i, uint_<UNROLL_FACTOR-1>() );
	}
	auto end = std::chrono::system_clock::now();

	// print
	std::cout 	<< "Elapsed time (in msecs): "
				<< std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count()
				<< std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////

	// done
	return 0;
}



