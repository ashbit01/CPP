// To count the number of 1's in the given binary array

#include <iostream>

int countOne(int arr[], int len){
    int s = 0;
    int l = len-1;

    while(l>s){
        int mid = (s+l)/2;
        if (arr[mid]== 0 && arr[mid-1]==0){
            l = mid;
        }
        else if (arr[mid] == 1 && arr[mid+1] == 1){
            s = mid;
        }
        else {
            return mid + 1;
        }
    }
}

int main(){
    int arr[] ={1,1,1,1,1,1,1,9,0,0};
    int len = 10;

    int result = countOne(arr, len);
    std::cout<<result<<std::endl;
}