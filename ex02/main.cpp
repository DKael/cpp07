#include <iostream>

#include "Array.hpp"

int main() {
  try {
    // 템플릿 클래스의 인스턴스 생성
    Array<int> intArray(5);

    // 배열에 값 할당
    for (std::size_t i = 0; i < intArray.size(); ++i) {
      intArray[i] = i * 10;
    }

    // 배열 출력
    std::cout << "Array elements:" << '\n';
    for (std::size_t i = 0; i < intArray.size(); ++i) {
      std::cout << intArray[i] << " ";
    }
    std::cout << '\n';

    // 복사 생성자 테스트
    Array<int> copiedArray = intArray;

    // 복사된 배열 출력
    std::cout << "Copied array elements:" << '\n';
    for (std::size_t i = 0; i < copiedArray.size(); ++i) {
      std::cout << copiedArray[i] << " ";
    }
    std::cout << '\n';

    // 대입 연산자 테스트
    Array<int> assignedArray;
    assignedArray = intArray;

    // 대입된 배열 출력
    std::cout << "Assigned array elements:" << '\n';
    for (std::size_t i = 0; i < assignedArray.size(); ++i) {
      std::cout << assignedArray[i] << " ";
    }
    std::cout << '\n';

    // 인덱스 범위를 벗어나는 경우 테스트
    std::cerr << "Accessing out of range index:" << '\n';
    std::cerr << intArray[intArray.size()] << '\n';

  } catch (const std::exception& e) {
    std::cerr << "Exception caught: " << e.what() << '\n';
  }

  return 0;
}