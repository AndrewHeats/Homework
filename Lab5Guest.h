#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Guest {
private:
	int id;
	int age;
	string name;
	string city;
	string phoneNumber;
public:
	enum Gender {
		FEMALE,
		MALE,
		NONBINARY
	};
	void bubbleSort(Guest arr[], int n);
	Guest(int id, int age, string name, string city, string phoneNumber) {
		setId(id);
		setAge(age);
		setName(name);
		setCity(city);
		setPhoneNumber(phoneNumber);
	};
	void getGender(string gender); 
	int getId() {
		return id;
	}
	int setId(int id) {
		this->id = id;
	}
	int getAge() {
		return age;
	}
	int setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	string setName(string name) {
		this->name = name;
	}
	string getCity() {
		return city;
	}
	string setCity(string city) {
		this->city = city;
	}
	string getPhoneNumber() {
		return phoneNumber;
	}
	string setPhoneNumber(string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}

	bool isLuckyPhoneNumber(); 

};