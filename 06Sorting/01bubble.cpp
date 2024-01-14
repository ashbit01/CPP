// Bubble Sort algorithm

# include <iostream>

int bubble(int arr[], int n){
    int temp = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return 0;

}

int main(){
    int arr[] = {6,3,9,7,2,1,8,4,5};
    int n = 9;
    int result = bubble(arr, n);
    for(int k=0; k<n; k++){
        std::cout<<arr[k]<<std::endl;
    }

}