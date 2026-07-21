#include <iostream>
using namespace std;
void cal_grade(int);
void greeting_time(float time);
int main()
{
    int score[] = {77, 62, 93, 21, 1};
    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++)
    {
        cout << "loob " << i << "score = " << score[i];
        cout << "graed = ";
        cal_grade(score[i]);
        cout << endl;
    }
    float time[] = {8.00, 12.00, 24.00, 24.01};
    for (int i = 0; i < sizeof(time) / sizeof(time[0]); i++)
    {
        cout << "loop " << i << "time = " << time[i] << " ";
        greeting_time(time[i]);
        cout << endl;
    }
    return (0);
}
void cal_grade(int mark)
{
    if (mark >= 80)
        cout << "A";
    else if (mark >= 70)
        cout << "B";
    else if (mark >= 60)
        cout << "C";
    else if (mark >= 50)
        cout << "D";
    else
        cout << "F";
}
void greeting_time(float time)
{
    if ((time >= 0.00) && (time < 24.00))
    {
        if ((time >= 0.00) && (time < 12.00))
        {
            cout << "Good moring";
        }
        else if ((time >= 12.00) && (time < 18.00))
        {
            cout << "Good afternoon";
        }
        else if ((time >= 18.00) && (time < 24.00))
        {
            cout << "Good evening";
        }
    }
    else
        cout << "time is out of range";
}
