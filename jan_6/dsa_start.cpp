#include<iostream>
using namespace std;
#include<array>
int main()
{
    array<int,5>arr{1,2,3,4,5};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<"\n";
    }
    cout<<arr.front()<<"\n";
    cout<<arr.back()<<"\n";
}