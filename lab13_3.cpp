#include<iostream>

using namespace std;

void mySwap(int &,int &); 


int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &num1,int &num2){
	int num1_swap,num2_swap;
	num1_swap = num1;
	num2_swap = num2;
	num1 = num2_swap;
	num2 = num1_swap;
}
