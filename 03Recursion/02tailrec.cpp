// Tail Recursion
# include <iostream>

int fact (int n, int acc = 1){
	if ( n == 0 ){
		return acc;
	} else {

		return fact (n-1 , n* acc);
	}
}

int main (){

	std::cout<<fact(5);
	return 0;
}