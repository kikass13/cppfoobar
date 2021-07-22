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