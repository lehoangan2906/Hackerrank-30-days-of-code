#include <bits/stdc++.h>
using namespace std;

void solve(){
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0){
            cout << str[i];
        }
    }
    cout << " ";

    for (int j = 0; j < str.length(); j++)
    {
        if (j % 2 != 0){
            cout << str[j];
        }
    } cout << "\n";
}

int main(){
    int N;
    cin >> N;
    while(N--){
        solve();
    }
    return 0;
}