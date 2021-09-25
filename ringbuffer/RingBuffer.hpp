#pragma once

#include <cstdio>

// #include <mutex>

template <class T, size_t SIZE>
class RingBuffer {
public:
	explicit RingBuffer() :
		buf_{0}
	{

	}

	void put(T item)
	{
		// std::lock_guard<std::mutex> lock(mutex_);

		buf_[head_] = item;

		if(full_)
		{
			tail_ = (tail_ + 1) % SIZE;
		}

		head_ = (head_ + 1) % SIZE;

		full_ = head_ == tail_;
	}

	T get()
	{
		// std::lock_guard<std::mutex> lock(mutex_);

		if(empty())
		{
			return T();
		}

		//Read data and advance the tail (we now have a free space)
		auto val = buf_[tail_];
		full_ = false;
		tail_ = (tail_ + 1) % SIZE;

		return val;
	}

	void reset()
	{
		// std::lock_guard<std::mutex> lock(mutex_);
		head_ = tail_;
		full_ = false;
	}

	bool empty() const
	{
		//if head and tail are equal, we are empty
		return (!full_ && (head_ == tail_));
	}

	bool full() const
	{
		//If tail is ahead the head by 1, we are full
		return full_;
	}

	size_t capacity() const
	{
		return SIZE;
	}

	size_t size() const
	{
		size_t size = SIZE;

		if(!full_)
		{
			if(head_ >= tail_)
			{
				size = head_ - tail_;
			}
			else
			{
				size = SIZE + head_ - tail_;
			}
		}

		return size;
	}

private:
	// std::mutex mutex_;
	T buf_[SIZE];
	size_t head_ = 0;
	size_t tail_ = 0;
	bool full_ = 0;
};
