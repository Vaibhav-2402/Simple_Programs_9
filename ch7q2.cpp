#include<iostream>
#include<string>
using namespace std;
///////////////////////////////////////////

class employee
{
    private:
    long eno;
    string name;;
    public:
    void getdata()
    {
        cout<<"\n Enter the name of the employee: ";
        cin>>name;
        cout<<"\n Enter the employee number: ";
        cin>>eno;
    }
    void putdata()
    {
        cout<<"\n Name of the Employee is "<<name;
        cout<<" \n His employee number is "<<eno;

    }

};
////////////////////////////////////////////////////

int main()
{

     int j = 0;
    employee e[100];
    char ch;
    do
    {
        cout<<"\n Enter data for employee number : "<<j+1;
        e[j++].getdata();
        cout<<"\n Do u want to enter another data(y/n): "; cin>>ch;
    }
    while(ch!='n');

    for(int i=0; i<j; i++)
    {
        cout<<"\n Employee number : "<<i+1;
        e[i].putdata();
    }
    cout<<endl;
    return 0;
}