#pragma once

template<typename T, std::size_t N>
Queue<T, N>::Queue() :
	head(0), tail(0)
{
}

template<typename T, std::size_t N>
bool
Queue<T, N>::isFull() const
{
	Index tmphead = this->head + 1;
	if (tmphead >= (N+1)) {
		tmphead = 0;
	}

	return (tmphead == this->tail);
}

template<typename T, std::size_t N>
bool
Queue<T, N>::isNearlyFull() const
{
	static_assert(N > 3, "Not possible the check for 'nearly full' of such a small queue.");
	return (getSize() > (N - 3));
}

template<typename T, std::size_t N>
bool
Queue<T, N>::isEmpty() const
{
	return (this->head == this->tail);
}

template<typename T, std::size_t N>
bool
Queue<T, N>::isNearlyEmpty() const
{
	static_assert(N > 3, "Not possible the check for 'nearly empty' of such a small queue. ");
	return (getSize() < 3);
}


template<typename T, std::size_t N>
typename Queue<T, N>::Size
Queue<T, N>::getMaxSize() const
{
	return N;
}

template<typename T, std::size_t N>
typename Queue<T, N>::Size
Queue<T, N>::getSize() const
{
	return size;
}

template<typename T, std::size_t N>
const T&
Queue<T, N>::get() const
{
	return this->buffer[this->tail];
}

template<typename T, std::size_t N>
bool
Queue<T, N>::push(const T& value)
{
	Index tmphead = this->head + 1;
	if (tmphead >= (N+1)) {
		tmphead = 0;
	}
	if (tmphead == this->tail) {
		return false;
	}
	else {
		this->buffer[this->head] = value;
		this->head = tmphead;
		size++;
		return true;
	}
}

template<typename T, std::size_t N>
void
Queue<T, N>::pop()
{
	Index tmptail = this->tail + 1;
	if (tmptail >= (N+1)) {
		tmptail = 0;
	}
	this->tail = tmptail;
	size--;
}

template<typename T, std::size_t N>
bool 
Queue<T, N>::copy(const T* src, size_t length){
	if(length > N){
		return false;
	}
	if(length > N - getSize()){
		return false;
	}
	std::memcpy(&this->buffer[this->head], src, length);
	Index tmphead = this->head + length;
	if (tmphead >= (N+1)) {
		tmphead = 0;
	}
	this->head = tmphead;
	size += length;
	return true;
}
