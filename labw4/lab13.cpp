#include <iostream>
using namespace std;

int main(){
    int num;
    int sum=0;
    int value;

    cout << "enter number : ";
    cin >> num;
    for (int n=1 ; n <= num ; n++){
        cout << "enter integer value ("<< n <<" ):";
        cin >> value ;
        sum = sum + value;

    }
    cout << "\n summation of interger "<< num
          << "value = " << sum << endl;
    return(0);
}