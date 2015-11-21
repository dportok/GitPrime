#include <iostream>
#include <sstream>
using namespace std;

int main(){

    string name = "Bob";
    int age = 32;

    stringstream ss;
    ss << name << age << endl;
    cout << ss.str() << endl;

	return 0;

}