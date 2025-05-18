#include<iostream>
using namespace std;
int BinarySearch(int arr[], int left, int right, int target)
{
    while(left<=right)
    {
        int mid = left + (right-left)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]<target)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {34,65,23,87,46};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    int result = BinarySearch(arr,0,n-1,target);
    if(result!=-1)
    {
        cout<<"Element "<<target<<" is found at index "<<result<<endl;
    }
    else{
        cout<<"Element "<<target<<" is not in the list."<<endl;
    }
    return 0;
}
