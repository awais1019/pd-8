#include<iostream>
using namespace std;
main()
{
    string array1;
    string array2;
    cin>>array1;
    cin>>array2;
    int count=0;
    int lenth1=array1.length();
    int lenth2=array2.length();
    for(int idx=0;idx<lenth1;idx++)
    {
        if(array1[idx]==array2[idx]||array1[idx]==array2[idx+1]||array1[idx]==array2[idx+3])
        {
            count=count+1;
        }
    }
        cout<<count;



}