#include <iostream>
using namespace std;

void subarrayWithSum(int arr[], int n, int sum)
{
    int start=0;
    int c_sum=0;

    for(int i=0; i<n; i++)
    {
        while(c_sum>sum&&start<i-1)
        {
            c_sum-=arr[start];
            start++;
        }

    if(c_sum==sum)
    {
        cout<<"Subarray between"<<start<<"-"<<i-1;
    }

    if(i<n)
    {
        c_sum+=arr[i];
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

    int sum;
    cout<<"Enter the sum that needs to be found";
    cin>>sum;
    subarrayWithSum(array, size, sum);
}

//time complexity=O(n) and space complexity=O(1)
