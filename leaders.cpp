#include <iostream>
using namespace std;

void leaders(int arr[], int n)
{
    int max=arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            cout<<arr[i]<<" ";
        }
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
    leaders(array, size);
}

//time complexity=O(n) and space complexity=O(1)


