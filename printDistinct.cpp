#include <iostream>
#include <algorithm>
using namespace std;

void printDistinct(int arr[], int n)
{
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        while(i<n-1 && arr[i]==arr[i+1])
        {
            i++;
        }
        cout<<arr[i]<<" ";
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

    printDistinct(array, size);
    return 0;
}

//time complexity=O(nlogn) and space complexity=O(1)
