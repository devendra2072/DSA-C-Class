#include<iostream>
#include<set>
// #include<string>
using namespace std;
int pangram(string &s)
{
    set<char> charSet;
    for(char &c:s)
    {
        c = tolower(c);
        if(isalpha(c))
            charSet.insert(c);
    }
    return charSet.size() == 26;
}

int main()
{
    string s = "quick brown fox jumps over the lazy dog";
    if (pangram(s))
    {
        cout<<"The given string is a pangram."<<"\n";
    }
    else
    {
        cout<<"The given string is not a pangram."<<"\n";
    }
    cout<<pangram(s);
    return 0;
}