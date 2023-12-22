/* Function Overloading */

# include <iostream>

class Add{
    public:

    int sum (int a , int b){
        return a+b;
    }

    double sum(double a, double b){
        return a+b;
    }

};

int main(){

    Add add1;
    
    std::cout<<"Integer "<<add1.sum(5,6)<<std::endl;
    std::cout<<"Integer "<<add1.sum(3.5,6.9)<<std::endl;

}