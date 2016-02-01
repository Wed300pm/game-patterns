#include <iostream>

using namespace std;

int fudge (int brownies, int cookies);
class Dessert
{

private: //data
	double sugar;

public:  //functions
	Dessert();
	void printsugar();
};

int main()
{
	int brownies, cookies;
	Dessert cake;

	brownies = 1;
	cookies = 0;

	cout << "Total number of brownies and cookies:" << endl;
	cout << fudge(brownies, cookies);
	cout << "\n";


	cake.printsugar();

	return 0;
}



int fudge (int brownies, int cookies)
{
	return brownies + cookies;
}

Dessert::Dessert()
{
	sugar = 2;
}

void Dessert::printsugar()
{
	cout << "The sugar level of the cake Dessert object is:\n";
	cout << sugar;
	cout << endl;
}