#include <iostream>
#include <cmath>


double solution(double a, double b, double c){
	double s = pow((b*b - 4*a*c), 0.5);

	double xpos = ((-b+s)/(2*a));
	double xneg = ((-b-s)/(2*a));
	std::cout << xpos;
	std::cout << xneg;
}

int main() {
	double fnum;
	double snum;
	double tnum;

	std::cout<< "Insert 3 numbers \n";
	std::cin >> fnum;
	std::cin >> snum;
	std::cin >> tnum;

	solution(fnum,snum,tnum);



}