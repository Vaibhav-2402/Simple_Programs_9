#include<iostream>
using namespace std;
//////////////////////////////////////////////

int larger_one(int *num, int c)
{
    int temp=0, index;
    for(int i=0; i<c;i++)
    {
        if(num[i] > temp)
        {
            temp=num[i];
            index=i;
        }
    }
    return index;

}

int main()
{
    int num[50];
    int n = 0;
    char ch;
    do
    {
        cout<<"\n Enter the number : "; cin>>num[n++];
        cout<<"\n Wanna add another number(y,n) : ";
        cin>>ch;
    }while(ch!='n');
    int index = larger_one(num,n);
    cout<<"\n larger one is : "<<num[index]<<" at : "<<index+1;
    return 0;
}
//////////////////////////////////////////////////////////////////
