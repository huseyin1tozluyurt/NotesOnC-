﻿#include <iostream>
#include <string>
using namespace std;

int main() {
	
	struct {
		string brand;
		int yearOfProduction;
		int price;
		string currency;

	}Car1, Car2, Car3;

	Car1.brand = "Toyoto";
	Car1.yearOfProduction = 2008;
	Car1.price = 3000;
	Car1.currency = "₺";

	Car2.brand = "TOGG";
	Car2.yearOfProduction = 2023;
	
	cout << Car1.currency;

	return 0;

}