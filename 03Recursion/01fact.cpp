// Factorial of a number

# include <iostream>

int fact(int n){

	if (n==1 || n==0){
		return 1;
	}

	else{
		return n * fact(n-1);
	}
}

int main(){

	int n;
	std::cout<<"Enter the value of n: "<<std::endl;
	std::cin>>n;
	std::cout<<fact(n);
}