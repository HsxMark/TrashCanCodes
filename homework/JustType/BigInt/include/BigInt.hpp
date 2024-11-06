#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <vector>
#include <string>
#include <iostream>

class BigInt {
private:
    std::vector<int> num; 
    int len; 

public:
    
    BigInt(); 
    BigInt(int value); 
    BigInt(const std::string& str); 

  
    BigInt operator+(const BigInt& other) const;
    BigInt operator-(const BigInt& other) const;
    BigInt operator*(const BigInt& other) const;
    BigInt operator/(const BigInt& other) const;

    void output() const; 

private:
    void removeLeadingZeros(); 
};

#endif
