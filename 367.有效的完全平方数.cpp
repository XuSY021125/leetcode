bool isPerfectSquare(int num){
int low = 1, high = num, mid;

    while(low <= high){
        mid = low + (high - low) / 2;
        if(num / mid == mid && num % mid == 0)  
            return true;
        else if(num / mid < mid)
            high = mid-1;
        else
            low = mid+1;
    }
    return false;                              
}
