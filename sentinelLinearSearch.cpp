#include <iostream>
using namespace std;

int sentinelLinearSearch(int arr[], int n, int key)
{
    int i=0;
    arr[n-1]=key;
    while(arr[i]!=key)
    {
        i++;
    }
    if(i<n || arr[i]==key)
    {
        return i;
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
    int ans=sentinelLinearSearch(array, size, key);
    cout<<"given number is at"<<ans<<"index";
    return 0;
}
