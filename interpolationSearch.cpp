#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int start, int end, int key)
{
    int pos;
    if(start<=end && key>=arr[start] && key<=arr[end] )
    {
        pos=start+ (((double)(end-start)/(arr[start]-arr[end]))*(key-arr[start]));
        if(arr[pos]==key)
        {
            return pos;
        }

        if(key>arr[pos])
        {
            return interpolationSearch(arr, pos+1, end, key);
        }

        if(key<arr[pos])
        {
            return interpolationSearch(arr, start, pos-1, key);
        }
    }
    return -1;
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
    int ans=interpolationSearch(array, 0, size-1, key);
    cout<<"given number is at"<<ans<<"index";
    return 0;
}
