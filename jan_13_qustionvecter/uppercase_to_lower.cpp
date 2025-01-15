// #include<iostream>
// using namespace std;
// #include<bits/stdc++.h>

// int main()
// {
//     string sen;
//     cout<<"enter uper case=";
//     getline(cin,sen);
    

//     for(int i=0;i<sen.size();i++)
//     {
//         if(sen[i]>='A' && sen[i]<='Z')
//             sen[i]+=32;
//     }
//     cout<<"result="<<sen;
//     return 0;
// }



#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    string s="Th089i*S";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            char c=s[i]+32;
            cout<<c;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            cout<<s[i];
        }
            
    }
  
}
