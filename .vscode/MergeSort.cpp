#include<bits/stdc++.h>
using namespace std;



void merge(int *arr, int s , int e, int& count)
{
    int mid = (s+e)/2;
    int i=0;
    int len1 = mid - s + 1;
    int len2 = e - mid ;

    int *array1 = new int [len1];
    int *array2 = new int [len2];

    int mainArrayIndex = s ;
    
    //copy values
    
    for(i=0;i<len1;i++)
    {
        array1[i] = arr[mainArrayIndex++];
    }
    
    mainArrayIndex = mid + 1;
    
    for(i=0;i<len2;i++)
    {
        array2[i] = arr[mainArrayIndex++];
    }
    
    int index1 = 0, index2 = 0; 
    mainArrayIndex = s;
    //merging sorted arrays
    
    int left = 0, right = 0;
    while(left < len1 && right < len2)
    {
        if(array1[left] > array2[right])
        {
            count += mid - left + 1;
            right++;
        }
        left++;
    }

    while(index1 < len1 && index2 < len2)
    {
        if(array1[index1] < array2[index2])
        {
            arr[mainArrayIndex++] = array1[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = array2[index2++];
        }
    }
    //checking if all elements are added or not
    while(index1<len1)
    {
        arr[mainArrayIndex++] = array1[index1++];
    }

    while(index2<len2)
    {
        arr[mainArrayIndex++] = array2[index2++];
    }
    delete []array1;
    delete []array2;
}


void mergeSort(int *arr, int s, int e, int& count)
{
    //base case as mid +1 is what we are doing so at some point s wil be >= e.
    if(s >= e)
    {
        return;
    }
    
    int mid = (s+e)/2;

    //left part ko sort kiya
    mergeSort(arr, s, mid, count); 

    //right part ko sort kiya
    mergeSort(arr, mid+1, e, count);

    //merged two sorted arrays
    merge(arr, s, e, count);
}
int main()
{
    int arr[] = {2,4,1,3};
    int count = 0;
    int n = 4;
    mergeSort(arr, 0, n-1, count);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;

}