#include<iostream>
using namespace std;

class Fraction
{
 	int x;
 	int y;
public:
	void Input()
	{
		cin >> x >> y;
	}
	void Show()
	{
		cout << x << "/" << y << endl;
	}
	Fraction Sum(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.y + b.x * y; 
		rez.y = y * b.y;
		return rez;
	}
	Fraction Minus(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.y - b.x * y;
		rez.y = y * b.y;
		return rez;
	}
	Fraction Multiplication(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.x;
		rez.y = y * b.y;
		return rez;
	}
	Fraction Division(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.y;
		rez.y = y * b.x;
		return rez;
	}
};

int main()
{
	Fraction a;
	a.Input();
	a.Show();

	Fraction b;
	b.Input();
	b.Show();

	cout << endl << endl;

	Fraction c = a.Sum(b);
	c.Show();

	Fraction d = a.Minus(b);
	d.Show();

	Fraction e = a.Multiplication(b);
	e.Show();

	Fraction f= a.Division(b);
	f.Show();

	system("pause");
	return 0;
}