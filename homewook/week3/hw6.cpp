#include <iostream>
using namespace std;
int main(){
    int bin, d1, d2, d3, d4, decimal;
    cout << "Enter binary number : ";
    cin >> bin;

    d1 = bin / 1000;          // หลักที่มีค่า 8
    d2 = (bin / 100) % 10;    // หลักที่มีค่า 4
    d3 = (bin / 10) % 10;     // หลักที่มีค่า 2
    d4 = bin % 10;            // หลักที่มีค่า 1

    decimal = d1 * 8 + d2 * 4 + d3 * 2 + d4 * 1;

    cout << "Decimal value of " << bin << " = " << decimal << endl;
    return 0;
}