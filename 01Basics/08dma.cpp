/* Dynamic Memory Allocation */

# include <iostream>

int main(){
    int size;
    int *ptr;

    std::cout<<"Enter the number of values you want to store"<<std::endl;
    std::cin>>size;

    ptr = new int[size];
    std::cout<<"Enter the values to be stored in the array"<<std::endl;
    for (int i=0;i<size;i++){
        std::cin>>ptr[i];
    }

    std::cout<<"The values in the array are :"<<std::endl;
    for (int j =0;j<size;j++){
        std::cout<<ptr[j]<<std::endl;
    }

    return 0;
    
}