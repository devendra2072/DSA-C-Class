#include<iostream>
using namespace std;
#include<algorithm>
int main()
{

    string a="madam";
    string v=a;
    cout<<"a="<<a<<"\n";
    reverse(a.begin(), a.end());
    cout<<"a="<<a;
    cout<<"\n";
    if(v==a)
    {
      cout<<"\n its paliondrom";
    }
    else{
        cout<<"Not Palindrome\n";
    }
    }