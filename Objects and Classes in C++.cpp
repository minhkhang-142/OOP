#include <iostream>
using namespace std;

class Book{
private:
    string Author;
    string Format;
    string Title;
    string Publisher;
    double Price;
    int Year;
    
public:
    void setAuthor(string author){
        Author = author;
    }
    
    string getAuthor(){
        return Author;
    }
    
    void setFormat(string format){
        Format = format;
    }
    
    string getFormat(){
        return Format;
    }
    
    void setTitle(string title){
        Title = title;
    }
    
    string getTitle(){
        return Title;
    }
    
    void setPublisher(string publisher){
        Publisher = publisher;
    }
    
    string getPublisher(){
        return Publisher;
    }
    
    void setPrice(double price){
        Price = price;
    }
    
    double getPrice(){
        return Price;
    }
    
    void setYear(int year){
        Year = year;
    }
    
    int getYear(){
        return Year;
    }
    
    Book(string author, string format, string title, string publisher, double price, int year){
        Author = author;
        Format = format;
        Title = title;
        Publisher = publisher;
        Price = price;
        Year = year;
    }
    
    void Display(){
        cout<<"Author: "<< Author<<endl;
        cout<<"Format: "<< Format<<endl;
        cout<<"Title: "<< Title<<endl;
        cout<<"Publisher: "<<Publisher<<endl;
        cout<<"Price: "<<Price<<"$"<<endl;
        cout<<"Year of Publication: "<< Year<<endl;
    }
};


    
int main()
{
    Book book1 = Book("Mr.Gay", "E-book", "The path to pride month", "Thanh Gay", 20.9, 2025);
    
    book1.Display();
    return 0;
}