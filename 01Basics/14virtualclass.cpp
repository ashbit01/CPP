// Virtual Class in C++

# include <iostream>

class A {

    public:

    void virtual virtualprint(){
        std::cout<<"Hello World"<<std::endl;

    };

};

class B: virtual public A{
    
};

class C: virtual public A , virtual public B{

};

int main(){

    C c;
    c.virtualprint();
    return 0;
}