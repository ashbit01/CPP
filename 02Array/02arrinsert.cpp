// Array Insertion 

# include <iostream>

int main(){
    
    int arr[10] = {1,2,3,4,5};
    int size = 5;
    int num, pos, i;

    std::cout<<"Enter the number to insert"<<std::endl;
    std::cin>>num;
    std::cout<<"Enter the position to insert"<<std::endl;
    std::cin>>pos;

    // Checking if the position is invalid

    if(pos<0 || pos>=size){
        std::cout<<"Invalid Position";
    }

    else{
        size+=1;
        std::cout<<"The size is : "<<size<<std::endl;
        for (i=size-1;i>pos-1;i--){
            arr[i+1] = arr[i];
        }

        arr[pos] = num;

        std::cout<<"The updated array is : "<<std::endl;
        for (i=0;i<size;i++){
            std::cout<<arr[i]<<std::endl;
        }
    }
}