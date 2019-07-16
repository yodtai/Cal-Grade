/*Suwapich rila 
6206021630049
	sec A */
#include <iostream>
using namespace std;
int main() {
	int score ;
	cout<<"enter score : ";
	cin>>score;

	if (score<=100&&score>=90){
		cout<<"Grade A "<<endl;
	}
	else if (score<=89&&score>=80){
		cout<<"Grade B "<<endl;
	}
	else if (score<=79&&score>=70){
		cout<<"Grade C "<<endl;
	}
	else if (score<=69&&score>=60){
		cout<<"Grade D "<<endl;
	}
	else if (score<=59&&score>=0){
		cout<<"Grade F "<<endl;
	}

	else{
		cout<<"Error message"<<endl;
	}

	return 0;
}