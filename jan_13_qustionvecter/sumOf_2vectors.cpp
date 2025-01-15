#include <iostream>
using namespace std;
#include <vector>
#include <bits/stdc++.h>
#include<cstring>

string sum(vector<int>&v1,vector<int>&v2){
    int i , j;
    i = v1.size()-1;
    j = v2.size()-1;

    string s = "";

    int total = 0;
    int carry = 0;
    int sum = 0;
    while(i>=0 || j>=0)
    {
        int digit1 = (i>=0) ? v1[i] : 0;
        int digit2 = (j>=0) ? v2[j] : 0;
        int total = digit1 + digit2 + carry;
         sum = total % 10;
         carry = total / 10;

         s = to_string(sum) + s;
         i--;
         j--;
    }

    return s;
}


int main()
{
    vector<int>v1;
   vector<int>v2;
   int n,w;
   cout<<"How  many Reports for V1?\n";
   cin>>n;

   for(int i=0;i<n;i++){
       cout<<"enter value\n";
       cin>>w;
       v1.push_back(w);
   }
   int c,b;
   cout<<"How  many Reports? for V2\n";
   cin>>c;

   for(int i=0;i<c;i++){
       cout<<"enter value\n";
       cin>>b;
       v2.push_back(b);
   }

   cout<<sum(v1,v2);


    return 0;
}
