#include <iostream>
using namespace std;

void evenGreaterThanOdd(int arr[], int n)
{
    for(int i=0; i<n-1; i+=2)
    {
        if(arr[i]<arr[i+1])
        {
            swap(arr[i+1],arr[i]);
        }
    }

    for(int j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
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


