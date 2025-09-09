#include<iostream>
using namespace std ; 
// for n th term 
int  fbnc(int n){
    if(n==0) return 1 ;
    return fbnc(n-1) + fbnc(n-2);
}

// for printing full series 
void fbnc1(int n){
    int fib[n+1];
    fib[0]= 0 ;
    fib[1]= 1 ;
    for(int i = 2 ; i <= n ; i++){
        fib[i] = fib[i-1]+ fib[i-2];
    }
    for(int i = 0 ; i < n + 1 ; i++){
        cout<<fib[i]<<" ";
    }
}
int main() {
	int n = 5;
if (n == 0) {
	    cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << 0;
	}
	else {
		int secondLast = 0;//for (i-2)th term
		int last = 1;//for (i-1)th term
		cout<<"The Fibonacci Series up to "<<n<<"th term:"<<endl;
		cout << secondLast << " " << last << " ";
		int cur; //for ith term
		for (int i = 2; i <= n; i++) {
			cur = last + secondLast;
			secondLast = last;
			last = cur;
			cout << cur << " ";
		}
	}
}
int main(){
    fbnc1(5);
}

