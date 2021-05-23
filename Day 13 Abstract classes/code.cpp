#include <bits/stdc++.h>
using namespace std;

class Book{
    protected:
        string title;
        string author;
    public:
         Book(string t, string a){
             title = t;
             author = a;
         }
         virtual void display() = 0;
};

class MyBook : public Book{

    public:
         // class Constructor taking 3 parameters
        MyBook(string t, string a, int p) : Book(t, a){
            this->price = p;
        }

    virtual void  display(void){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }

    private:
        int price;
};


int main() {
    string title, author;
    int price;
    getline(cin, title);
    getline(cin, author);
    cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
