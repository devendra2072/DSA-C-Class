#include<iostream>
#include<vector>
#include<tuple>
using namespace std;


int main()
{
    // tuple<int, string, int >p{101, "joy", 21};
    // p=make_tuple(102, "honey", 22);
    // cout<<"roll: "<<get<0>(p)<<"\n";
    // cout<<"name: "<<get<1>(p)<<"\n";
    // cout<<"age: "<<get<2>(p)<<"\n";


    vector<tuple<int, string, int>>t;
    int n;
    cout<<"how much records u wanna store: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int roll, age; string name;
        cout<<"enter roll no: "<<endl;
        cin>>roll;
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter roll no: "<<endl;
        cin>>age;
    }
    for(int j=0; j<t.size(); j++)
    {
        cout<<"roll number is: "<<get<0>(t[j])<<"name is"<<get<1>(t[j])<<"age is "<<get<2>(t[j])<<endl;
    }



}