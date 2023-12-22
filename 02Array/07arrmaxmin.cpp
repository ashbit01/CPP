// Maximum and Minimum element in an array

# include <iostream>

int main(){

    int i,j,max=0;

    int arr[] = {20,65,43,90,71,86,26,49,50,73};

    for (i=0;i<10;i++){
        if (arr[i] > max){
            max = arr[i];
        }
    
            }

    int min = max;

    for (i=0;i<10;i++){
        if (arr[i] < min){
            min = arr[i];
        }
    
            }



    std::cout<<"The max element is "<<max<<std::endl;
    std::cout<<"The min element is "<<min<<std::endl;
}