#include <iostream>
using namespace std;
int main()
{
    char choice;
    cout << "Enter Charater :";
    cin >> choice;
    switch (toupper(choice))
    {
    case 'w':
    case 'W':
        cout << "blue";
    case 'A' : 
        cout << "green";
        
        case 'R':
    case 'r':
        cout << "red";

        break;

    default:
        cout << "i don't know.\n";
    }

    return (0);
}
