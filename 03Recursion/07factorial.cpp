// To find the factorial of a number using recursion

# include <iostream>

int fact(int n){
	if ( n == 0 ){
		return 1;
	}
	else{
		return n* fact((n-1));
	}
}

int main(){
	int n = 5;
	int result = fact(n);
	std::cout<<result<<std::endl;
}