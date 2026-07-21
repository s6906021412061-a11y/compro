#include <iostream>
using namespace std;
int main(){
    char choice;
    float Area ;

    cout << " Program calculate Area "<< endl
        << "1 circle "<< endl
        << "2 rectangle"<<endl
        << "3 exit "<<endl;
    cout << "Enter your choose number :";
    cin >> choice;
    if (choice== '1 '){
        float radius;
        cout << "Enter radius : ";
        cin >> radius ;
        Area = 3.14159 * radius *radius ;
        cout << " Area of circle ="<<Area<<endl;
    }
    else if (choice== '2'){
        float length,width;
        cout << "Enter length and width : ";
        cin >> length >> width ;
        Area = length * width ;
        cout << " Area of rectangle ="<<Area<<endl;
    }

    else if (choice== '3')
        cout << "\nexit program \n";
    else 
        cout << "\n you chose out of "; 
    
    return(0);
}