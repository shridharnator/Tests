#include<iostream>
long double powerrec(double number, long int power);
long double poweriter(double number, long int power);
int main() {

	long double num=2;
	int power=1023;

	//take time reading one
	long  double result = powerrec(num, power);
	long  double result2 = poweriter(num, power);

	//take second time rwading
	//print time difference
	std::cout << result <<std::endl;
	std::cout << result2 << std::endl;

	return 0;
}

long double powerrec(double number,long int power1) {
	long int pow = power1;
	
	
	if (pow == 1)
		return(number);  /*Terminating condition*/
	else
	{
		pow--;
		return(number* powerrec(number,pow));
		
	}
}

long double poweriter(double number, long int power) {
	long double prod = number;
	long double r = 1;
	for (int i = 0; i < power; i++) {

		r =r* prod;
	}
	return r;
}