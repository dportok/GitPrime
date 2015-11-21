#include <iostream>
#include <sstream>
using namespace std;

class Person{

private: 
string name;
int age;
public: 
 Person();
 string toString();
 Person(string name, int age);

};

Person::Person():name("undefined"),age(0){
   

}
string Person::toString(){
    stringstream ss;
    ss << name << " " << age << endl;
    return ss.str();

}
Person::Person(string name, int age):name(name),age(age){
 
}

int main(){
   Person person1("Olga",26);
   Person person2 ("Jim", 29);
   Person person3("John",23);
   Person *poin;
   cout << person1.toString() << endl;
   cout << person2.toString() << endl;
   cout << person3.toString() << endl;
   poin=&person3;
   cout << &person1 << poin << endl;
   return 0;

}