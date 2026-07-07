#include <iostream>
using namespace std;

int main(){
    float X;
    cout <<"Enter Value X : ";
    cin >> X;
    float Result(0);
    Result = X*X*X + 3 * X - 10 ;
    cout << "\n Result of x*x*x+3*x-10 = ";
    cout << Result<<endl;
    return(0);
}