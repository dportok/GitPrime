#include <iostream>
#include <string>
using namespace std;

class Animal {
private:  
	string name;
public:
      Animal(){
         cout << "Animal created." << endl;
      }

      Animal(const Animal& other):
            name(other.name){
            	cout << "Animal created by copying." << endl;
            }
      ~Animal(){

      	cout << "Destructor called" << endl;
      }

      void setName(string name){
      	this->name = name;
      }
      void speak(){

      	cout << "My name is : " << name << endl;
      }

};

//Animal createAnimal(){

//	Animal a;
//	a.setName("Bertie");
//	return a;
//}
int main () {
	

	Animal *pCat1 = new Animal[26];

	for (int i=0;i<=25;i++){
       char c[] = 'a';
 	   pCat1[i].setName(c);
 	   //pCat[i].speak();
	   c++;
	}
	delete [] pCat1;
    

    
	return 0;
}