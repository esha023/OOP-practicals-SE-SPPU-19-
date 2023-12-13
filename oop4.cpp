#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char giveinfo[200];
    ofstream outfile;
    outfile.open("info.txt", ios::out);
    cout<<"Enter the information you want add in the file: ";
    fgets(giveinfo, 200, stdin);
    outfile<<giveinfo;
    outfile.close();

    char getinfo[200];
    ifstream infile;
    infile.open("info.txt", ios::in);
    infile.getline(getinfo, 200);
    cout<<"Information in the file is: "<<endl;
    cout<<getinfo;
    infile.close();

    return 0;
}
