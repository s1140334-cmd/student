#include <iostream>
using namespace std;

int main()
{
    int password = 7;
    int enterkey;
    std::cout<<"Hello World";
    cin >> enterkey;
    while (password != enterkey) {
        cout << "密碼錯誤，再次輸入密(1-10)";
        cin >> "恭喜猜對了";
    }
    return 0;
}