//Method-1 (Normal divide by 10 and increment it)
int countDigits(int n){
	// Write your code here.
		int x = n;
		int count = 0;

		while(x!=0) {
			x = x/10;
			count++;
		}
		return count;
}

//Method-2 (change integer to string)
int countDigits(int n){
	// Write your code here.
		string x = to_string(n);
        return x.length(); 
}

//Method-3 (using LOG)
int countDigits(int n){
	// Write your code here.
		int digits = floor(log10(n) +1);
		return digits;
}