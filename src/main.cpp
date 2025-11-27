#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "You entered " << x << " and " << y << '\n';

    return 0;
}
