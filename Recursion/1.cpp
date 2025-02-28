#include<iostream>
#include<map>
using namespace std;

int main()
{
    // string s;
    // cin >> s;
    string ans = "Welcome";
    map<char, int> countMap;

    for (char c : ans) {
        countMap[c]++;
    }

    for (auto it : countMap) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

