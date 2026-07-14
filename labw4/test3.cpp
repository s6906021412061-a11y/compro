#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,ans ;
    cout << " Enter a +b";
    cout << "(a,b) : ";
    cin >> a >> b;
    ans = pow(2,a)+pow(b,2);
    c =  pow(0.5, ans);
    cout << "hypot = "<<(float)sqrt(ans) <<endl;
    cout << pow(4,2) <<endl;
    return(0);
}