#include <iostream>
#include <string>
using namespace std;
int main (){
    char ch;
    int count = 0;
    string str;
    cout << "enter string : ";
    while (cin >> ch ){
        count ++;
        str += ch;
    }
    cout << "\n length of string (" << str << ") is ";
    cout << count <<endl;
    return(0);
}