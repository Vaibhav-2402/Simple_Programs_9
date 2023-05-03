#include<iostream>
using namespace std;
////////////////////////////////////////

class Distance
{
    private:
    int feet;
    float inches;
    public:
    Distance()
    { 
        feet=0; inches=0.0;
    }
    Distance(int ft, float in)
    {
        feet=ft;
        inches=in;
    }
    void getdata()
    {
        cout<<"\n Enter feet : "; cin>>feet;
        cout<<"\n Enter inches : "; cin>>inches;
    }
    void showdata()
    {
        cout<<"\n Equivalent feet = "<<feet<<"\n Equivalent inches = "<<inches;
    }
    void add_dist(Distance, Distance);
    void div_dist(Distance, int);

};
//////////////////////////////////////////////////////////////////////////

void Distance::add_dist(Distance d1, Distance d2)
{
    inches=d1.inches+d2.inches;
    if(inches>=12.0)
    {
        inches-=12.0;
        feet++;
    }
    feet+=d1.feet+d2.feet;

}
///////////////////////////////////////////////////////////////////////////

void Distance::div_dist(Distance d3, int divisor)
{
    int fleet= d3.feet*12 + d3.inches;
    fleet/=divisor;
    feet=fleet/12;
    inches = fleet%12;
}
//////////////////////////////////////////////////////////////////////////

int main()
{
    Distance distar[100];
    Distance total(0,0.0), average;
    int count = 0;
    char ch;

    do
    {
        cout<<"\n Enter distance  ";
        distar[count++].getdata();
        cout<<"\n Do u want to enter another (y/n) : "; cin>>ch;
    
    } while (ch!='n');

    for(int j=0; j<count; j++)
    {
        total.add_dist(total,distar[j]);
    }
    average.div_dist(total,count);
    cout<<"\n the average is : ";
    average.showdata();
    cout<<endl;
    
    return 0;

}