#include<iostream>
using namespace std;
//////////////////////////////////////////

class matrix
{
    private:
    static const int limit = 10;
    int a[limit][limit];

    public:
    void putel(int index1, int index2, int value);
    int getel(int index1, int index2);

};
////////////////////////////////////////////////////////

void matrix::putel(int index1, int index2, int value)
{
    if(index1>=0 && index1<=limit-1 && index2>=0 && index2<=limit-1)
    a[index1][index2] = value;
    else
    cout<<"\n Element is out of bounds!!! ";
}
/////////////////////////////////////////////////////////////

int matrix::getel(int index1, int index2)
{
    int temp;
    if(index1>=0 && index1<=limit-1 && index2>=0 && index2<=limit-1)
    {
    temp = a[index1][index2];
    cout<<"\n Element at ["<<index1<<"],["<<index2<<"]"<<"is : "<<temp;
    }
    else
    cout<<"\n Element is out of bounds !!! ";
}
////////////////////////////////////////////////////////////////////

int main()
{
    matrix m;
    char ch,sym;;
    do 
    {
        cout<<"\n Enter a  for adding an element and s for showing ";  cin>>sym;
        switch(sym)
        {
            case 'a':
            int i1,i2,value;
            cout<<"\n Enter the element value : ";
            cin>>value;
            cout<<"\n Enter the index number 1 : ";
            cin>>i1;
            cout<<"\n Enter the index number 2: ";
            cin>>i2;
            m.putel(i1,i2,value);
            break;

            case 's':
            int j1,j2;
            cout<<"\n Enter the index number 1 : ";
            cin>>j1;
            cout<<"\n Enter the index number 2 : ";
            cin>>j2;
            m.getel(j1,j2);
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