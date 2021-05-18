#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



int hourglassSum(vector<vector<int> > arr){
    int max_hour_glass = -63;
    for(int i = 0; i < arr.size() - 2; i++) {           // Loop from row 1 to row third from the last row because then we can access the middle value and the third row by the following codes
        for (int j = 2; j < arr[0].size(); j++) {       // Loop from collumn #3 to the last
            int k = j - 2, hourglass = 0;               // counter count from the first value to the third value
            while (k <= j){
                hourglass += arr[i][k] + arr[i + 2][k];  // sum of the first and the third row' value of the HourGlass
                ++k;
            }
            hourglass += arr[i + 1][j - 1];             // Middle value
            max_hour_glass = max(hourglass, max_hour_glass); 
        }
    }
    return max_hour_glass;
}

int main()
{

    vector<vector<int> > arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    return 0;
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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
 
