// Finding perfect square using binary search

# include <iostream>

int sqrt(int k){
    int s = 0, l = k;

    while (s<=l){
        int mid = (s+l)/2;
        if ((mid*mid) == k){
            int n = mid;
            std::cout<<n<<" is the root number"<<std::endl;
            return 1;
        } else if ((mid*mid)>k){
            l=mid-1;
        } else if((mid*mid)<k){
            s=mid+1;
        }
    }

    return 0;
    
}


int main(){
    int k = 49;
    int result = sqrt(k);
    if (result == 1){
        std::cout<<"It is a perfect square";
    }
    else if (result == 0){
        std::cout<<"It is not a perfect square";
    }
}