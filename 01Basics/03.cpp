# include <iostream>

int main(){
    std::cout<<"Enter the two numbers: "<<std::endl;
    int a,b;
    std::cin>>a>>b;
    if(a>b){
        std::cout<<a<<" is greater than "<<b<<std::endl;
    }
    else if (b>a){
        std::cout<<b<<" is greater than "<<a<<std::endl;
    }
    else{
        std::cout<<"Both are equal";
    }
    return 0;
}