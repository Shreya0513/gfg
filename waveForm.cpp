#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int *temp;
    temp=x;
    x=y;
    y=temp;
}

void waveForm(int arr[], int n)
{
    for(int i=0; i<n; i+=2)
    {
        if(i>0 && arr[i]<arr[i-1])
        {
            swap(&arr[i], &arr[i-1]);
        }

        if(i<n-1 && arr[i]<arr[i+1])
        {
            swap(&arr[i], &arr[i+1]);
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
    waveForm(array, size);
}
