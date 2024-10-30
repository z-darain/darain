#include<iostream>
using namespace std;
int main(){
	
	int n;                 
	long factorial= 1.0;
	
	cout<<"enter a no";
	cin>>n;
	if(n<0)
	cout<<"error u entered a negative number";
	else{
		for(int i=1;i<=n;i++){
	
		factorial*=i;}
		cout<<"fact of "<<n<<"="<<factorial;
	
	}
	return 0;
}