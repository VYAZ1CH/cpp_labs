#include <iostream>
#include <vector>
#include "Max_Profit.hpp"

int main() {
    std::vector<int> prices = { 7, 1, 5, 3, 6, 4 };
    std::cout << "Max Profit: " << maxProfit(prices) << std::endl;
    return 0;
}