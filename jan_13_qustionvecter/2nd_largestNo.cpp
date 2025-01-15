#include<iostream>
using namespace std;
#include<vector>
#include<math.h>
#include<bits/stdc++.h>


int findSecondLargest(vector<int>v)
{
    int largest = v[0];
    int second_largest= v[0];

    for(int i=1;i<v.size();i++)
    {
        if(v[i]>largest)
        {
            second_largest = largest;
            largest = v[i];
        }
        else if(v[i] == largest)
        {
            i++;
        }
    }
    return second_largest;
}

int main()
{
    vector<int>v;
    int n,w;
    cout<<"enter value =";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        v.push_back(w);
    }
    cout<<"The vector is \n";
    //vector<int>::iterator it = v.begin();

    for(auto p:v)
    {
        cout<<p<<" ";
    }
    cout<<"\n";


    //int result = findSecondLargest(v);

    //cout<<"the second largest number is: "<<result<<endl;


        sort(v.begin() , v.end());
        for(auto p:v)
    {
        cout<<p<<" ";
    }

    cout<<"\n";
    int i = v.size()-2;
    int j = v.size()-1;

    while(v[i]==v[j])
    {
        v.pop_back();
        i--;
        j--;
    }

     cout<<"The second largest element is: "<<v[i];

    return 0;
}
