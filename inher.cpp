#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
    void speak(){

    cout << "Grrrr" << endl;    
    }	





};

class Cat: public Animal {

      public:
      	void jump(){

      		cout << "Cat jumping!" << endl;
      	}

};

int main () {
	cout << "Hello World" << endl;

	Animal a;
	a.speak();

    Cat cat;
    cat.speak();
    cat.jump();
	return 0;
}