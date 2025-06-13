//task 1 cgpa calc 
#include <iostream>
using namespace std;

int main()
{
//ask for the number of subjects 
int n;
cout << "enter number of subjects : ";
cin>>n;

//create two arrays:
float gradepoints[n], credithours[n];
float totalgradepoints = 0, totalcredits = 0;

//gradepoints[] stores thr grade of each subject
//credithours[] stores how many credits each subject carries.

for (int i=0;i<n;i++)
{
    cout << "enter grade points for subject"<<i+1<<":";
    cin>>gradepoints[i];
        cout << "enter credit hours for subject "<<i+1<<":";
    cin >> credithours[i];
//calculate total grade points and total credits:
totalgradepoints += gradepoints[i] * credithours[i];
totalcredits += credithours[i];

}
float cgpa = totalgradepoints / totalcredits ;
cout << "your CGPA is :" << cgpa << endl;
return 0;
}