#include<iostream>
#include <math.h>
using namespace std;

int main() {
	int seconds;

	cout << "Enter a time in seconds: "; cin >> seconds;
	cout << "An object in freefall for 13 seconds will fall " << ((0.5f * 32) * (pow(seconds,2)));
	cin >> seconds;
}