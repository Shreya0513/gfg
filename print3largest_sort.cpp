#include <iostream>
#include <algorithm>
using namespace std;

void print3largest(int A[], int n)
{
    int check=0;
    int count=1;

    sort(A, A+n);

    for(int i=0; i<=n; i++)
    {
        if(count<4)
        {
            if(check!=A[n-i])
            {
                cout<<A[n-i];
                check=A[n-i];
                count++;
            }
        }
        else
            break;
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
    print3largest(array, size);

}

//time complexity=O(nlogn) and space complexity=O(1)
