// Shifting the elements of an array either right or left

# include <iostream>

int main(){

    int n,i,shift,dir;

    std::cout<<"Shiting elements in an array either right or left"<<std::endl;
    std::cout<<"Enter the number of elements in the array "<<std::endl;
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter the elements of the array: "<<std::endl;

    for (i=0;i<n;i++) {
        std::cin>>arr[i];
    }

    std::cout<<"Enter the shift number"<<std::endl;
    std::cin>>shift;
    std::cout<<"Enter 0 for right or 1 for left : ";
    std::cin>>dir;

    if (dir == 0){

        for (i=n-1;i>=shift;i--){
            arr[i] = arr[i-shift];
        }

        for (i=0;i<shift;i++) { 
            arr[i] = 0;
        }

    std::cout<<"The array after shifting is "<<std::endl;
    for (i=0;i<n;i++) {  
        std::cout<<arr[i]<<" ";
    }

    }

    else{

        for (i=0;i<=(n-shift);i++){
            arr[i] = arr[i+shift];
        }

        for (i=(shift+1);i<n;i++) { 
            arr[i] = 0;
        }

    std::cout<<"The array after shifting is "<<std::endl;
    for (i=0;i<n;i++) {  
        std::cout<<arr[i]<<" ";
    }

    }


}