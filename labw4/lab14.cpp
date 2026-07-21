#include <iostream>
#include <omp.h>
using namespace std;
int main(){
    #pragma omp parallel
    cout << "hello from omp\n";

    return(0);
}