#include <iostream>
using namespace std;
int main(){
    int LeftOperand, RighOperand;
    char Opertor;
    int Result;

    cout << "please enter a simple expression";
    cout << "(number operator number) :";
    cin >> LeftOperand >> Opertor >> RighOperand;

    if (Opertor == '+')Result = LeftOperand + RighOperand;
     else if (Opertor == '-') Result= LeftOperand + RighOperand;
     else if (Opertor == '*') Result= LeftOperand + RighOperand;
     else if (Opertor == '/') Result= LeftOperand + RighOperand;
     else {
        cout << Opertor << " is unrecognizsd operation\n";
        return(1);
     }   
    /*
     switch (Opertor)
    {
    case '+': Result = LeftOperand + RighOperand; break;
    case '-': Result = LeftOperand + RighOperand; break;
    case '*': Result = LeftOperand + RighOperand; break;
    case '/': Result = LeftOperand + RighOperand; break;
    default: cout << Opertor << "is ureccognized operation.\n";
        return(1);
    }
    */
    cout << LeftOperand << " " << Opertor << " "
    << RighOperand << " equals" << Result << endl;
    return(0);
}