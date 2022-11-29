#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#include "Lab5.cpp"
int main() {
	Guest Amelia(1205, 31, "Amelia", "Madrid", "0985735777"/*, enum Gender :: FEMALE*/);
	Guest Frank(1200, 45, "Frank", "Tokyo", "0632569874"/*,"male"*/);
	Guest arr[3];
	arr[0] = Amelia;
	arr[1] = Frank;
	arr[2] = Julia;
	//bubbleSort(arr, 3);
	Guest Julia{ 1199, 26, "Julia", "Lviv", "0677721842"/*, "nonbinary"*/ };

	Amelia.isLuckyPhoneNumber();
	Frank.isLuckyPhoneNumber();
	Julia.isLuckyPhoneNumber();


	return 0;
}