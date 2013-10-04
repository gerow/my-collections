template <class T>
vector<T>::vector() :
_allocated(default_size),
_size(0),
_data(new T[default_size])
{
  /* empty */
}

template <class T>
T & vector<T>::operator [](const size_t & i)
{
  return _data[i];
}

template <class T>
const T & vector<T>::operator [](const size_t & i) const
{
  return _data[i];
}

template <class T>
void vector<T>::push_back(const T & obj)
{
  if (_allocated >= _size) {
    reallocate();
  }
  _data[_size] = obj;
  _size++;
}

template <class T>
size_t vector<T>::size() const
{
  return _size;
}

template <class T>
void vector<T>::reallocate()
{
  // double the number of allocated blocks
  _allocated *= 2;
  // create the new pointer in a temp arary
  std::unique_ptr<T[]> temp(new T[_allocated]);

  // copy the current data into the temp
  for (int i = 0; i < _size; i++) {
    temp[i] = _data[i];
  }

  // swap the ownership of the pointers
  // this should cause the old one to
  // be deallocated when temp falls out
  // of scope
  _data.swap(temp);
}