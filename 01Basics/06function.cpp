# include <iostream>

int sum (int a , int b){
    int result;
    result = a+b;
    return result;
}

int main(){
    int c, d, result;
    std::cout<<"Enter the first number"<<std::endl;
    std::cin>> c;
    std::cout<<"Enter the second number"<<std::endl;
    std::cin>> d;
    result = sum(c,d);
    std::cout<<"The sum is : "<< result<<std::endl;
}
