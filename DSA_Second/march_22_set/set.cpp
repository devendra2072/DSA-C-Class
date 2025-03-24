// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(15);
//     s.insert(20);
//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }



// unorderdset 
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main()
// {
//     unordered_set<int> s;
//     s.insert(10);
//     s.insert(5);
//     s.insert(15);
//     s.insert(20);
//     for(auto i:s)
//     {
//         cout<<i<<" ";
//     }
//     return 0;
// }

// multiset
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    return 0;
}



// wap to given words panagragram or not