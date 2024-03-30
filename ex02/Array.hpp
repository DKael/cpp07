#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
 private:
  T* arrPtr;
  std::size_t len;

 public:
  Array();
  Array(unsigned int n);
  Array(const Array<T>& origin);
  Array<T>& operator=(const Array<T>& origin);
  ~Array();
  std::size_t size() const;
  T& operator[](std::size_t idx);
  const T& operator[](std::size_t idx) const;
};

#include "Array.tpp"

#endif