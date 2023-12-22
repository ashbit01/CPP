/* Function Overriding */

# include <iostream>

class Name1{
    public:

    void give(){
        std::cout<<"Parent function"<<std::endl;
    }
};

class Name2: Name1{
    public:

    void give(){
        std::cout<<"Child Function"<<std::endl;

        Name1::give();
    }
};

int main(){

    Name2 name3;
    name3.give();

}