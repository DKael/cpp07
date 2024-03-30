#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <typeinfo>

template <typename T, typename F>
void iter(T* arrAddr, size_t arrLen, F func) {
  if (arrAddr == NULL) {
    return;
  }
  std::cout << "type info      : " << typeid(T).name() << '\n';
  std::cout << "func type info : " << typeid(F).name() << '\n';
  for (size_t i = 0; i < arrLen; i++) {
    func(arrAddr[i]);
  }
}

// template <typename T>
// void iter(T* arrAddr, size_t arrLen, void (*f)(T& funcArg)) {
//   if (arrAddr == NULL) {
//     return;
//   }
//   std::cout << "func called\n";
//   for (size_t i = 0; i < arrLen; i++) {
//     f(arrAddr[i]);
//   }
// }

// template <typename T>
// void iter(T* arrAddr, size_t arrLen, void (*f)(const T& funcArg)) {
//   if (arrAddr == NULL) {
//     return;
//   }
//   std::cout << "const func called\n";
//   for (size_t i = 0; i < arrLen; i++) {
//     f(arrAddr[i]);
//   }
// }

#endif