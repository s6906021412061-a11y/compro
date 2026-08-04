#include <iostream>
using namespace std;
int main(){
    int num,count;
    bool flag = true;

    do {
        cout << "\n input number (1-20) : ";
        cin >> num;
        if ((num >= 0)&&(num <= 20))
            flag = false ;
        else 
            cout << "number value over limit .";
    }while (flag);
    cout << "NUm = "<< num << endl;
    if (num >= 0){
        long fac = 1;
        if (num > 0 ){
            count = 1;
            while (count <= num ) { 
                cout << count << " ";
                fac += count ++;
                cout << fac << endl;
            }
            cout << "factorial of "<< num << "= ";
            cout << fac << endl;
        }
    }
}