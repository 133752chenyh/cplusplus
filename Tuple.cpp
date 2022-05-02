#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string, int> createPerson() {

	return {"cherno", 24};
}

int main() {

	int age;
	std::tie(name, age) = createPerson();
	std::cout << name << ": " << age << std::endl;

	return 0;
}
