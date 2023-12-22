// Finding the value of the sequence using cpp

# include <iostream>

int S(int n){
	if (n == 0){
		return 1;
	} else {
		return n+n*(S(n-1));
	}
}

int main(){

	int n = 3;
	int s1 = S(n);
	std::cout<<s1;

}