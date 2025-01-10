#include <iostream>
using namespace std;
#include <vector>
#include <tuple>

int main()
{
   tuple<int, string,int,int>tp{101,"subh",21,5645451} ;
   cout<<"rollno="<<get<0>(tp)<<"\n"; 
   cout<<"name="<<get<1>(tp)<<"\n"; 
   cout<<"age="<<get<2>(tp)<<"\n"; 
   cout<<"mobile="<<get<3>(tp)<<"\n"; 
}