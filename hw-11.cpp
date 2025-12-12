#include <iostream>
using namespace std;
int main(){
    int subjest = 5;
    int grade [5] = {42,56,23,61,22};
    int sum = 0;
    for (int i=0;i<5;i++) {
        sum =sum + grade[i];
    }
    int average = sum/subjest;
    cout << "段考的平均是: "<<average;
    return 0;
}