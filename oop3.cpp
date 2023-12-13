#include<iostream>
#include<string.h>
using namespace std;

class Publication
{
    protected:
        string title;
        float price;
    public:
        void setzero()
        {
            title = "0000";
            price = 0.0;
        }
        void getdata()
        {
            cout<<"Enter the title: ";
            cin>>title;
            cout<<"Enter the price: ";
            cin>>price;
        }
        void display()
        {
            cout<<"\t Title is: "<<title;
            cout<<"\t Price is: Rs."<<price;
        }
};

class Book : public Publication
{
    int pgcnt;
    public:
        void setzero()
        {
            Publication::setzero();
            pgcnt = 0;
        }
        void getdata()
        {
            Publication::getdata();
            cout<<"Enter page count of the book: ";
            cin>>pgcnt;
            try
            {
                if(price<0.0)
                        throw(0.0);
                if(pgcnt<=0)
                        throw(0);
            }
            catch(double x)
            {
                cout<<"Price cannot be negative!!"<<endl;
                setzero();
            }
            catch(int x)
            {
                cout<<"Page count cannot be zero!!"<<endl;
                setzero();
            }
        }
        void display()
        {
            Publication::display();
            cout<<"\t No. of pages in the book is: "<<pgcnt<<endl;
        }
};

class Tape:public Publication
{
    float playtime;
    public:
        void setzero()
        {
            Publication::setzero();
            playtime = 0.0;
        }
        void getdata()
        {
            Publication::getdata();
            cout<<"Enter play time of the tape: ";
            cin>>playtime;
            try
            {
                if(price<0.0 || playtime<0.0)
                {
                    throw(0.0);
                }
            }
            catch(double x)
            {
                cout<<"Price or playtime cannot be negative!!"<<endl;
                setzero();
            }
        }
        void display()
        {
            Publication::display();
            cout<<"\t Play time of the tape is : "<<playtime<<"minutes"<<endl;
        }
};

int main()
{
    Book b;
    Tape t;
    cout<<"Enter the details of book: "<<endl;
    b.getdata();
    cout<<"Details of book are: "<<endl;
    b.display();

    cout<<"Enter the details of tape: "<<endl;
    t.getdata();
    cout<<"Details of tape are: "<<endl;
    t.display();

    return 0;
}
