#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main(){
    string name ="Phakkapol";
    for(int i = 0;i< name.length();i++){
        cout << "\r";
        for (int j = 0 ;j < i; j++)cout <<" ";
        cout << name[i];
        sleep(1);
    }
        cout << "\r" <<name;
        cout << endl;
        return(0);
}