#include<iostream>
using namespace std;
//////////////////////////////////////////////

class safearay
{
    private:
    static const int limit = 20;
    int s[limit];
    public:
    void putel(int index , int v);
    int getel(int index);
};
////////////////////////////////////////////////////////////

void safearay::putel(int index, int v)
{
    if(index>=0 && index<=limit-1)
    s[index]=v;
    else
    cout<<"\n Number out of bounds !!! ";
}
////////////////////////////////////////////////////////////

int safearay::getel(int index)
{
    int temp;
    if(index>=0 && index<=limit-1)
    {
    temp=s[index];
    cout<<" Element at "<<index<<" is equal to "<<temp;
    }
    else
    cout<<"\n The number is out of bounds !!!";
    return temp;

}

int main()
{
    safearay sf;
    char ch,sym;
    do 
    {
        cout<<"\n Enter a  for adding an element and s for showing ";  cin>>sym;
        switch(sym)
        {
            case 'a':
            int i ,v;
            cout<<"\n Enter the element value : ";
            cin>>v;
            cout<<"\n Enter the index number : ";
            cin>>i;
            sf.putel(i,v);
            break;

            case 's':
            int j;
            cout<<"\n Enter the index number : ";
            cin>>j;
            sf.getel(j);
            break;

            default:
            cout<<"\n Wrong input ";
            break;

        }
        cout<<"\n Continue? (y/n) ";
        cin>>ch;
    }
    while(ch!='n');
    
return 0;

}