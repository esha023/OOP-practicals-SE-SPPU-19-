#include<iostream>
#include<algorithm>

using namespace std;

class record
{
    public:
        string name;
        string dob;
        long int contact;
        void getdata()
        {
            cout<<"Enter the name: ";
            cin>>name;
            cout<<"Enter the date of birth: ";
            cin>>dob;
            cout<<"Enter the contact number: ";
            cin>>contact;
        }
        void display()
        {
            cout<<"Name is: "<<name;
            cout<<"\t DOB is: "<<dob;
            cout<<"\t Contact no. is: "<<contact;
        }
};

bool compare(const record &a, const record &b)
{
    return a.name<b.name;
}

int main()
{
    int n;
    cout<<"\n Enter total number of records: ";
    cin>>n;
    record p[n];
    for(int i=0; i<n; i++)
    {
        p[i].getdata();
    }
    sort(p, p+n, compare);
    for(int i=0; i<n; i++)
    {
        p[i].display();
        cout<<endl;
    }
    string z[n];
    for(int i=0; i<n; i++)
    {
        z[i] = p[i].name;
    }
    string sname;
    cout<<"\n Enter the name to be searched: ";
    cin>>sname;
    if(binary_search(z, z+n, sname))
    {
        cout<<"\n Record found!!";
    }
    else
        cout<<"\n Record not found!";

    return 0;
}
