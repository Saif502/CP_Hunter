#include <iostream>
#include <string>

std::string divideByTwo(const std::string& number) {
    std::string result;
    int carry = 0;

    for (char digit : number) {
        int currentDigit = digit - '0';
        int temp = carry * 10 + currentDigit;
        result.push_back((temp / 2) + '0');
        carry = temp % 2;
    }

    // Remove leading zeros
    size_t nonZeroPos = result.find_first_not_of('0');
    if (nonZeroPos != std::string::npos) {
        result = result.substr(nonZeroPos);
    } else {
        result = "0";
    }

    return result;
}

std::string decimalToBinary(const std::string& decimalNumber) {
    std::string binaryNumber;
    std::string remainder;
    std::string quotient = decimalNumber;

    // Keep dividing the decimal number by 2 until the quotient becomes zero
    while (quotient != "0") {
        remainder = std::to_string((quotient.back() - '0') % 2) + remainder;
        quotient = divideByTwo(quotient);
    }

    binaryNumber = remainder;
    return binaryNumber;
}



int main() {
    std::string decimalNumber;
    std::cin>>decimalNumber;
    std::string binaryNumber = decimalToBinary(decimalNumber);

    std::cout << "Decimal Number: " << decimalNumber << std::endl;
    std::cout << "Binary Number: " << binaryNumber << std::endl;

    return 0;
}
