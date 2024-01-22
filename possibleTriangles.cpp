#include <iostream>
using namespace std;

int possibleTriangles(int arr[], int n)
{
    int count;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(arr[i]+arr[j]>arr[k] || arr[j]+arr[k]>arr[i] || arr[i]+arr[k]>arr[j])
                {
                    count++;
                }
            }
        }
    }
    cout<<count;
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
    possibleTriangles(array, size);
}

//time complexity=O(n^3) and space complexity=O(1)
