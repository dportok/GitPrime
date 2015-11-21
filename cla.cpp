#include <iostream>
using namespace std;

class Cat{

	bool happy;
public:
	void speak();
	void jump();
	void makeHappy();
    void makeSad();
    Cat();
   ~Cat();
};

void Cat::speak(){
    if(happy){
	cout << "Meouwww!!!" << endl;}
	else {
	cout << "Sssss" << endl;
	}
}
void Cat::jump(){
	cout << "Jumping to the top of bookcase" << endl;
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
     happy=false;
}
Cat::Cat(){

	cout << "Cat created" << endl;
    happy = true;
}

Cat::~Cat(){

	cout << "Cat destroyed" << endl;
}

int main() {
{
Cat cat1;
cat1.speak();
}
cout << "Ending program..." << endl;
return 0;
}
