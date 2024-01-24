#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x)
{
    //base case
    if(n==0)
    {
       return -1;
    }

    if(arr[n-1]==x)
    {
        return n-1;
    }
    else
    {
        return linearSearch(arr, n-1, x);
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

    int num;
    cout<<"Enter the number you want to search";
    cin>>num;
    int ans=linearSearch(array, size, num);
    cout<<"given number is at"<<ans<<"index";
    return 0;
}
