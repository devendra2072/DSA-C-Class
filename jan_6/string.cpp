// 7/1/2025

// #include <iostream>
// using namespace std;
// #include <string>
// int main()
// {
// char arr[]={'a','b','c','\0'}; //it return a valid string becaouse we end with null terminator
// arr[0]='k';
// cout<<arr;
// int cyb[]={100,20,30};  // it return the address becaouse the it is integrs
// cout<<cyb;
// char arr[]={'a','b','c','\0'};
// char p[]={"joy"};
// p[0]='b';  // it is string literal it dose not overwrite its size is fixed
// cout<<p<<"\n";
// cout<<"\n enter name \n";
// cin>>p;
// cout<<"update name="<<p;
// getline function

// char arr[]={'a','b','c','\0'};
// char p[10];
// cout<<"enter name\n";
// cin.getline(p,900);
// cout<<"update name="<<p;

//   $ delimeter  colum ka pata chal jata hai
// char arr[] = {'a', 'b', 'c', '\0'};
// char p[10];
// cout << "enter name\n";
// cin.get(p, 11,'$');
// cout << "update name=" << p;
// }

// #include <iostream>
// using namespace std;
// #include <string>
// int main()
// {
    // string s={"cybrom"};
    // cout<<s;

    // string s = {"cybrom"};
    // s = "labh";
    // cout << s;

    // leksography 

    // string s = {"cybrom"};
    // s = "labh";
    // cout << s.length()<<"\n";
    // string t={"yes"};
    // cout<<(s<t)<<"\n";


    // string s = {"subh"};
    // s = "yashwant";
    // cout << s.length()<<"\n";
    // string t={"yes"};
    // cout<<(s<t)<<"\n";
    // char k[10];
    // s.copy(k, 4, 4);
    // cout<<"k=" << k;


    
// }


#include<iostream>
using namespace std;
#include<string>
#include<algorithm>

int main()
{
    string s="cybrombhopal";
    char c[10];
    s.copy(c,3,3);
    cout<<c<<"\n";


 for (char k:s)
    {
        cout<<k<<"\t";
    }


    for (auto k:s)
    {
        cout<<k<<"\t";
    }


    // string reverse function inbuilt 
    reverse(s.begin(),s.end());
    cout<<"\n after reverse ="<<s<<"\n";
    string t1= "bhopal";
    string t2="Delhi";
    cout<<"t1="<<t1<<"\t"<<"t2="<<t2<<"\n";
    t1.swap(t2);
    cout<<"swap t1="<<t1<<"\t"<<"swap t2="<<t2<<"\n";
}