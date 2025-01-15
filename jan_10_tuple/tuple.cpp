// #include <iostream>
// using namespace std;
// #include <vector>
// #include <tuple>

// int main()
// {
//    tuple<int, string,int,int>tp{24,"devendra",21,786906} ;
//    cout<<"rollno="<<get<0>(tp)<<"\n";
//    cout<<"name="<<get<1>(tp)<<"\n";
//    cout<<"age="<<get<2>(tp)<<"\n";
//    cout<<"mobile="<<get<3>(tp)<<"\n";
//     tuple<int, string, int, int> tp;
//     int rollno, age, mobile;
//     string name;
//     cout << "Enter rollno= ";
//     cin >> rollno >> age >> mobile >> name;
//     tp = make_tuple(rollno, name, age, mobile);
//     cout << "rollno=" << get<0>(tp) << "\n";
//     cout << "name=" << get<1>(tp) << "\n";
//     cout << "age=" << get<2>(tp) << "\n";
//     cout << "mobile=" << get<3>(tp) << "\n";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// // PAIR contains 2 varaibles
// // whether it can be String or int it can be similar or dissimilar
// //  Pair is used to store 2 values
// //  More than 2 will used tupple

// int main() {
//     pair<int,string>student{101,"Aaradhya"};  // Static way
//     int rollNo;
//     string name;
//     cout<<"enter roll number\n";
//     cin>>rollNo;
//     cout<<"\n enter name\n";
//     cin>>name;
//     student=make_pair(rollNo,name);
//     cout<<"roll no = "<<student.first<<"\n";
//     cout<<"Name = "<<student.second<<"\n";

//     return 0;
// }
// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// #include <vector>

// // PAIR contains 2 varaibles
// // whether it can be String or int it can be similar or dissimilar
// //  Pair is used to store 2 values
// //  More than 2 will used tupple

// int main() {
//     vector<pair<int,string>>student;  // Static way
//     int age;
//     string name;
//     int record;
//     cout<<"enter size\n";
//     cin>>record;
//     for(int i=1;i<=record;i++){
//         cout<<"Enter age\n";
//         cin>>age;
//         cout<<"enter name\n";
//         cin>>name;

//         student.push_back({age,name});
//     }
//      cout<<"\n sorted data\n";
//     for(int i=0;i<record;i++){
//        cout<< student[i].first<<","<<student[i].second<<"\n";
//     }

//     return 0;
// }

// TUPLE
// Its used to add Muiltiple values

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// #include <vector>
// #include<tuple>
// int main()
// {
//     // Write C++ code here
//     tuple<int, string, int> tp{101, "Aaradhya", 20};
//     int rollNo;
//     string name;
//     int age;

//     cout << "RollNo , Name , age\n";
//     cin >> rollNo >> name >> age;
//     tp = make_tuple(rollNo, name, age);
//     cout << "RollNo = " << get<0>(tp) << "\n";
//     cout << "Name = " << get<1>(tp) << "\n";
//     cout << "age = " << get<2>(tp) << "\n";

//     return 0;
// }

// tuple use in inside a vector
// vector ke under tuple ka use karenge
// multiple column generate under the vector use in tuple

// #include <iostream>
// using namespace std;
// #include <algorithm>
// #include<iterator>
// #include <vector>
// #include <tuple>
// int main()
// {
//     vector<tuple<int, string, int, int>> v;
//     int rollno, age, mobile, n;
//     string nm;
//     cout << "Enter the number of records\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << "Enter roll number, name, age and mobile number\n";
//         cin >> rollno >> nm >> age >> mobile;
//         v.push_back({rollno, nm, age, mobile});
//     }
//     cout << "\n records are \n";
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << "Rollno=" << get<0>(v[i]) << "\t";
//         cout << "Name=" << get<1>(v[i]) << "\t";
//         cout << "Age=" << get<2>(v[i]) << "\t";
//         cout << "Mobile=" << get<3>(v[i]) << "\n";
//     }
// }

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to check if a string is a palindrome
bool isPalindrome(string s)
{
    // Remove non-alphanumeric characters and convert to lowercase
    s.erase(remove_if(s.begin(), s.end(), [](char c)
                      { return !isalnum(c); }),
            s.end());
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    // Compare the string with its reverse
    string reversed(s.rbegin(), s.rend());
    return s == reversed;
}

int main()
{
    string input;
    cout << "Enter a string to check if it is a palindrome: ";
    getline(cin, input); // Read the entire line, including spaces

    if (isPalindrome(input))
    {
        cout << "\"" << input << "\" is a palindrome." << endl;
    }
    else
    {
        cout << "\"" << input << "\" is not a palindrome." << endl;
    }

    return 0;
}