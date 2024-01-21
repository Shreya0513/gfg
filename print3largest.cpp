#include <iostream>
using namespace std;

void print3largest(int array[], int n)
{
    int first, second, third;
    if(n<3)
    {
        cout<<"invalid";
    }

    first=second=third=INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(array[i]>first)
        {
            third=second;
            second=first;
            first=array[i];
        }
        else if(array[i]>second && array[i]!=first)
        {
            third=second;
            second=array[i];
        }
        else if(array[i]>third && array[i]!=second  && array[i]!=first)
        {
            third=array[i];
        }
    }
        cout<<first<<second<<third<<endl;

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


