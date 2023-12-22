// Sum of natural numbers using tail recursion

# include<iostream>

int sum(int n,int a = 0){

	if (n==0){
		return a;
	}
	else{

		return sum(n-1,a+=n);
	}

}

int main(){
	int n;

	std::cout<<"Enter the value of n: "<<std::endl;
	std::cin>>n;
	std::cout<<"The value of "<<n<<" natural numbers is "<<sum(n)<<std::endl;

}