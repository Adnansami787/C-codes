#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0;

    cout<<"enter number of student :";
    cin>>n;


    int students[n];

    for(int i=0;i<5;i++)
       {cin >> students[i];
       sum=sum+students[i];
    }
    cout<<"total marks : "<<sum<<endl;

    float avg=(float)sum/n;
    cout<< "average :"<<avg<<endl;


    int max=students[0];
    int min=students[0];

    for(int i=1;i<n;i++)
    {
        if(max < students[i])
        {
            max = students[i];
        }
        if(min > students[i])
        {
            min = students[i];
        }
        cout <<"maximum marks= " <<max<<endl;
        cout <<"minimum marks= " <<min;
    }

    getch();


}

