class Solution {
public:
    int digitSqSum(int n){
	int sum = 0;
	while(n > 0){
		sum = sum + ((n%10)*(n%10));
		n=n/10;
	}
	return sum;
   }
    
    bool isHappy(int n) {
	int slow = digitSqSum(n);
	int fast = digitSqSum(digitSqSum(n));

	while(slow != fast) {
		slow = digitSqSum(slow);
		fast = digitSqSum(digitSqSum(fast));
	}

	return fast == 1 ;
}
   
};