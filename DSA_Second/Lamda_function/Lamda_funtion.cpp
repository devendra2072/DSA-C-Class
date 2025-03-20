#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>
int main()
{
    vector<int> v = {5, 3, 8, 1, 9, 2};
    sort(v.begin(), v.end()), [] (int a, int b) {return a<b;};  // Ascending order
    // sort(v.begin(), v.end()), less<int>();  // Ascending order by default hota hai
    // sort(v.begin(), v.end(), greater<int>());  // Descending order
    for (int p : v)
    {
        cout << p << "\t ";
    }
    cout << "\n";
    cout<<[] (int a) {return a+10;} (5);
    cout<<"\n";
    cout<<[] (int a, int b) {return a>b;} (15, 6);
    auto k=[] (int a) { return a*a;};
    cout<<k(7);
}
