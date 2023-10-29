#include <iostream>

int main()
{
    int a;
    std::cout << "enter a number to check if it is even or odd:";
    std::cin >> a;
    (a % 2) == 0 ? std::cout << "the number is even"
                             << "\n"
                 : std::cout << "the number is odd"
                             << "\n";
}