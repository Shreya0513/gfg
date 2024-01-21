#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>

void print3largest(vector<int> &V)
{
     partial_sort(V.begin(), V.begin() + 3, V.end(), greater<int>());
     cout <<V[0]<<V[1]<<V[2]<<endl;
}

int main()
{
    int input;
    vector<int> V;
    for(int i=0; i<7; i++)
    {
        cout<<"Enter the elements";
        V.push_back(input);
    }
    print3largest(V);
    return 0;

}
