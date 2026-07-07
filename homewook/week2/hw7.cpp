#include <iostream>
using namespace std;

int main(){
    float price,vat,vatRate,natPrice;

    cout <<"VAT Callulate\t"<<endl;
    cout <<"============================"<<"\n";
    
    cout <<"Enter your Price"<<endl;
    cin >> price;

    cout <<"Enter your VAT"<<endl;
    cin >> vat;

    vatRate = price * (vat/100);
    natPrice = price+vatRate;

    cout <<"Net Price of Product = "<< natPrice <<endl;
    cout <<"Price Excluding VAT = "<< price <<endl;
    cout <<"VAT = " << vatRate <<endl;
    cout <<"============================"<<"\n";
    return(0);

}