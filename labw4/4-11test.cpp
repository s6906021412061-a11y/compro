#include <iostream>
using namespace std;
int main()
{
    int digit = 0;
    do
    {
        cout << digit;
        digit++;
    } while (digit <= 9);

    digit = 8;
    do
    {
        cout << digit;
        digit--;
    } while (digit > 10);
    cout << digit << endl;

    return(0);
}