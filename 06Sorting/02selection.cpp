// Selection Sort algorithm

# include <iostream>

int select(int arr[], int n){
    for (int i =0; i<n-1; i++ ){
    int min = i;
    int temp = 0;
        for (int j = i+1; j<n; j++){
            if (arr[j]< arr[min]){
                min = j;
            }
        }
            if (arr[min]!= arr[i]){
                temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
    }

    return 0;
}

int main(){
    int arr[] = {6,3,9,7,2,1,8,4,5};
    int n = 9;
    int result = select(arr, n);
    for(int k=0; k<n; k++){
        std::cout<<arr[k]<<std::endl;
    }
}