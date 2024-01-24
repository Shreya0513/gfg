#include <iostream>
using namespace std;

int ternarySearch(int arr[], int start, int end, int key)
{
    if(start>=1)
    {
        int mid1=start+(end-start)/3;
        int mid2=end-(end-start)/3;

        if(arr[mid1]==key)
        {
            return mid1;
        }

        if(arr[mid2]==key)
        {
            return mid2;
        }

        if(key<arr[mid1])
        {
            return ternarySearch(arr, start, mid1-1, key);
        }
        else if(key>arr[mid2])
        {
            return ternarySearch(arr, mid2+1, end, key);
        }
        else
        {
            return ternarySearch(arr, mid1+1, mid2-1, key);
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
    int ans=ternarySearch(array, 0, size-1, key);
    cout<<"given number is at"<<ans<<"index";
    return 0;
}
