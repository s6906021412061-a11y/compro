#include <iostream>
using namespace std;
int main(){
    int number, Num1, Num2, Num3, Num4;
    cout << "Enter number : ";
    cin >> number;

    Num1 = number / 1000;
    Num2 = (number / 100) % 10;
    Num3 = (number / 10) % 10;
    Num4 = number % 10;

    cout << Num1 << "   " << Num2 << "   " << Num3 << "   " << Num4 << endl;
    return 0;
}