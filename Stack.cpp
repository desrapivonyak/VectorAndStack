#pragma once
#include "Stack.h"

template <typename T>
void Stack<T>::push(const T& item) {
  this->push_back(item);
}

template <typename T>
void Stack<T>::pop() {
  this->pop_back();
}

template <typename T>
T& Stack<T>::top() const {
  return Vector<T>::array[this->get_size() - 1];
}

template class Stack<int>;