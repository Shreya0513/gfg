#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end-- ;
    }
}

void arrayRotation(int arr[], int d, int n)
{
  if(d==0)
  {
      return;
  }

  d=d%n;

  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);

  for(int i=0; i<n; i++)
  {
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
    int d;
    cout<<"Enter the rotation value";
    cin>>d;

    arrayRotation(array, d, size);
    return 0;
}

//time complexity=O(n) and space complexity=O(1)

