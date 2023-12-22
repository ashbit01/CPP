// To find the total number of digits in a number
# include <iostream>

int countDigits(int n, int a=0){
	if (n == 0){
		return a;
	}
	else{
		return(countDigits(n = n/10, a+=1));
	}
}

int main(){
	int n;
	std::cout<<"Enter the number"<<std::endl;
	std::cin>>n;
	int result = countDigits(n);
	std::cout<<result;
}