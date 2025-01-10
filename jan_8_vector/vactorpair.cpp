// #include<iostream>
// using namespace std;

// int main ()
// {
//     pair<int, string>student{102,"honey"};
//     int roll;
//     string name;
//     cout<<"Enter roll number and name of student=\n";
//     cin>>roll;
//     cout<<"Enter name of student=";
//     cin>>name;
//     student = make_pair(roll,name);
//     cout<<"Roll number="<<student.first<<"\n";
//     cout<<"Name="<<student.second<<"\n";
//     return 0;

// }

// 1 daimention

// #include <iostream>
// using namespace std;
// #include <vector>

// int main()
// {
//     vector<pair<int, string>> v;
//     int record, rollno;
//     string name;
//     cout << "Enter number of records=";
//     cin >> record;
//     for (int i = 1; i <= record; i++)
//     {
//         cout << "Enter roll number and name of student=\n";
//         cin >> rollno;
//         cout << "Enter name of student=";
//         cin >> name;
//         v.push_back({rollno, name});
//     }
//     cout << "\n stored data are\n"
//          << "\n";
//     for (int i = 0; i <record; i++)
//     {
//         cout << v[i].first << "," << v[i].second << "\n";
//     }
// }

#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<pair<int, string>> v;
    int record, rollno;
    string name;
    cout << "Enter number of records=";
    cin >> record;
    for (int i = 1; i <= record; i++)
    {
        cout << "Enter roll number and name of student=\n";
        cin >> rollno;
        cout << "Enter name of student=";
        cin >> name;
        v.push_back({rollno, name});
        v.push_back(make_pair(rollno, name));
    }
    cout << "\n stored data are\n"
         << "\n";
    for (int i = 0; i <record; i++)
    {
        cout << v[i].first << "," << v[i].second << "\n";
    }
}