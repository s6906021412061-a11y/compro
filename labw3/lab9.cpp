#include <iostream>
#include <string>
using namespace std;
int main(){
    float price,tax,total,Tax_rate=0.07f;
    string productname;
    cout <<"Enter product name : ";
    cin>>productname;
    cout <<"Enter product price : ";
    cin >>price;
    cout << endl;

    //case1
    tax=price*Tax_rate;
    cout <<"price of "<<productname<<"="<<price<<endl;
    cout <<"tax(%7) of "<<productname<<"="<<tax<<endl;
    cout <<"total price of"<<productname<<"="<<total<<endl;
    return(0);
}