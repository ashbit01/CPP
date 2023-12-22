//Sort check in an array

# include <iostream>

int main(){

    int i,j;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    bool sort = true;

    std::cout<<"Sort Check: "<<std::endl;

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if (arr[i]<arr[j]){

            }
            else{
                sort = false;
            }

        }
    }

    if (sort){
        std::cout<<"Array is sorted"<<std::endl;
    }
    else{
        std::cout<<"Array is unsorted"<<std::endl;
    }
}