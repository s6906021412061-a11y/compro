#include <iostream>
using namespace std;
 int main(){
    string Name;
    int Age;
    /* input*/
    cout << "Enter name : "; //cin>>Name;
    getline(cin,Name);
    cout << "Enter age : "; cin >> Age;
    /*output*/
    cout << "\nHello : "<< Name << "."<<endl;
    cout << "You have : "<< Age <<" year old"<<endl;
    cout << "You are beginner programmer "<<endl;
    return(0);
 }