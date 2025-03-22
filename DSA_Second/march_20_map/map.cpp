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

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, string> student{{101, "dev"}, {12, "abhi"}, {13, "devendra"}};
//     for (auto p : student)
//     {
//         cout << p.first << "," << p.second << "\n";
//     }
//     cout << "size=" << student.size() << "\n";
//     for (auto p = student.begin(); p != student.end(); p++)
//     {
//         cout << p->first << "," << p->second << "\n";
//     }
// }

// second method  
// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, string> student;
//     student.insert({109, "dev"});
//     student.insert({12, "abhi"});
//     student.insert({13, "devendra"});
//     student[40] = "kumar";
//     for (auto p : student)
//     {
//         cout << p.first << "," << p.second << "\n";
//     }
//     cout<<"\n";
// }

// third method 
// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, int> student;
//     student.insert({109, 21});
//     student.insert({162, 19});
//     student.insert({193, 20});
//     student.insert({103, 21});
//     student[40] = 20;
//     student[132];
//     student[132]++;
//     for (auto p : student)
//     {
//         cout << p.first << "," << p.second << "\n";
//     }
//     cout<<"\n";
// }


// #include <iostream>
// #include <map>
// using namespace std;
// void occur
// int main()
// {
    
// }









// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int, string>mp;
//     int roll,n;
//     string name;
//     cout<<"Enter how many records\n";
//     cin>>n;
//     for(int i=0; i<n; i++)
//     {
//         cout<<"Enter roll number\n";
//         cin>>roll;
//         cout<<"Enter name\n";
//         cin>>name;
//         mp.insert({roll,name});
//     }
//     cout<<"\n records are \n";
//     for(auto p:mp)
//     {
//         cout<<p.first<<" "<<p.second<<"\n";
//     }
//     cout<<"enter roll number\n";
//     cin>>roll;
//     auto k=mp.find(roll);
//     if(k!=mp.end())
//     {
//         // cout<<k->first<<" :"<<k->second<<"\n";
//         mp.erase(roll);
//     }
//     else
//     {
//         cout<<"record not found\n";
//     }
//     cout<<"\n";
//     for(auto p:mp)
//     {
//         cout<<p.first<<" "<<p.second<<"\n";
//     }

// }



#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<int, string>up;
    int roll,n;
    string name;
    cout<<"Enter how many records\n";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter roll number\n";
        cin>>roll;
        cout<<"Enter name\n";
        cin>>name;
        up.insert({roll,name});
    }
    cout<<"\n records are \n";
    for(auto p:up)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }
    cout<<"enter roll number\n";
    cin>>roll;
    auto k=up.find(roll);
    if(k!=up.end())
    {
        // cout<<k->first<<" :"<<k->second<<"\n";
        up.erase(roll);
    }
    else
    {
        cout<<"record not found\n";
    }
    cout<<"\n";
    for(auto p:up)
    {
        cout<<p.first<<" "<<p.second<<"\n";
    }
}