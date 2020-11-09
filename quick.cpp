#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    int pi=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;++j)
    {
        if(arr[j]<pi)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return(i+1);
}

void quick(int arr[],int low,int high)
{
    if(low<high)
    {
        int p_index=partition(arr,low,high);
        quick(arr,low,p_index-1);
        quick(arr,p_index+1,high);
    }

}
void display(int arr[],int n)
{
    for(int i=0;i<n;++i)
    {
        cout<<" "<<arr[i];
    }
    cout<<"\n";
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i)
    {
        cin>>arr[i];
    }
    quick(arr,0,size-1);
    display(arr,size);
}