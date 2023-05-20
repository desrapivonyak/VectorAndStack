#pragma once
#include <string>

template <typename T>

class Vector{
public:
  Vector();
  ~Vector();

  void set_size(const int);
  int get_size() const;

  void set_capacity(const int);
  int get_capacity() const;

  void push_back(const T&);
  void pop_back();

  T& operator[](const int);
protected:
  int size;
  int capacity;
  T* array;
};

extern template class Vector<int>;
extern template class Vector<std::string*>;
