#include <iostream>
#include <vector>
using namespace std;

void zeroes_to_end(vector<int> &v)
{
    int count=0;
    int size=v.size();
    for(int i=0; i<size; i++)
    {
        if(v[i]==0)
        {
            count++;
            //then delete that element from th vector
            v.erase(v.begin()+i);
            i--;
            size--;
        }
    }

    //then adding equal number of zeroes to the end of vector that is equal to count
    for(int j=0; j<count; j++)
    {
        v.push_back(0);
    }

    for(int k=0; k<v.size(); k++)
    {
        cout<<v[k]<<" ";
    }
}


int main()
{
    vector<int> v{5, 6, 8, 0, 0, 3,5, 0, 7};
    zeroes_to_end(v);
    return 0;
}
