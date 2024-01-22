#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter the size of array";
    cin>>size;
    int array[size];
    for(int i=0; i<size; i++)
    {
        cout<<"Enter the elements";
        cin>>array[i];
    }

    int k=0;
    for(int j=0; j<size; j++)
    {
        if(array[j]!=0)
        {
            swap(array[k],array[j]);
            k++;
        }
    }

    for(int l=0; l<size; l++)
    {
        cout<<array[l]<<" ";
    }
}

//time complxity=O(n) and space complexity=O(1)
