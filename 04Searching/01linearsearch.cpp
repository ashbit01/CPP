// Linear Search

# include <iostream>

int search(int arr[], int value, int len){

	for (int i=0;i<=len;i++){
		if ( arr[i] == value ){
			return i;
		}

		}

	return -1;


}

int main(){

	int arr[5] = {1,2,3,4,5};
	int value = 3;
	int len = 5;

	int result = search(arr,value, len);

	std::cout<<result;


}