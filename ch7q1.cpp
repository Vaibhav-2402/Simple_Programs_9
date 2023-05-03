#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
////////////////////////////////////////////

int main()
{
    void reverseit(char s[]);
    int j = 100;
    char str[j];
    cout<<"\n Enter a string: "<<setw(100);
    cin.get(str,j);
    reverseit(str);
    cout<<"\n Reversed string: "<<str;
    return 0;
}

 void reverseit(char s[])
{
    int len = strlen(s);

    for(int i=0; i<len/2; i++)
    {
        char temp = s[i];
        s[i]=s[len-i-1];
        s[len-i-1]=temp;
        
    }

}