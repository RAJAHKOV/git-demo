#include <iostream>
 
int main()
{
    std::cout << "Enter 0 or 1: ";
    int x;
    std::cin >> x;
    if (x = 0) // oops, we used an assignment here instead of a test for equality
        std::cout << "You entered 0";
    else
        std::cout << "You entered 1";
 
    return 0;
}