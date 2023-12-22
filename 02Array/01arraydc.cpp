// Array Declaration and Traversal

# include <iostream>

int main(){
    int i;
    int arr[3], arr1[2] = {45,94};
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (i=0;i<3;i++){
        std::cout<<"arr["<<i<<"] = "<<arr[i]<<std::endl;
        };
    
    for (i=0;i<2;i++){
        std::cout<<"arr1["<<i<<"] = "<<arr1[i]<<std::endl;
    };

    return 0;
}