#include <iostream>
#include <algorithm>
using namespace std;

void evenGreaterThanOdd(int arr[], int n)
{
    sort(arr, arr+n);
    int new_arr[n];
    int begin=0;
    int end=n-1;

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            new_arr[i]=arr[end];
            end--;
        }
        else
        {
            new_arr[i]=arr[begin];
            begin++;
        }
    }

    for(int j=0; j<n; j++)
    {
        cout<<new_arr[j]<<" ";
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
    evenGreaterThanOdd(array, size);
}

//time complexity=O(nlogn) and space complexity=O(n)

