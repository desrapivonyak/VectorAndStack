#pragma once
#include <iostream>
#include "Vector.h"
#include "Stack.h"

int main() {
  Vector<int> a;
  a.push_back(5);

  Stack<int> b;
  b.push(15);
  std::cout << b.top() << " " << a.get_size() << std::endl;
}