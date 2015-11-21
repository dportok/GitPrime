#include <iostream>
using namespace std;

int main() {

int numbers[3]={12109743,0,0};
int *poin;
poin=numbers;
cout << &numbers[0] << endl;
cout << poin << endl;
int test;
test=(numbers[0] >> 8) & 1;
cout << test << endl;
return 0;
}
