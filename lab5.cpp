#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
#include "Lab5Guest.h"


class Guest {
	public:
		enum Gender {
			FEMALE,
			MALE,
			NONBINARY
		};
		void swap(Guest* xp, Guest* yp) {
			int temp = *xp;
			*xp = *yp;
			*yp = temp;
		}

		
		Guest(int id, string name, int age, string city, string phoneNumber, Gender gender){
			setId (id);
			setAge (age);
			setName (name);
			setCity (city);
			setPhoneNumber (phoneNumber);
			this->gender = gender;
		};
		
		int getId (){
			return id;
		}
		int setId (int id){
			this->id=id;
		}
		int getAge (){
			return age;
		}
		int setAge (int age){
			this->age=age;
		}
		string getName (){
			return name;
		}
		string setName (string name){
			this->name=name;
		}
		string getCity (){
			return city;
		}
		string setCity (string city){
			this->city=city;
		}
		string getPhoneNumber (){
			return phoneNumber;
		}
		string setPhoneNumber (string phoneNumber){
			this->phoneNumber=phoneNumber;
		}
		
		

		bool isLuckyPhoneNumber(){
			int count = 0;
			
			int n= getPhoneNumber.length();
			char char_array[n+1];
			strcpy(char_array, s.c_str());
			
			for (int i=0;i<10;i++)
			{
				if (char_array[i]=='7'){
					count++;
				}
			}
			if (count >= 3){
				
				return true;
			}
			else{
				return false;
			}
				
		}
			
};
class Party{
	public:
		vector<Guest> guests;
		
		int day;
		string reason;
		void bubbleSort(vector<Guest> arr, int SIZE) {
			int i, j;
			for (i = 0; i < SIZE - 1; i++)
				for (j = 0; j < SIZE - 1 - i; j++)
					if (arr[j] > arr[j + 1])
						swap(&arr[j], &arr[j + 1]);
		}
		Party(vector<Guest> guests, int day; string reason) {
			this->guests = guests;
			this->day = day;
			this->reason = reason;
		}
		int findAverageAge( vector<Guest> guests ,Gender gender){
			if (gender == FEMALE){
			int age = guest.getAge();
			int ag=ag+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
			if (gender == MALE){
			int age = guest.getAge();
			int ag=ag+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
			if (gender == NONBINARY){
			int age = guest.getAge();
			int ag=+age;
			int num=0;
			num+=1;
			int res=ag/num;
			cout << res << endl;
			}
		return 0;
		}
	
		};

	

