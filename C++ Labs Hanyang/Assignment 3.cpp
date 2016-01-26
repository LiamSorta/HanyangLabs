//Liam Sorta
//liamsorta@gmail.com
//Operator Overloading 

#include <iostream>
using namespace std;

class Vector2D {
public:
	int x;
	int y;
	void setx(int);
	void sety(int);
	int  getx() const;
	int  gety() const;
	Vector2D operator *(const  Vector2D&);
};

Vector2D Vector2D::operator  *(const Vector2D& number)
{
	Vector2D temp;
	temp.x = x * number.x;

	return temp;
}

void Vector2D::setx(int nx)
{
	x = nx;
}

void Vector2D::sety(int ny) {
	y = ny;
}

int Vector2D::getx() const
{
	return x;
}

int Vector2D::gety() const {
	return y;
}

//int Vector2D:: getx() const
//{
//	return x;
//}

int main()
{
	int x, y;
	Vector2D v1, v2, v3, v4, v5, v6;
	cout << "Enter 2 number for vector 1" << endl;
	cin >> x >> y;
	v1.setx(x);
	v1.sety(y);

	cout << "Enter 2 number for vector 2" << endl;
	cin >> x >> y;
	v2.setx(x);
	v2.sety(y);

	cout << "Enter 2 number for vector 3" << endl;
	cin >> x >> y;
	v3.setx(x);
	v3.sety(y);

	cout << "Enter 2 number for vector 4" << endl;
	cin >> x >> y;
	v4.setx(x);
	v4.sety(y);

	cout << "Enter 2 number for vector 5" << endl;
	cin >> x >> y;
	v5.setx(x);
	v5.sety(y);

	cout << "Enter 2 number for vector 6" << endl;
	cin >> x >> y;
	v6.setx(x);
	v6.sety(y);


	cout << "**************************************************************";
	cout << endl << "(" << v1.getx() << "," << v1.gety() << " * (" << v2.getx() << "," << v2.gety() << ") = " << v1.getx() * v2.getx() + v1.gety() * v2.gety() << endl;
	cout << "(" << v3.getx() << "," << v3.gety() << " * (" << v4.getx() << "," << v4.gety() << ") = " << v3.getx() * v4.getx() + v3.gety() * v4.gety() << endl;
	cout << "(" << v5.getx() << "," << v5.gety() << " * (" << v6.getx() << "," << v6.gety() << ") = " << v5.getx() * v6.getx() + v5.gety() * v6.gety() << endl;
	system("pause");
}
