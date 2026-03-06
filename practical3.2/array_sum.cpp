#include "array_sum.h"
#include<iostream>

using namespace std;

void array_sum::input_data(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void array_sum::iterative_array(int n,int a[])
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<"\nsum="<<sum;
}
int array_sum::recursive_array(int n,int a[])
{
    if(n==0)
        return 0;

    return a[n-1]+recursive_array(n-1,a);

}

