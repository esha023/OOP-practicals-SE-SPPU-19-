#include<iostream>
#include<math.h>
using namespace std;
class complex
{
    int real, img;
    public:
        complex()
        {
            real = 0;
            img = 0;
        }
        friend void data(complex &n1, complex &n2)
{
    cout<<"Enter the real part of first number: ";
    cin>>n1.real;
    cout<<"Enter the imaginary part of first number: ";
    cin>>n1.img;
    cout<<"Enter the real part of second number: ";
    cin>>n2.real;
    cout<<"Enter the imaginary part of second number: ";
    cin>>n2.img;

    cout<<"First complex number is: "<<n1.real<<" + "<<n1.img<<"i"<<endl;
    cout<<"Second complex number is: "<<n2.real<<" + "<<n2.img<<"i"<<endl;
}
        friend void operator + (complex &n1, complex &n2)
        {
            complex add;
            add.real = n1.real + n2.real;
            add.img = n1.img + n2.img;
            cout<<"\n Addition of complex numbers is: "<<add.real<<" + "<<add.img<<"i"<<endl;
        }
        friend void operator - (complex &n1, complex &n2)
        {
            complex sub;
            sub.real = n1.real - n2.real;
            sub.img = n1.img - n2.img;
            cout<<"\n Subtraction is: "<<sub.real<<" + "<<sub.img<<"i"<<endl;
        }
        friend void operator * (complex &n1, complex &n2)
        {
            complex mult;
            mult.real = (n1.real*n2.real) - (n1.img*n2.img);
            mult.img = (n1.real*n2.img) + (n1.img*n2.real);
            cout<<"Multiplication is: "<<mult.real<<" + "<<mult.img<<"i"<<endl;
        }
};

int main()
{
    complex c1, c2;
    data(c1, c2);
    int ch;
    cout<<"(1): Addition (2): Subtraction (3): Multiplication (0):Exit"<<endl;
    do
    {
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                c1 + c2;
                break;
            case 2:
                c1 - c2;
                break;
            case 3:
                c1 * c2;
                break;
        }
    }while(ch!=0);
    return 0;
}
