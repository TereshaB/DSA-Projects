
#include<iostream>
#include <cfloat>
using namespace std;
int lowest(int arr[],int size)
{   
    int low = INT_MAX;
    for(int i=0;i<size;i++)
    {
         if (arr[i]<low)
        {
            low=arr[i];
        }
    }
    cout<<"The lowest mark scored by a student in this database is :"<<low<<endl;
    return low;
}
int highest(int arr[],int size )
{
    int high = INT_MIN;
    for(int i =0;i<size;i++)
    {
        if (arr[i]>high)
        {
            high=arr[i];
        }
    }
    cout<<"The highest mark scored by a student in this database is :"<<high<<endl;
    return high;

}
int average(int arr[],int size)
{
    int agg=0;
    for(int i =0;i<size;i++)
     {
        agg=agg+arr[i];
     }
     int avg = agg/size;
    cout<<"The average  mark scored by a student in this database is :"<<avg<<endl;
      return avg;


    
}
int main()
{
    int num;
    cout<<"Enter the number of students whose marks you would like to input"<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter the marks of students"<<endl;
    for(int i =0;i<num;i++)
    {
        int val;
        cin>>val;
        arr[i]=val;
    }
    lowest(arr,num);
    highest(arr,num);
    average(arr,num);
}
