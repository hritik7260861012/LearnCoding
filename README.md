#include<iostream>
using namespace std ;
class A{
    public:
    void ritik(){
        cout<<"jai ";

    }
};
class B: virtual public A{
    public:
    void raj(){
        cout<<"shree";

    }
};
class C: virtual public A{
    public:
    void r(){
        cout<<" Ram "<<endl;

    }
};
class D: public B,public C{
    public: 
    void t(){
        cout<<" Hritik";

    }
};
int main(){
    D Hindu;
    Hindu.ritik();
    Hindu.raj();
    Hindu.r();
    Hindu.t();
    return 0;
}
