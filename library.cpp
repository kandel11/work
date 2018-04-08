// Chad Clark
// CSCI 201
// 04-06-2018
// Assignment #7
// This program demonstrates a virtual library database made with classes

#include <iostream>
#include <string>

using namespace std;

class Name{
public:
    Name(); //constructor

    string GetFirst() { return First; } // accessor
    void SetFirst(string f){First = f;} // mutator

    string GetLast() { return Last; } // accessor
    void SetLast(string l) {Last = l;} // mutator

    ~Name(); // destroyer/deconstructor/destructor
private:
    string First;
    string Last;
};

class Date{
public:
    Date();
    int GetYear() const { return Year; } // accessor
    void SetYear(int y) {Year = y;} // mutator

    int GetMonth() const { return Month; } // accessor
    void SetMonth(int m) {Month = m;} // mutator

    int GetDay() const { return Day; } // accessor
    void SetDay(int d) {Day = d;} // mutator

    ~Date();
private:
    int Year;
    int Month;
    int Day;
};

class Book{
public:
    Book();
    Name GetAuthor() const { return Author; } // accessor
    void SetAuthor(Name a) {Author = a;} // mutator

    string GetTitle() const { return Title; } // accessor
    void SetTitle(string t) {Title = t;} // mutator

    int GetYear() const { return Year; } // accessor
    void SetYear(int y) {Year = y;} // mutator

    ~Book();
private:
    Name Author;
    string Title;
    int Year;
};

class libraryBook {
public:
    libraryBook() { cout << "test" << endl; }

    ~libraryBook();
private:
    int id;
    Book book;
    Name borrower;
    Date borrowed;
    Date due;
    bool isLoaned;
};











int main(){

    libraryBook libraryBook;


}

