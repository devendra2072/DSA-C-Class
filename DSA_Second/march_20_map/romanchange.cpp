
#include <iostream>
#include <unordered_map>
using namespace std;

int romantoint(string s) {
    unordered_map<char,int> up{{'I',1}, {'V',5}, {'X',10}};  // Fixed syntax: use {{}} for initialization
    int r = 0;
    
    for (int i = 0; i < s.size(); i++) {
        // Check if current value is less than next value (if next exists)
        if (i + 1 < s.size() && up[s[i]] < up[s[i+1]]) {
            r -= up[s[i]];
        } else {
            r += up[s[i]];
        }
    }
    return r;
}

int main() {
    string s = "XI";
    cout << romantoint(s);
    return 0;
}