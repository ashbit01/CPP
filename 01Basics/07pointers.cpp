# include <iostream>

int main(){
    int x = 5;
    int *ptr;
    ptr = &x;
    std::cout<<"x = "<<x<<" and "<<*ptr<<std::endl;
    std::cout<<"the pointer to x is "<<&x<<" and "<<ptr<<std::endl;
    return 0;
}