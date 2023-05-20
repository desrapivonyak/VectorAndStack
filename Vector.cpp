#pragma once
#include "Vector.h"

template <typename T>
Vector<T>::Vector(): size {0}, capacity{0}, array {new T} {}

template <typename T>
Vector<T>::~Vector() {
  delete array;
}

template <typename T>
void Vector<T>::set_size(const int num) {
  this->size = num;
}

template <typename T>
int Vector<T>::get_size() const {
  return this->size;
}

template <typename T>
void Vector<T>::set_capacity(const int num) {
  this->capacity = num;
}

template <typename T>
int Vector<T>::get_capacity() const {
  return this->capacity;
}

template <typename T>
void Vector<T>::push_back(const T& a) {
  if(size == capacity) {
    capacity *= 2;
  }

  T* new_arr = new T[size];
  
  for(int i = 0; i < size; ++i) {
    new_arr[i] = this->array[i];
  }
  
  delete this->array;
  this->array = new_arr;
  this->array[size++] = a;
}

template <typename T>
void Vector<T>::pop_back() {
  this->size--;
}

template <typename T>
T& Vector<T>::operator[](const int i) {
  return this->array[i];
}

template class Vector<int>;
template class Vector<std::string*>;
