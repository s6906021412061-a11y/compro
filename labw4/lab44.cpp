#include <iostream>
#include <cmath>
using namespace std;

// Added missing semicolons
void fn1(int);
int fn2(int);
void fn3(float);
void fn4(float, char);
void fn5(int, int);

int main() {
    // Note: 9.5 will be truncated to 9
    fn1(9.5); 
    return 0;
}

void fn1(int x) {
    if (x < 0) {
        cout << x;
    }
}

int fn2(int pastdue) {
    int cadit = -1; // Initialized to prevent undefined behavior if pastdue <= 0
    if (pastdue > 0) {
        cadit = 0;
    }
    cout << cadit << endl;
    return cadit;
}

void fn3(float x) {
    // Changed '=' to '==' for equality comparison
    if (x == 3.0f) { 
        float y = 3 * sqrt(x);
        cout << y << endl;
    }
}

void fn4(float balance, char status) {
    if ((balance < 1000.0) || (status == 'R')) {
        cout << "4: " << balance << endl;
    }
}

void fn5(int a, int b) {
    if ((a >= 0) && (b == 5)) {
        // Changed 2 to 2.0 to prevent integer division truncation
        float xid = (a + b) / 2.0f; 
        float yid = sqrt(xid);
        cout << "5: " << xid << ", " << yid << endl;
    }
}