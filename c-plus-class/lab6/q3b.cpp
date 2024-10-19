#include<iostream>
using namespace std;
class liquid{
public:
    virtual void add()
    {

    }
    virtual liquid Remove()
    {

    }
    virtual  liquid removeall()
    {

    }
};

class coffee: public liquid{
public:
  void add(){
    cout<<"add coffee  "<<endl;
    }
        liquid Remove(){
    cout<<"remove coffee "<<endl;
    }
       liquid removeall(){
    cout<<"remove all coffee "<<endl;
    }

};
class milk: public liquid{
public:
 void add(){
    cout<<"add milk  "<<endl;
    }
        liquid Remove(){
    cout<<"remove milk "<<endl;
    }
       liquid removeall(){
    cout<<"remove all milk "<<endl;
    }

};
int main(){

liquid *liq[2];
coffee c1;
milk m1;
liq[0]=&c1;
liq[1]=&m1;

liq[0]->add();
liq[0]->Remove();
liq[0]->removeall();
liq[1]->add();
liq[1]->Remove();
liq[1]->removeall();
}

