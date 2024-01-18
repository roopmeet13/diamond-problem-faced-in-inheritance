// diamond problem faced in inheritance.
// i am the parent is called two time in output, one for the child1 and another time for the child2
#include <iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"I'm the parent";
    }
};
class child1:public parent{
    public:
    child1(){
        cout<<"I'm the child1";
    }
};
class child2:public parent{
    public:
    child2(){
        cout<<"I'm the child2";
    }
};
class grandchild:public child1, public child2{
    public:
    grandchild(){
        cout<<"I'm the grandchild";
    }
};
int main()
{
    grandchild c;

    return 0;
}