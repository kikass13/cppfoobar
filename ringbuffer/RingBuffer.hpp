#pragma once

#include <cstring>

template <class T, size_t SIZE> class RingBuffer {
public:
  explicit RingBuffer() : buf_{0} {}

  void push_back(T item) {
    if (isFull()) {
      replace(m_last, static_cast<T>(item));
      increment(m_last);
      m_first = m_last;
    } else {
      construct(m_last, static_cast<T>(item));
      increment(m_last);
      ++m_size;
    }
  }
  void push_front(T item) {
    if (isFull()) {
      decrement(m_first);
      replace(m_first, static_cast<T>(item));
      m_last = m_first;
    } else {
      decrement(m_first);
      construct(m_first, static_cast<T>(item));
      ++m_size;
    }
  }
  void pop_front() {
    if (isEmpty()) {
      return;
    }
    destroy_item(m_first);
    increment(m_first);
    --m_size;
  }

  void pop_back() {
    if (isEmpty()) {
      return;
    }
    decrement(m_last);
    destroy_item(m_last);
    --m_size;
  }

  T consume() {
    if (isEmpty()) {
      return T{};
    }
    T val = get();
    pop_front();
    return val;
  }

  void copy(T *src, size_t length) {
    if (length > capacity()) {
      return;
    }
	/// linearize buffer content if not already linearized
    T *ptr = src;
    if (!is_linearized()) {
      ptr = linearize();
    }
	/// resize if the given length is greater then our current size
	int sizeDiff = length - size();
	if(sizeDiff > 0){
		m_size += sizeDiff;
		m_last = add(m_last, sizeDiff);
	}
	/// do copy
    std::memcpy(m_buff, ptr, length);
  }

  void reset() {
    m_size = 0;
    m_first = m_buff;
    m_last == m_end;
  }

  bool isEmpty() const { return size() == 0; }
  bool isFull() const { return capacity() == size(); }
  size_t capacity() const { return SIZE; }

  bool is_linearized() const { return m_first < m_last || m_last == m_buff; }

  T *linearize() {
    if (isEmpty())
      return nullptr;
    if (m_first < m_last || m_last == m_buff)
      return m_first;
    T *src = m_first;
    T *dest = m_buff;
    size_t moved = 0;
    size_t constructed = 0;
    for (T *first = m_first; dest < src; src = first) {
      for (size_t ii = 0; src < m_end; ++src, ++dest, ++moved, ++ii) {
        if (moved == size()) {
          first = dest;
          break;
        }
        if (dest == first) {
          first += ii;
          break;
        }
        if (is_uninitialized(dest)) {
          construct(dest, *src);
          ++constructed;
        } else {
          T tmp = *src;
          replace(src, *dest);
          replace(dest, tmp);
        }
      }
    }
    for (src = m_end - constructed; src < m_end; ++src) {
      destroy_item(src);
    }
    m_first = m_buff;
    m_last = add(m_buff, size());
    return m_buff;
  }

  T &get() { return *m_first; }
  T &at(size_t i) { return buf_[i]; }

  size_t used() const { return SIZE - size(); }
  size_t size() const { return m_size; }

private:
  bool is_uninitialized(T *p) const {
    return (m_first < m_last) ? (p >= m_last || p < m_first)
                              : (p >= m_last && p < m_first);
  }
  void destroy_item(T *p) { *p = T{}; }
  void increment(auto &p) const {
    if (++p == m_end)
      p = m_buff;
  }
  void decrement(auto &p) const {
    if (p == m_buff)
      p = m_end;
    --p;
  }
  auto add(auto p, auto n) const {
    return p + (n < (m_end - p) ? n : n - (m_end - m_buff));
  }
  void construct(auto p, T val) { *p = T{val}; }
  void replace(auto *pos, T item) { *pos = item; }

private:
  T buf_[SIZE];
  //! The internal buffer used for storing elements in the circular buffer.
  T *m_buff = buf_;
  //! The internal buffer's end (end of the storage space).
  T *m_end = &buf_[SIZE];
  //! The virtual beginning of the circular buffer.
  T *m_first = m_buff;
  //! The virtual end of the circular buffer (one behind the last element).
  T *m_last = m_buff;
  //! The number of items currently stored in the circular buffer.
  size_t m_size = 0;
};
