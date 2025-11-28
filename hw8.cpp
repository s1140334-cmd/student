#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i < 6; i++) {
        std::cout << "現在i的值是:" << i << "\n";
       sum = sum + 1;
        
    }
    std::cout << "1+...+5總和是:" << sum  << "\n";
    return 0;
}