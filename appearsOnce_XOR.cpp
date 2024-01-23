#include <iostream>
using namespace std;

void appearsOnce(int arr[], int n)
{
    int rem=arr[0];
    for(int i=1; i<n; i++)
    {
        rem=rem^arr[i];
    }
    cout<<rem;
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
    appearsOnce(array, size);
}

//time complexity=O(n) and space complexity=O(1)
