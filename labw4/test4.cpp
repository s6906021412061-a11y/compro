#include <iostream>
#include <cmath>

using namespace std;

int main() {
float x1, y1, x2, y2;
float DT, DE;

cout << "Enter Start point x1, y1:";
cin >> x1 >> y1;
cout << "Enter End point x2, y2:";
cin >> x2 >> y2;

DT = abs(x1 - x2) + abs(y1 - y2);
DE = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

cout << "DT Taxicab Geometry = " << DT << endl;
cout << "DE Euclidean geometry = " << DE << endl;

return(0);
}