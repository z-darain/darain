#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char source[] = "helloWORLD";
	char destination[50];
	strcpy(destination,source);
	
	cout<<"source string "<<source;
	cout<<"destination string:"<<destination;
}