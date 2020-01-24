#include <iostream>
using namespace std;

int gcf(int numa,int numb)
{	
	if (numb!=0){
		return gcf(numb,numb % numba);
	}
	else
		return numa;
}

int main(){
	int num1,num2,big_num,gcf;
	cout<<"Enter numbers: ";
	cin >> num1; cin>>num2;

	cout << gcf(num1,num2) << endl;
}