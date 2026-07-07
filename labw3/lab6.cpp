#include <iostream>
using namespace std;
int main(){
    float price,height;
    cout << "Enter price : ";
    cin >> price;
    cout <<"Enter hight : ";
    cin >>height;

    cout <<" You are : "<<(height > 160?" adult":"kid ")<<endl;
    cout <<"Totol price : "<<(height > 160 ? price : price /2 )<<endl;
    return(0);
}
