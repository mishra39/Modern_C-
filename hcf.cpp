#include <iostream>
using namespace std;

int main(){
	int num1,num2,big_num,gcf;
	cout<<"Enter numbers: ";
	cin >> num1; cin>>num2;
	
	if (num1 > num2){
		big_num = num1;	
	}
	else{
		big_num = num2;
	}
	
	for (int i=1;i<=big_num;i++){
		if (num1 % i == 0 && num2 %i == 0){
			gcf = i;
		}
	}
	cout << gcf << endl;
}