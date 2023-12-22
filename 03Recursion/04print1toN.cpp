// To print numbers 1 - N without using loops

# include <iostream>

void printNos(int N){

	if (N == 1){
		std::cout<<(N)<<" ";
		return;
	} else {
		printNos(N-1);
	    std::cout<<(N)<<" ";
	}
}

int main(){
	int N = 5;
	printNos(N);
	return 0;
}