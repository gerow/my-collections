#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

#include <memory>

namespace mgcoll
{

template <class T>
class vector
{
private:
  const static size_t default_size = 2;

  size_t _size;
  size_t _allocated;
  std::unique_ptr<T[]> _data;

public:
  vector();

  T &operator [](const size_t & i);

  const T &operator [](const size_t & i) const;

  void push_back(const T & obj);

  size_t size() const;

private:
  void reallocate();
};

#include "vector-impl.h"
}

#endif
