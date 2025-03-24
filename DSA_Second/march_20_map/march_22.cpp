#include<iostream>
#include<map>
using namespace std;

int main() {
    multimap<int,string>multi;
    multi.insert({1,"Apple"});
    multi.insert({2,"Banana"});
    multi.insert({1,"Orange"});
    multi.insert({3,"Pineapple"});
    for(auto p:multi)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    auto it=multi.find(101);
    if(it!=multi.end())
    {
        multi.erase(it);
    }
    else
    {
        cout<<"Record not found\n";
    }
    cout<<"\n";
    for(auto p:multi)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    return 0;
}