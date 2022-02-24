//Bubble Sort Program

#include<iostream>
using namespace std;
int main()
{
    int a[100], i,j ,n,temp;

    cout<<"Enter range of the array: ";
    cin>>n;
    cout<<"\nEnter elements into the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    cout<<"\nThe sorted array elements are: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}