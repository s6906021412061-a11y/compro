#include <iostream> 
using namespace std;
void fn1(float,char);
void fn2(int,int);
void fn3(float circle);
int main(){
    return(0);
}
void fn1 (float pay,char status){
    float tax;
    if (status == 's') tax = 0.20*pay; 
    else tax = 0.14*pay;
    cout << "tax : "<< tax <<endl;
}
void fn2(int pastdue, int account_no){
    float credit;
    if(pastdue>0){
        cout << "Accout nummber : "<< account_no <<" is overdos";
        credit = 0;
    }
}
void fn3(float circle){
    float area,radius;
    if(circle){
        cin >> radius;
        area = 3.14529*radius*radius;
        cout <<"area of circle = "<< area;
    }
    else{
        float length,width;
        cin >> length >> width ;
        area = length*width;
        cout << "area of ranguler = " << area << endl;
    }
}