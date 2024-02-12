#include <iostream>
#include <iomanip>

// Function to calculate unit token number
long long calculateUnitToken(int pricePerUnit, long long meterNumber) {
    // Complex formula for calculating unit token number
    long long unitToken = ((pricePerUnit * meterNumber) % 10000000000000000000LL);
    return unitToken;
}

int main() {
    int pricePerUnit;
    long long meterNumber;

    // Prompt user to enter price per unit
    std::cout << "Enter the price per unit of electricity: ";
    std::cin >> pricePerUnit;

    // Prompt user to enter meter number
    std::cout << "Enter the meter number: ";
    std::cin >> meterNumber;

    // Calculate unit token number
    long long unitToken = calculateUnitToken(pricePerUnit, meterNumber);

    // Display unit token number in groups of four digits
    std::cout << "Unit token number: ";
    std::cout << std::setw(4) << std::setfill('0') << unitToken / 100000000000000LL << " ";
    std::cout << std::setw(4) << std::setfill('0') << (unitToken / 1000000000000LL) % 10000 << " ";
    std::cout << std::setw(4) << std::setfill('0') << (unitToken / 10000000000LL) % 10000 << " ";
    std::cout << std::setw(4) << std::setfill('0') << (unitToken / 100000000LL) % 10000 << " ";
    std::cout << std::setw(4) << std::setfill('0') << (unitToken / 1000000LL) % 10000 << std::endl;

    return 0;
}
