#pragma once
#include "Vector.h"

template <typename T>
class Stack : private Vector<T> {
public:
  void push(const T&);
  void pop();
  T& top() const;
};