#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(2 <= n <= 20)
    {
        for (int i = 1; i <= 10; i++){
            cout << n << " " << "x" << " " << i << " " << "=" << " " << (n*i) << endl;
        }
        return 0;
    }
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
