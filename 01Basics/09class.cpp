# include <iostream>
# include <string>

class Car {
    public:
    std::string name;
    int year;
    std::string model;

    void startengine(){
        std::cout<<name<<" has started"<<std::endl;
    }
};

int main(){

    Car car1;

    car1.name = "Toyota";
    car1.model = "Japanese";
    car1.year = 2023;

    car1.startengine();


}
