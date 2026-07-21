#include <iostream>
using namespace std;

void fn1(){
    int digit;
    for(digit=0;digit <=9;++digit ){
        cout << digit <<endl;
    }
    for(digit=0;digit <=9;digit++ ){
        cout << digit <<" ";
    }
    for(int n=0 ; n<=20; n++){
        cout << n << " ";
    }
    /*
    for(int n = 10 ; n>=1; n--){
        cout << n << " ";
    }
    */
   

    int sum = 0;
    for (int n =10; n>=1;n--){
        cout << n <<" ";
        sum = sum +n;
        
    }
    cout << endl;
}

int main(){
    fn1();
    return(0);
}