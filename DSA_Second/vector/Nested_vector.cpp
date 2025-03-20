// Vector inside vector is nested vector, which is used for 2d, 3d , 4d arrays and so on.

#include<iostream>
#include<vector>
using namespace std;

int main()
{    
    vector<vector<int>>v1;
    int row, col, v;
    cout<<"enter no. of rows";
    cin>>row;
    cout<<"Enter no, of columns";
    cin>>col;
    for(int i=0; i<row; i++)
    {
        vector<int>v2;
        for(int j=0; j<col; j++)
        {
            cout<<"Enter the value";
            cin>>v;
            v2.push_back(v);
        }
        v1.push_back(v2);
    }
    cout<<"Stored values are\n";
    for(int i=0; i<v1.size(); i++)
    {
        for(int j=0; j<v1[i].size(); j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<"\n";
    }
}


// Questions of vector.
// Q1. v1={1, 2, 3}, v2={3, 4, 5} o/p= {3, 7, 9}

// Q2 Same as upper but vector size is different.
// v1={1, 2, 3}, v2={5, 6, 7, 8}, o/p={5, 7, 3, 7}

// Q3 v1={1, 2, 3},sum of v1=1+2+3,  v2={3, 4, 5} sum of v2=3+4+5
// print the greater one or equal.

// Q4 v={4, 1, 2, 5, 1, 2, 4} print unique values in ascending order.
