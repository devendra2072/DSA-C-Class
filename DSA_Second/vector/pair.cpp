//Pair : it is a pre defined structure template. it only stores two values and the first value is accessed by first keyword and the second value is access by second keyword. we can use make_pair function to insert the record in a pair.
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    pair<int, string>p{101, "joy"};
    p=make_pair(102, "honey");
    // cout<<p.first<<": "<<p.second<<endl;

    vector<pair<int, string>>ans;
    int n;
    cout<<"Enter how much records"<<endl;
    cin>>n;
    for (int i=0; i<n; i++)
    {
        int roll; string name;
        cout<<"Enter roll number"<<endl;
        cin>>roll;
        cout<<"enter name"<<endl;
        cin>>name;
        ans.push_back({roll,name});
    }
    for(auto p:ans)
    {
        cout<<p. first<<" "<<p.second<<endl;
    }

}