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
	string gender;
	Guest(int id, string name, int age, string city, string phoneNumber, string gender) {
		setId(id);
		setAge(age);
		setName(name);
		setCity(city);
		setPhoneNumber(phoneNumber);
		this->gender = gender;
	};

	int getId() {
		return id;
	}
	void setId(int id) {
		this->id = id;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getCity() {
		return city;
	}
	void setCity(string city) {
		this->city = city;
	}
	string getPhoneNumber() {
		return phoneNumber;
	}
	void setPhoneNumber(string phoneNumber) {
		this->phoneNumber = phoneNumber;
	}

	bool isLuckyPhoneNumber(); 

};