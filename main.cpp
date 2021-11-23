#include <iostream>
#include "lib/math/operations.hpp"

int main()
{
    std::cout << "Praise the Lord" << std::endl;

    math::operations op;
    int sum = op.sum(5, 4);
    std::cout << "Sum of 5 + 4 :" << sum << std::endl;

    return 0;
}