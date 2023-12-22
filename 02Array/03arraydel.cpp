//Array Deletion

# include <iostream>

int main(){
    int n, i, pos;

    std::cout<<"To Perform Array Deletion"<<std::endl;
    std::cout<<"Enter the number of elements in the array ";
    std::cin>>n;

    int arr[n];

    std::cout<<"Enter the "<<n<<" elements of the array :"<<std::endl;
    for (i=0;i<n;i++){
        std::cin>>arr[i];
    };

    std::cout<<"The elements in the array before deletion are"<<std::endl;
    for (i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    std::cout<<"Enter the index to delete"<<std::endl;
    std::cin>>pos;


    for (i=pos;i<(n-1);i++){
        arr[i] = arr[i+1];
    }

    n --;

    std::cout<<"The elements in the array after deletion are"<<std::endl;
    for (i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }

    return 0;
        
}