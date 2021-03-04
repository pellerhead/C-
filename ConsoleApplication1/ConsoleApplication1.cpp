// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Tire {
private:
	std::string shape;

public:
	Tire() {};

	Tire(std::string s) {
		shape = s;
	}

	void setShape(std::string shape) {
		this->shape = shape;
	}

	std::string getShape() {
		return this->shape;
	}
};

class Car {
private:
	std::string brand;
	std::string model;
	int year;
	Tire tire;

public:
	Car(std::string x, std::string y, int z, Tire t) {
		brand = x;
		model = y;
		year = z;
		tire = t;
	}

	void setBrand(std::string brand) {
		this->brand = brand;
	}
	void setModel(std::string mmodel) {
		this->model = model;
	}
	void setYear(int year) {
		this->year = year;
	}
	void setTire(Tire tire) {
		this->tire = tire;
	}

	std::string getBrand() {
		return this->brand;
	}
	std::string getModel() {
		return this->model;
	}
	int getYear() {
		return this->year;
	}
	Tire getTire() {
		return this->tire;
	}
};

int main() {
	Tire tireObj1("Round");
	Tire tireObj2("Square");

	Car carObj1("Chevy", "Tahoe", 2021, tireObj1);
	Car carObj2("Ford", "Mustang", 2020, tireObj2);

	std::cout << carObj1.getBrand() << " " << carObj1.getModel() << " " << carObj1.getYear() << " " << carObj1.getTire().getShape() << "\n";
	std::cout << carObj2.getBrand() << " " << carObj2.getModel() << " " << carObj2.getYear() << " " << carObj2.getTire().getShape() << "\n\n";

	carObj1.setBrand("Plymouth");
	Tire t = carObj1.getTire(); ///  Wonder why this does not work?  carObj1.getTire().setShape("Pentagon");
	t.setShape("Pentagon");
	carObj1.setTire(t);

	std::cout << carObj1.getTire().getShape() << "\n\n";

	carObj2.setYear(2019);
	carObj2.getTire().setShape("Triangle");

	std::cout << carObj1.getBrand() << " " << carObj1.getModel() << " " << carObj1.getYear() << " " << carObj1.getTire().getShape() << "\n";
	std::cout << carObj2.getBrand() << " " << carObj2.getModel() << " " << carObj2.getYear() << " " << carObj2.getTire().getShape() << "\n\n";

	std::count << "Done";
	
	return 0;
}