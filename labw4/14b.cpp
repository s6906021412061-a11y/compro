#include <iostream>
using namespace std;
int main(){
    int number;
    while (true)
    {
        cout << "input number : ";
        cin >> number;
        if (number == 0 )break;
        cout << "you entered "<< number <<endl;

    }
    cout << "end program"<< endl;
    return(0);
}