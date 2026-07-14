#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double r;
    if (cin >> r); {
    const double PI = acos(-1.0);
    double area = PI * r * r;
    double taxi = 2.0 *r *r;

    cout << fixed << setprecision(6);
    cout << area << "\n";
    cout << taxi << "\n";
    }
    return(0);
}