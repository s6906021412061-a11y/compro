#include <iostream>
using namespace std;

int main(){
    int iength,width,area,parimeter;
    cout << "================================== \t" <<endl; 
    cout << "Program calculate rectangle \t" <<endl;

    cout << "Enter your iength : ";
    cin >> iength;
    cout <<endl;
    cout << "Enter your width : ";
    cin >> width;
    cout << endl;

    area = iength*width;
    parimeter = 2*(width+iength);

    cout << "Area of Rectangle : " << area <<endl;
    cout << "Parimeter of Rectangle : " << parimeter <<endl;
    cout << "================================== \t" <<endl;
    return(0);

}
