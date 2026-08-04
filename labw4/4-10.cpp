#include <iostream>
using namespace std;
int main()
{
    int Listsize = 5;
    int ValuesProcessd = 0;
    float ValueSum = 0;

    cout << "please enter " << Listsize << "number " << endl;
    while (ValuesProcessd < Listsize)
    {
        float Value;
        cin >> Value;
        ValueSum += Value;
        ++ValuesProcessd;
    }
    float average = ValueSum / ValuesProcessd;
    cout << "average : " << average << endl;

    return (0);
}