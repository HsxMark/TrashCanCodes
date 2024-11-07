#include "BigInt.hpp"
#include <iostream>
#include <algorithm>


BigInt::BigInt() : num(1, 0), len(1) {}

BigInt::BigInt(int value) 
{
    if (value == 0) 
    {
        num.push_back(0);
        len = 1;
    } else {
        while (value > 0) 
        {
            num.push_back(value % 10);
            value /= 10;
        }
        len = num.size();
    }
}

BigInt::BigInt(const std::string& str) 
{
    len = str.size();
    num.resize(len);
    for (int i = 0; i < len; ++i) 
    {
        num[i] = str[len - i - 1] - '0';
    }
}

// 加法
BigInt BigInt::operator+(const BigInt& other) const
 {
    BigInt result;
    result.num.clear();
    int carry = 0;
    int maxLen = std::max(len, other.len);
    for (int i = 0; i < maxLen || carry; ++i) 
    {
        int sum = carry;
        if (i < len) sum += num[i];
        if (i < other.len) sum += other.num[i];
        result.num.push_back(sum % 10);
        carry = sum / 10;
    }
    result.len = result.num.size();
    return result;
}

// 减法
BigInt BigInt::operator-(const BigInt& other) const 
{
    BigInt result;
    result.num.clear();
    int borrow = 0;
    for (int i = 0; i < len; ++i) 
    {
        int diff = num[i] - borrow - (i < other.len ? other.num[i] : 0);
        if (diff < 0) 
        {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.num.push_back(diff);
    }
    result.len = result.num.size();
    return result;
}

// 乘法
BigInt BigInt::operator*(const BigInt& other) const 
{
    BigInt result;
    result.num.assign(len + other.len, 0);
    for (int i = 0; i < len; ++i) 
    {
        int carry = 0;
        for (int j = 0; j < other.len || carry; ++j) 
        {
            int prod = result.num[i + j] + num[i] * (j < other.len ? other.num[j] : 0) + carry;
            result.num[i + j] = prod % 10;
            carry = prod / 10;
        }
    }
    result.len = result.num.size();
    return result;
}

//除法
BigInt BigInt::operator/(const BigInt& other) const 
{
    BigInt result;
    return result; 
}

void BigInt::output() const 
{
    for (int i = len - 1; i >= 0; --i) 
    {
        std::cout << num[i];
    }
    std::cout << std::endl;
}

