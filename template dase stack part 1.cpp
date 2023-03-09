#include<bits/stdc++.h>
using namespace std;
const int n=500;
template <class dataType>
class stacK
{
public:

    dataType* a;
    int  cap;
    int stack_size;
    stacK()
    {
        a=new dataType[1];
        cap=1;
        stack_size=0;
    }
// add an element in the stack o(1);
    void pushh(dataType val)
    {
        if(stack_size+1>n)
        {
            increase_size();
        }
        stack_size=stack_size+1;
        a[stack_size-1]=val;
    }
    //delete the topmost element of stack o(1)
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"empty"<<"\n";
            return;
        }

        stack_size=stack_size-1;
    }
    // return the topmost element of stack o(1)
   dataType top()
    {
        if(stack_size==0)
        {
            cout<<"empty"<<"\n";
            assert(false);
        }
        return a[stack_size-1];
    }
    //make the cpacity multiplied by 2 o(1);
    void increase_size()
    {
        dataType* temp;
        temp=new dataType[cap*2];
        for(int i=0; i<cap; i++)
        {
            temp[i]=a[i];
        }
        swap(a,temp);
        delete []temp;
        cap=cap*2;
    }
};
int main()
{
    stacK<char> l;
    l.pushh('g');
    l.pushh('j');
    cout<<l.top();
    return 0;
}

