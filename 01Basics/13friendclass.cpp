// Friend Class in CPP

# include <iostream>
# include <string>

class A{
    public:
    int age = 10;

    private:
    std::string name = "hELLO";

    friend class B;

};

class B{

public:    

    void friendprint(const A& a){
        std::cout<<"Age is "<<a.age<<std::endl;
        std::cout<<"Name is "<<a.name<<std::endl;
    };
};

int main(){

    A a;
    B b;
    b.friendprint(a);
    return 0;
}
