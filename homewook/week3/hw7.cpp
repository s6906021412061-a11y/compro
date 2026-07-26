#include <iostream>
using namespace std;
int main(){
    int startKm, endKm, hour, minute, second, distance;
    float totalHours, avgVelocity;

    cout << "Data inputs are integer!." << endl;
    cout << "============================================================" << endl;
    cout << "Enter start kilometer : ";
    cin >> startKm;
    cout << "Enter end kilometer : ";
    cin >> endKm;
    cout << "Enter time used (hour minute second) : ";
    cin >> hour >> minute >> second;
    cout << "============================================================" << endl;

    distance   = endKm - startKm;
    totalHours = hour + minute / 60.0 + second / 3600.0;
    avgVelocity = distance / totalHours;

    cout << "Car traveled " << distance << " kilometers in "
         << hour << " hrs " << minute << " min " << second << " sec." << endl;
    cout << "Average velocity was " << avgVelocity << " kph." << endl;
    return 0;
} 