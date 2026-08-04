#include <iostream>
using namespace std;
int main(){
    unsigned long sum = 0L;/**/
    int n,i = 1;
    cout << "please enter value n to find summation of n*n :";
    cin >> n;
    do {
        sum += i*i;
        cout << i <<" "<<sum <<endl;
        i++;
    }while (i<n);

    cout << "sum = " << sum <<endl;
    return(0);
}