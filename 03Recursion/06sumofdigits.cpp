// To find the sum of digits of a number

# include <iostream>

int sumOfDigits(int n, int a=0){
	if (n == 0){
		return a;
	}
	else{
		return(sumOfDigits(n = n/10, a=(a+(n%10))));
	}
}

int main(){
	int n = 256;
	int result = sumOfDigits(n);
	std::cout<<result;
}