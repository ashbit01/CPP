//Array Reversal

# include <iostream>

int main(){

    int n,i,temp=0;

    std::cout<<"Enter the number of elements in the array"<<std::endl;
    std::cin>>n;

    int arr[n];
    std::cout<<"Enter the elements of the array"<<std::endl;

    for (i=0;i<n;i++){

        std::cin>>arr[i];

    }

    if (n%2==0){

        for (i=0;i<(n/2);i++){
            temp = arr[i];
            arr[i] = arr[n-i-1];
            arr[n-i-1] = temp;
            

        }

    }

    for (i=0;i<n;i++){

        std::cout<<arr[i]<<" ";

    }


}