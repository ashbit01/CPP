// Binary search recursive method

# include <iostream>

int rbinary(int s,int l,int key, int arr[]){
    if (s==l){
        if (arr[s]==key){
            return s;
        } else {
            return 0;
        }
    } else {
        int mid = (s+l)/2;
        if (key < arr[mid]){
            rbinary(s,mid,key,arr);
        }
        else if (key > arr[mid]){
            rbinary(mid,l,key,arr);
        }
        else if (key == arr[mid]){
            return mid;
        }
    } 
}

int main(){
    int arr[] = {1,2,3,4,5};
    int s=0;
    int l=5;
    int key = 3;
    int result = rbinary(s,l,key,arr);
    std::cout<<result;
}