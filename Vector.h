#pragma once

template <typename T>

class Vector{
public:
  Vector();
  ~Vector() = default;

  void set_size(const int);
  int get_size() const;

  void set_capacity(const int);
  int get_capacity() const;

  void push_back(const int);
  void pop_back();

  int& operator[](const int);
protected:
  int size;
  int capacity;
  T* array;
};

extern template class Vector<int>;