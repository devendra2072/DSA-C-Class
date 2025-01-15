
#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>

void removeDuplicate(vector<int>&vec)
{
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]!=-1)
        {
            for(int j=i+1;j<vec.size();j++)
            {
                if(vec[i] == vec[j]){
                    // count ++;
                    vec[j] = -1;
                }
            }
            cout<<vec[i]<<" ";
        }

    }
}

int main()
{
    vector<int> vec;
    int n,w;
    cout<<"Report in vector\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cout<<"Enter value\n";
        cin>>w;
        vec.push_back(w);
    }

    removeDuplicate(vec);

    return 0;
}
