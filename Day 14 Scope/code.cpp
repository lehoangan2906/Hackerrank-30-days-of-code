#include <bits/stdc++.h>
using namespace std;

class Difference {
    private:
        vector<int> elements;
    public:
        int maximumDifference;

    //  class constructor that takes an array of integers as a 
    // parameter and saves it to the instance variable.    
    Difference(vector<int> elements){
        this->elements = elements;
    };

    /* A computeDifference method that finds the maximum absolute 
    difference between any  numbers in  and stores it in the  
    instance variable.
    */
    int computeDifference(){
        int n = elements.size();
        int min = elements[0];
        int max = min;
        for (int i = 0; i < n; i++) {
            if(elements[i] < min){
                min = elements[i];
            }
            if(elements[i] > max){
                max = elements[i];
            }
        }
        maximumDifference = max - min;
        
        return maximumDifference;
    }

};

int main(){
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}