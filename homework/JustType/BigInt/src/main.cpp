#include "BigInt.hpp"
#include <iostream>

int main() 
{
    BigInt a("12345678901234567890");
    BigInt b("98765432109876543210");

    BigInt sum = a + b;
    BigInt diff = b - a;
    BigInt prod = a * b;

    std::cout << "测试a + b = ";
    sum.output();
    std::cout << "测试b - a = ";
    diff.output();
    std::cout << "测试a * b = ";
    prod.output();

    return 0;
}
