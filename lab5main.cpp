#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Lab5.cpp"
int main() {

	Guest Amelia(1205, "Amelia", 31, "Madrid", "0985735777", "FEMALE");
	Guest Frank(1200, "Frank", 45, "Tokyo", "0632569874", "MALE");
	Guest Julia(1199, "Julia", 26, "Lviv", "0677721842", "NON-BINARY");
	Party party({ Amelia,Frank,Julia }, 12, "No reason");
	vector<Guest> MyGuests;
	MyGuests.push_back(Amelia);
	MyGuests.push_back(Frank);
	MyGuests.push_back(Julia);

	party.bubbleSort(MyGuests, 3);
	Amelia.isLuckyPhoneNumber(Amelia);
	Frank.isLuckyPhoneNumber(Frank);
	Julia.isLuckyPhoneNumber(Julia);



	return 0;
}