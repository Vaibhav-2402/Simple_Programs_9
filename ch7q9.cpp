#include<iostream>
using namespace std;
///////////////////////////////////////////////////

class queue
{
    private:
    static const int limit = 100;
    int s[limit];
    int head, tail;
    public:
    queue() {head=0; tail=0; }
    void put(int value)
    {
        s[head++ % 100]=value;
    }
    int get()
    {
        return s[(100-tail--)%100];
    }
};
///////////////////////////////////////////////////

int main()
{
    queue q;
    q.put(13);
    q.put(45);
    cout<<"\n 1: "<<q.get();
    cout<<"\n 2: "<<q.get();
    q.put(1947);
    cout<<"\n 3: "<<q.get();
}