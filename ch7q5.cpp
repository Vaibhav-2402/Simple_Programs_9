#include<iostream>
using namespace std;
///////////////////////////////////////////

int count=1;

class fraction
{
    private:
    int num;
    int denom;
    public:
    fraction(){} 
    void getdata() 
    {
        cout<<"\n Enter the numerator : "; cin>>num;
        cout<<"\n Enter the denominator: "; cin>>denom;
    }
    void putdata()
    {
        cout<<"\n The fraction is : "<<num<<"/"<<denom;
    }
    void add_frac(fraction, fraction);
    void avg_frac();

};
///////////////////////////////////////////////////////////////////

void fraction::add_frac(fraction f1, fraction f2)
{
    num=f1.num*f2.denom+f1.denom*f2.num;
    denom=f1.denom*f2.denom;
}
//////////////////////////////////////////////////////////////////

void fraction::avg_frac()
{
    num/=(count-1);
}

int main()
{
    fraction f[10],fac;
    char ch;
    do
    {
        for(int i=0; i<count; i++)
        {
            f[i].getdata();
            fac.add_frac(fraction f[i], fraction f[i+1])
        }
        count++;
    cout<<"\n Do u want to add another(y/n) : "; cin>>ch;
    }
    while(ch=='y');

fac.avg_frac();

return 0;
}