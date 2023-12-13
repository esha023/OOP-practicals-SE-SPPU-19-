#include<iostream>
using namespace std;
class data
{
    string name, add, bg,dob;
    int roll;
    long int contact, lic;
    static int cnt;
    public:
        void getdata();
        void show();
        static int getcnt();
        data(); //default constructor
        data(data*obj); //copy constructor
        data(string name, int roll, string dob, string add, long int contact, string bg, long int lic);
        ~data();
};
int data::cnt = 0;
//initializing in default constructor
data::data()
{
    cnt++;
    cout<<"\t -----------IN DEFAULT CONSTRUCTOR---------"<<endl;
    name = "name";
    roll = 00;
    dob = "DDMMYYYY";
    add = "Home";
    contact = 0000000;
    bg = "X";
    lic = 000000;
}

//parameterized constructor
data::data(string NM, int ROLL, string DOB, string ADD, long int CALL, string BG, long int LIC)
{
    cnt++;
    cout<<"\t ---------IN PARAMETERIZED CONSTRUCTOR---------"<<endl;
    this->name = NM;
    this->roll = ROLL;
    this->dob = DOB;
    this->add = ADD;
    this->contact = CALL;
    this->bg = BG;
    this->lic = LIC;
}

//copy constructor
data::data(data*obj)
{
    cout<<"\n Entered in copy constructor \n";
}

//desturctor
data::~data()
{
    cout<<"\n Entered in destructor \n";
}

void data::getdata()
{
    cout<<"-----------Enter the details of student----------"<<endl;
    cout<<"\n Enter name of student: ";
    cin>>name;
    cout<<"\n Enter roll no. of student: ";
    cin>>roll;
    cout<<"\n Enter date of birth of student: ";
    cin>>dob;
    cout<<"\n Enter address of student: ";
    cin>>add;
    cout<<"\n Enter contact no. of student: ";
    cin>>contact;
    cout<<"\n Enter blood-group of student: ";
    cin>>bg;
    cout<<"\n Enter lic-id of student: ";
    cin>>lic;
}

void data::show()
{
    cout<<"---------Details of student are---------"<<endl;
    cout<<"Name of student is: "<<name<<endl;
    cout<<"Roll no. of student is: "<<roll<<endl;
    cout<<"Date of birth of student is: "<<dob<<endl;
    cout<<"Address of student is: "<<add<<endl;
    cout<<"Contact no. of student is: "<<contact<<endl;
    cout<<"Blood group of student is: "<<bg<<endl;
    cout<<"Lic-id of student is: "<<lic<<endl;
}

int data::getcnt()
{
    return cnt;
}

int main()
{
    data *d1 = new data();
    d1->show();
    delete d1;
    data *d2 = new data("Esha",15, "23/12/2004", "Home", 46512368, "A+", 3216431 );
    d2->show();
    data *d3 = new data(d2);
    d3->show();
    delete d2;
    int n;
    cout<<"Enter total number of entries: ";
    cin>>n;
    data dx[n];
    for(int i=0; i<n; i++)
    {
        dx[i].getdata();
    }
    for(int i=0; i<n; i++)
    {
        dx[i].show();
    }
    cout<<"Total number of constructor calls are: "<<data::getcnt()<<endl;
    return 0;
}
