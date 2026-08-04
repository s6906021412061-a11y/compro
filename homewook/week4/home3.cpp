#include <iostream>
using namespace std;
string cal_grade(int score);
int main(){
    int number;
    while (true){
        cout<< "cel grade 1\n";
        cout<< "1: test function\n";
        cout<< "2: input score\n";
        cout<< "3: exit progarm\n";
        cout<< "please enter you choice[1-3]: \n";
        cin >> number;
        if(number ==1){
            for(int i=-2;i<102;i++){
                cout << i <<"\t" << cal_grade(i);
                cout << i <<"="<<cal_grade(i)<<"\t";
                if( i %5==0) cout << endl;
            }               
        }
        else if(number ==2){
            int sc = 0;
            cout << "please enter your score :";
            cin >> sc ;
            cout << sc <<"="<< cal_grade(sc)<<"\n";

        }
        else if(number ==3)break;
        else cout <<"error"<< endl;
        cout << "you entered "<< number << endl;
    }
    cout <<"end program"<< number <<endl;
    return(0);
}

string cal_grade(int score){
    string grade;
    if(score>=90)grade = "A";
    else if (score >=80 )grade = "B";
    else grade ="F";
    return grade;
}