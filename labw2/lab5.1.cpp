#include <iostream>
using namespace std;

int main(){
    cout << 23 << "\t" << 45 << "\t" << 101 << "\t" << 55 << "\n" ;
    cout << 23L << "\t" << 45L << "\t" << 101L << "\t" << 55L << "\n" ;
    cout << 023 << "\t" << 045 << "\t" << 0101 << "\t" << 055 << "\n" ;
    cout << 0x23 << "\t" << 0x45 << "\t" << 0x101 << "\t" << 0x55 << "\n" ;
    cout << 10E3 << "\t" << 1.5E3 << "\n";
    return(0);
}