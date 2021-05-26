#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    try{
        int n;
        n = stoi(S);
        cout << n << endl;
    }
    catch(exception){
        cout << "Bad String" << endl;
    }
    return 0;
}