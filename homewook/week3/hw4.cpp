#include <iostream>
using namespace std;
int main(){
    float F , C ,F2;
    cout << " Enter you F : ";
    cin >> F;

    C = (5.0 / 9.0) * (F - 32);
    F2 = (9.0 / 5.0 ) * C + 32;

    cout << "F convert to C = " << C <<endl;
    cout << "C convert to F = " << F2 <<endl;
    return(0);


}