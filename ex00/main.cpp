#include <complex>
#include <iostream>
#include <string>

#include "templateFunc.hpp"

int main() {
  int iVal0 = 10;
  int iVal1 = 20;

  std::cout << "Before swap\n";
  std::cout << "iVal0 : " << iVal0 << '\n';
  std::cout << "iVal1 : " << iVal1 << '\n';

  std::cout << "After void swap(T& arg1, T& arg2)\n";
  ::swap(iVal0, iVal1);
  std::cout << "iVal0 : " << iVal0 << '\n';
  std::cout << "iVal1 : " << iVal1 << '\n';

  std::cout << "\nmin() & max() result\n";
  std::cout << "min(" << iVal0 << ", " << iVal1 << ") : " << ::min(iVal0, iVal1)
            << '\n';
  std::cout << "max(" << iVal0 << ", " << iVal1 << ") : " << ::max(iVal0, iVal1)
            << '\n';
  std::cout << "------------------------------------------------------------\n";

  double dVal0 = 10.1244;
  double dVal1 = 20.4242;

  std::cout << "Before swap\n";
  std::cout << "dVal0 : " << dVal0 << '\n';
  std::cout << "dVal1 : " << dVal1 << '\n';

  std::cout << "After void swap(T& arg1, T& arg2)\n";
  ::swap(dVal0, dVal1);
  std::cout << "dVal0 : " << dVal0 << '\n';
  std::cout << "dVal1 : " << dVal1 << '\n';

  std::cout << "\nmin() & max() result\n";
  std::cout << "min(" << dVal0 << ", " << dVal1 << ") : " << ::min(dVal0, dVal1)
            << '\n';
  std::cout << "max(" << dVal0 << ", " << dVal1 << ") : " << ::max(dVal0, dVal1)
            << '\n';
  std::cout << "------------------------------------------------------------\n";

  std::string sVal0 = "abcdefe1g";
  std::string sVal1 = "12323424567";

  std::cout << "Before swap\n";
  std::cout << "sVal0 : " << sVal0 << '\n';
  std::cout << "sVal1 : " << sVal1 << '\n';

  std::cout << "After void swap(T& arg1, T& arg2)\n";
  ::swap(sVal0, sVal1);
  std::cout << "sVal0 : " << sVal0 << '\n';
  std::cout << "sVal1 : " << sVal1 << '\n';

  std::cout << "\nmin() & max() result\n";
  std::cout << "min(" << sVal0 << ", " << sVal1 << ") : " << ::min(sVal0, sVal1)
            << '\n';
  std::cout << "max(" << sVal0 << ", " << sVal1 << ") : " << ::max(sVal0, sVal1)
            << '\n';
  std::cout << "------------------------------------------------------------\n";

  char* cStrVal0;
  char* cStrVal1;

  cStrVal0 = const_cast<char*>("n4i0nr");
  cStrVal1 = const_cast<char*>("2biqrereq");

  std::cout << "Before swap\n";
  std::cout << "cStrVal0 : " << cStrVal0 << '\n';
  std::cout << "cStrVal1 : " << cStrVal1 << '\n';

  std::cout << "After void swap(T& arg1, T& arg2)\n";
  ::swap(cStrVal0, cStrVal1);
  std::cout << "cStrVal0 : " << cStrVal0 << '\n';
  std::cout << "cStrVal1 : " << cStrVal1 << '\n';

  std::cout << "\nmin() & max() result\n";
  std::cout << "cStrVal0 : " << reinterpret_cast<uint64_t>(cStrVal0) << '\n';
  std::cout << "cStrVal1 : " << reinterpret_cast<uint64_t>(cStrVal1) << '\n';
  std::cout << "min(" << cStrVal0 << ", " << cStrVal1
            << ") : " << ::min(cStrVal0, cStrVal1) << '\n';
  std::cout << "max(" << cStrVal0 << ", " << cStrVal1
            << ") : " << ::max(cStrVal0, cStrVal1) << '\n';
  std::cout << "------------------------------------------------------------\n";

  std::complex<double> compVal0 = std::complex<double>(7, -12);
  std::complex<double> compVal1 = std::complex<double>(-42, 42);

  std::cout << "Before swap\n";
  std::cout << "compVal0 : " << compVal0 << '\n';
  std::cout << "compVal1 : " << compVal1 << '\n';

  std::cout << "After void swap(T& arg1, T& arg2)\n";
  ::swap(compVal0, compVal1);
  std::cout << "compVal0 : " << compVal0 << '\n';
  std::cout << "compVal1 : " << compVal1 << '\n';

  // std::cout << "\nmin() & max() result\n";
  // std::cout << "min(" << compVal0 << ", " << compVal1
  //           << ") : " << ::min(compVal0, compVal1) << '\n';
  // std::cout << "max(" << compVal0 << ", " << compVal1
  //           << ") : " << ::max(compVal0, compVal1) << '\n';
  // std::cout <<
  // "------------------------------------------------------------\n";
}
