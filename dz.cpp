#include<iostream>
using namespace std;
void passbyvalue(int num){
	num=num+10;
	cout<<"inside function(passbyvalue):"<<num<<endl;	
}
void passmulvalue(int num){
	num=num*10;
	cout<<"inside function(passmulvalue):"<<num<<endl;
}
int main(){
	int number=5;
	cout<<"before function call"<<number<<endl;
	passbyvalue(number);
	cout<<"before function call "<<number<<endl;
	passmulvalue(number);
	
return  0;
}