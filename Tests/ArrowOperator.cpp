#include<iostream>

class Entity {
public:
	void print() {
		std::cout << "Hello World" << std::endl;
	}
};
int main() {
	Entity e;
	e.print();
	Entity* ptr = &e;
	ptr->print();
	return 0;
}