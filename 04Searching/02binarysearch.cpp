// Binary search Iterative method

# include <iostream>

int bsearch(int arr[], int n, int len){
    int s=0, l=len;

    while(s<l){
        int mid = (s+l)/2;
        if (n == arr[mid]){
            return mid;
        } else if (n<arr[mid]){
            l=mid;
        } else if(n>arr[mid]){
            s=mid;
        }
    }

    return -1;
}


int main(){

    int arr[] = {1,2,3,4,5};
    int len=5;
    int n = 4;

    int result = bsearch(arr, n, len);
    std::cout<<result;

}