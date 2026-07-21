#include <iostream>
#include <string>
using namespace std;
int main()
{

    char ch;
    cout << "\nEnter a character :";
    cin >> ch;
    cout << endl;

    if (ch >= 'a' && ch <= 'z')
        cout << int(ch) << "[" << ch << "]is lower charater.\n";
    else if (ch >= 'a' && ch <= 'z')
        cout << int(ch) << "[" << ch << "]is upper charater.\n";
    else if (ch >= '0' && ch <= '9')
        cout << int(ch) << "[" << ch << "]is numeric.\n";
    else
        cout << ch << "is special charater";
    cout << endl;
    return (0);
}
