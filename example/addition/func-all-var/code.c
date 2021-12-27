#include<stdio.h>
int add(int a, int b){
	int c = a + b;
	return c;
}
int main(){
	int a = 2345;
	int b = 9753;
	int c = add(a,b);
	return 0;
}