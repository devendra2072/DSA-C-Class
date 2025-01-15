#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    string sen;
    cout<<"enter uper case=";
    getline(cin,sen);
    

    for(int i=0;i<sen.size();i++)
    {
        if(sen[i]>='A' && sen[i]<='Z')
            sen[i]+=32;
    }
    cout<<"result="<<sen;
    return 0;
}
