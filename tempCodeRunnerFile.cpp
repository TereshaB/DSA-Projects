/*1️⃣ Student Marks Analyzer (Highly Recommended)

Features

Take marks of n students in an array. done 

Find and display:

Highest mark 

Lowest mark 

Average marks 

Show which student achieved highest and lowest.

Concepts used: max, min, traversal, basic logic
Difficulty: Easy–Medium */

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
    return high;
}
int average(int arr[],int size)
{
    int avg=0;
    for(int i =0;i<size;i++)
     {
        avg=avg+arr[i];
     }
    return avg;
    
}
int main()
{
    int num;
    cout<<"Enter the number of students whose marks you would like to input"<<endl;
    cin>>num;
    int arr[num];
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
