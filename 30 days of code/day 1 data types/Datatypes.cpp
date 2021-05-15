#include <iostream>
using namespace std;

int main(){
    int i (4);
    double d (4.0);
    string s ("HackerRank ");

    int num;
    double num2;
    string line;

    string tmp;
    // Read and save an integer, double, and String to your variables

    getline(cin, tmp);
    num = stoi(tmp);

    getline(cin, tmp);
    num2 = stod(tmp);

    getline(cin, line);

    printf("%i\n", i + num);
    printf("%.1f\n", d + num2);

    cout << s + line << endl;

    return 0;
}

