/* Inheritance */

# include <iostream>
# include <string>

class Animal{
    public:
    std::string name;
    std::string voice;

    void sound(){
        std::cout<<"The "<<name<<" says "<<voice<<std::endl;
    }
};

class Man: public Animal{
    public:
    void walk(){
        std::cout<<"Man took "<<name<<" To walk and it shouted "<<voice<<std::endl;
    }
};

int main(){

    Animal dog1;
    Man man1;

    dog1.name = "Dog";
    dog1.voice = "Bow Bow";

    dog1.sound();
    man1.walk();


}