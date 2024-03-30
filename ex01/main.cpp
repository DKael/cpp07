#include <iostream>

#include "iter.hpp"

template <typename T>
void printItem(T& item) {
  std::cout << item << '\n';
}

void addSuffix(std::string& item) { item += std::string("_suffix"); }

int main() {
  int iArr[10] = {67, 3214, 35, 56, 56, 23, 423, 7, 78, 95};

  iter(iArr, 10, printItem<int>);
  iter(iArr, 10, printItem<const int>);

  std::string strArr[5] = {"1", "2", "3", "4", "5"};

  iter(strArr, 5, addSuffix);
  iter(strArr, 5, printItem<std::string>);

  // iter(iArr, 10, addSuffix);
}
