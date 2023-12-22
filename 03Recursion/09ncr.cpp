// Finding the value of nCr using cpp

# include <iostream>

int comb(int n=0, int r=0){

	if (n == 0 || r == 0 || n==r){
		return 1;
	}

	else{
		return (comb(n-1, r-1)+ comb(n-1,r));
	}

}

int main(){
	int n = 5;
	int r = 2;

	std::cout<<comb(5,2)<<std::endl;
}