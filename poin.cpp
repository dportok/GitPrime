#include <iostream>
using namespace std;


int main (){
	int j=0;
for (int i=1;i<=10000;i++){
if(i%100==0){

	cout <<".";
    j++;}
if(i==10000){

	cout << endl;}
}
cout << j << endl;
	return 0;
}