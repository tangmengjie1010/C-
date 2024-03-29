#include <iostream>
#include <cmath>
using namespace std;
//#include<iostream> 
//
//#include<string>
//
//using namespace std;

//class Point
//
//{
//	int x, y;
//
//public:
//
//	Point(int a, int b)
//
//	{
//
//		x = a; y = b;
//
//	}
//
//	void Print()
//
//	{
//
//		cout << '(' << x << ','  << y << ')' << endl;
//
//	}
//
//};
//
//
//
//int main()
//
//{
//
//	Point a[3] = { Point(1,1),Point(2,2),Point(3,3) };
//
//	int i;
//
//	for (i = 0; i < 3; i++)
//
//		a[i].Print();
//
//	return 0;
//
//}
//
//class stu
//{
//private:
//	int number;
//	double score;
//public:
//	void input(int a, int b);
//	void gai(int b);
//	void output();
//};
//void stu::input(int a, int b) 
//{
//	number = a;
//	score = b;
//}
//void stu ::gai(int b)
//{
//	score = b;
//}
//void stu::output()
//{
//	cout << number << " " << score << endl;
//}
//
//int main()
//{
//	int n = 0;
//	int  s = 0;
//	cin >> n >> s;
//	stu sut1,
//
//}
//
//class Person {
//public:
//	Person() {
//		name = "Unknown";
//		age = 0;
//	}
//	Person(const string&n, int a) {
//		name = n;
//		age = a;
//	}
//	//Person(const Person& other) {
//	//	name = other.name;
//	//	age = other.age;
//	//}
//	//Person(Person&& other)noexcept {
//	//	name = move(other.name);
//	//	age = other.age;
//	//}
//	void seNname(const string& n) {
//		name = n;
//	}
//	void seAage(int a) {
//		age = a;
//	}
//	string geNname() const {
//		return name;
//	}
//	int geAage()const {
//		return age;
//	}
//private:
//	string name;
//	int age;
//};
//int main() {
//	string n = "hehe";
//	Person a;
//	a.seNname(n);
//	cout << n;
//}

//class Coordinate
//{
//public :
//	Coordinate()
//	{
//		x = 0;
//		y = 0;
//	}
//	Coordinate(int x1)
//	{
//		x = x1;
//	}
//	Coordinate(int x1, int y1)
//	{
//		x = x1;
//		y = y1;
//		cout << " 1.Constructor is Called. ";
//	}
//	Coordinate(Coordinate& p);
//	~Coordinate()
//	{
//		cout << " *Destructor is calleded* ";
//	}
//	int getx()
//	{
//		return x;
//	}
//	int  gety()
//	{
//		return y;
//	}
//private:
//	int x, y;
//};
//Coordinate::Coordinate(Coordinate& p)
//{
//	x = p.x;
//	y = p.y;
//	cout << "2.Copy-initialization Constructor is called  ";
//}
//int main()
//{
//	Coordinate p1(3, 4);
//	Coordinate p2(p1);
//	Coordinate p3 = p2;
//	cout << "p3=(" << p3.getx() << "," << p3.gety() << ")"<<endl;
//	Coordinate p4;
//	Coordinate p5(2);
//	return 0;
//}

//class Point
//
//{
//	int x, y;
//
//public:
//	Point(int xx = 0, int yy = 0)
//	{
//		x = xx; y = yy;
//	}
//	Point(Point& p)
//	{
//		x = p.x; y = p.y;
//		cout << "拷贝构造函数被调用" << endl;
//	}
//	int Getx()
//	{
//		return x;
//	}
//	int Gety()
//	{
//		return y;
//	}
//};
//void fun1(Point p)
//{
//	cout << p.Getx() << endl;
//}
//Point fun2()
//{
//	Point a(3, 4);
//	return a;
//}
//
//int main()
//
//{
//	Point a(7, 8);
//	cout << a.Getx() << endl;
//	Point b(a);
//	cout << b.Getx() << endl;
//	fun1(b);
//	b = fun2();
//	cout << b.Getx() << endl;
//	return 0;
//}
//
//class M {
//
//    int x, y;
//
//public:
//
//    M()
//
//    {
//
//        x = y = 0;
//
//    }
//
//    M(int i, int j)
//
//    {
//
//        x = i; y = j;
//
//    }
//
//    void copy(M* m);
//
//    void setxy(int i, int j)
//
//    {
//
//        x = i; y = j;
//
//    }
//
//    void print()
//
//    {
//
//        cout << x << "," << y << endl;
//
//    }
//
//};
//
//void M::copy(M* m)
//
//{
//
//    x = m->x;
//
//    y = m->y;
//
//}
//
//void fun(M m1, M* m2)
//
//{
//
//    m1.setxy(12, 15);
//
//    m2->setxy(22, 25);
//
//}
//
//int main()
//
//{
//
//    M p(5, 7), q;
//
//    q.copy(&p);
//
//    fun(p, &q);
//
//    p.print();
//
//    q.print();
//
//    return 0;
//
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	cout << "hello !";
//	cout << "This is a program." << endl;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	x = 5;
//	y = 6;
//	int z = x * y;
//	cout << "x * y = " << z << endl;
//	return 0;
//
//
//}
//#include <iostream>
//using namespace std;
//int add(int a, int b);
//int main()
//{
//	int x, y, sum;
//	cout << "Enter two numbers:" << ' ';
//	cin >> x >> y;
//	sum = add(x, y);
//	cout << "The sum is " << sum << ' ';
//	return 0;
//}
//int add(int a, int b)
//{
//	return a + b;
//}
//
//
//
