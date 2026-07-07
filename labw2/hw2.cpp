#include <iostream>
#define PI 3.1415
using namespace std;

int main (){
    float radius, area, circum;

    cout << "Program Calculate Area Circle.\n";

    cout << "Circle radius (real number)? ";
    cin >> radius;
    cout << "\n";

    area = PI*radius*radius;
    circum = 2*PI*radius;

    cout << "Aera of cricle with radius "<< "is "<< area << "\n";
    cout << "circyeferance is "<< circum <<"\n";

}