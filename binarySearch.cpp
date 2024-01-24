#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    if(end>=1)
    {
        int mid=start+(end-start)/2;
        if(mid==key)
        {
            return mid;
        }
        else
        {
            if(arr[mid]>key)
            {
                return binarySearch(arr, start, mid-1, key);
            }
            else
            {
                return binarySearch(arr, mid+1, end, key);
            }
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cout<<"Enter size of array";
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> array[i];
    }

    int key;
    cout<<"Enter the number you want to search";
    cin>>key;
    int ans=binarySearch(array, 0, size-1, key);
    cout<<"given number is at"<<ans<<"index";
    return 0;
}


