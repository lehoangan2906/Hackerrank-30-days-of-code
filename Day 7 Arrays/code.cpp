#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);           // Declaring an n-element array

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int j = n - 1; j >= 0; j--){
        cout << arr[j]<< " ";
    }cout << "\n";

    return 0;

}

