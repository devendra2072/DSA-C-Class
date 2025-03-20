// map (key , value)
// 1. it is an associate container
// 2. it is a key-value pair container
// 3. it is a sorted bydefault
// 4 key is always unique
// 5. self balance binary search tree or red black tree maintain the lexicography order
// 6. there are 3 types of map.
//     1. orderd  map(sorted) (red black tree)
//     2. unordered map (unsorted) (hashing technique)
//     3. multimap (duplicate value allowed)

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> student{{101, "dev"}, {12, "abhi"}, {13, "devendra"}};
    for (auto p : student)
    {
        cout << p.first << "," << p.second << "\n";
    }
    cout << "size=" << student.size() << "\n";
    for (auto p = student.begin(); p != student.end(); p++)
    {
        cout << p->first << "," << p->second << "\n";
    }
}