#include <iostream>
#include <math.h>
using namespace std;


int main (){
    

char skata[]="helo";
char *temp,temp1;
int i=0;
int total = 3;

while (i < total){
     
     temp = &skata[i];
     
     temp1=skata[i];
     //temp2 = &skata[total];
     //cout << *temp1 << endl;
      *temp = skata[total];

     //cout << skata[i] << endl;

     skata[total] = temp1;

     //cout << skata[total] << endl;
     i++;
     total--;

}

cout << skata << endl;





	return 0;

}
