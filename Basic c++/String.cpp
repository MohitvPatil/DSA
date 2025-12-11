using namespace std;
#include <iostream>

int main() {

    // string s;
    // cout << "Statement = ";
    // getline(cin, s);
    // cout << "Statement is = "<< s[2] << " , "  << s[12];

    string s;
    cout << "Statement = ";
    cin >> s;
    int len = s.size();
    cout << s[len - 1];


    return 0;
}