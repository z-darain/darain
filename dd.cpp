#include<iostream>
using namespace std;
void passbyvalue(int num){
	num=num+10;
	cout<<"sinside function(passbyvalue):"<<num<<endl;	
}
int main(){
	int number=5;
	cout<<"before function call"<<number<<endl;
	passbyvalue(number);
return  0;
	
}