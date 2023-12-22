# include <iostream>

int sum(int a , int b ){
    return a+b;
}
int diff(int c , int d){
    return c-d;
}
int prod(int e, int f){
    return e*f;
}
int quot(int g, int h){
    return g*h;
}

int main (){
    char i='y';
    while (i =='y'){
        int j, k, l;
        std::cout<<"Enter the two numbers"<<std::endl;
        std::cin>>k>>l;
        std::cout<<"What operation do you want to perform ?"<<std::endl
        <<"Enter 1 for SUM ; 2 for DIFF; 3 for PROD; 4 for QUOT"<<std::endl;
        std::cin>>j;
        if (j==1){
            std::cout<<sum(k,l)<<std::endl;
        }

        else if (j==2){
            std::cout<<diff(k,l)<<std::endl;
        }

        else if (j==3){
            std::cout<<prod(k,l)<<std::endl;
        }

        else if (j==1){
            std::cout<<quot(k,l)<<std::endl;
        }

        else{
            std::cout<<"Invalid Answer";
        }

        std::cout<<"Enter n to discontinue ...";
        std::cin>>i;
    }


}