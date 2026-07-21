#include <iostream>
using namespace std;
int main(){
    string name;
    int number;

    cout << "enter string";
    cin >> name;
    cout <<" enter number";
    cin >> number;

    for (int n =1 ;n <= number ; n++){
        cout << n <<"[" << name <<"]"<< endl;
    }
    cout << endl;
     for (float n =number ;n >= 1.0 ; n--){
        cout << n <<"[" << name <<"]"<< endl;
    }
    cout << endl;
    return(0);
}