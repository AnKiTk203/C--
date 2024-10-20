#include<bits/stdc++.h>
using namespace std;

int count = 0;

void merge(int *arr, int s , int e)
{
    int mid = s + (e-s)/2;
    int i=0;
    
}


void mergeSort(int *arr, int s, int e)
{
    //base case as mid +1 is what we are doing at some point s wil be > e.
    if(s >= e)
    {
        return;
    }
    
    int mid = e + (s-e)/2;

    //left part ko sort kiya
    mergeSort(arr, s, mid); 

    //right part ko sort kiya
    mergeSort(arr, mid+1, e);

    //merged two sorted arrays
    merge(arr, s, e);

}
int main()
{
    int arr[] = {2,4,5,3};
    
    int s = 0,e = 3 ;

    mergeSort(arr, s,e);

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}