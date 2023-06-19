#include <iostream>
using namespace std;

 int pow(int x, int n){
 	if(n <=0){
 		cout<<"Enter 1 or greater than 1 number: "<<endl;
	 }
	else if(n==1){
		return x;
	}
	else{
	return x * pow(x, n-1); // if x=2 and n=4
	//1: 2 * pow(2, 3);
	//2: 2 * 2 * pow(2,2);
	//3: 2 * 2 * 2 * pow(2,1)
	//4: 2 * 2 * 2 * 2 * pow(2,0)=16	
	}
 }

int main(){
	int x, n;
	cout<<"Enter base (x): ";
	cin>>x;
	cout<<"Enter exponent (n): ";
	cin>>n;
	
	cout<<x<<" raised to the power of "<<n<<" is: "<<pow(x,n);
}
