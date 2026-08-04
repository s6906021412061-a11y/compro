#include <iostream>
using namespace std;
int main()
{
    int digit = 0;
    while (digit <= 9)
    {
        cout << digit << " ";
        digit++;
    }
    cout << ";" << digit << endl;
    
    digit = 20;
    while (digit > 10)
    {
        cout << digit << " ";
        digit--;
    }

    cout << ": " << digit << endl;

    return (0);
}