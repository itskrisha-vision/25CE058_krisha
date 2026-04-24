#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the size of m=";
    cin>>m;
    cout<<"enter the size of n=";
    cin>>n;
    int* arr1=new int[m];
    int* arr2=new int[n];
    cout<<"\narr1=";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"\narr2=";
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    int* merged=new int[m+n];

    int i=0,j=0,k=0;

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
            merged[k++]=arr1[i++];
        else
            merged[k++]=arr2[j++];
    }
    while(i<m)
        merged[k++]=arr1[i++];
    while(j<n)
        merged[k++]=arr2[j++];

    for(int i=0;i<n+m;i++)
    {
        cout<<merged[i]<<" ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] merged;
}
