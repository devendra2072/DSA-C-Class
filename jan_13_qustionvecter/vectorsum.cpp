#include<iostream>
using namespace std;
#include<vector>
int main ()
{
vector<int>v1{1,31,4,12};
vector<int>v2{7,2,1};
int a=0;
int b=0;
for(int i=0;i<v1.size();i++)

a=(a*10)+v1[i];

for(int j=0;j<v2.size();j++)

b=(b*10)+v2[j];

cout << a+b;
}
