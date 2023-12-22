// To find the greatest common divisor ( Euclid ) using cpp

# include <iostream>

int gcd(int a, int b){

	if (a%b == 0){
		return b;
	}

	else {
		return gcd(b, a%b);
	}
}

int main(){

	int a = 7;
	int b = 8;

	std::cout<<gcd(a,b)<<std::endl;
}


