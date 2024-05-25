#include "pch.h"
#include "homework_seletkov.hpp"

int GetProductsAmount(std::vector<int> prices, int amountOfMoney) {
    std::sort(prices.begin(), prices.end());

    int sum = 0;
    for (int i = 0; i < prices.size(); ++i) {
        sum += prices[i];
        if (sum > amountOfMoney) {
            return i;
        }
    }

    return prices.size();
}

bool IsLeapYear(int year) {
    return !(year % 4 != 0 || year % 100 == 0 && year % 400 != 0);
}
