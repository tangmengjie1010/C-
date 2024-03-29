//#include <iostream>
//#include <cmath>
// using namespace std;






 //class Coordinate
 //{
 //public :
	// Coordinate()
	// {

	// }
	// Coordinate(int x1)
	// {
	//	 x = x1;
	// }
	// Coordinate(int x1, int y1)
	// {
	//	 x = x1;
	//	 y = y1;
	//	 cout << "constructor is Called.\n";
	// }
	// Coordinate(Coordinate& p);
	// ~Coordinate()
	// {
	//	 cout << "Destructor is calleded\n";
	// }
	// int getx()
	// {
	//	 return x;
	// }
	// int gety()
	// {
	//	 return y;
	// }
 //private:
	// int x, y;
 //};
 //Coordinate::Coordinate(Coordinate& p)
 //{
	// x = p.x;
	// y = p.y;
	// cout << "Copy-initialization Constuctor is called\n";
 //}
 //int main()
 //{
	// Coordinate p1(3, 4);
	// Coordinate p2(p1);
	// Coordinate p3 = p2;
	// cout << "p3=(" << p3.getx() << "," << p3.gety() << ")\n";
	// Coordinate p4;
	// Coordinate p5(2);

	// return 0;
 //}


 //int add(int x, int y)
 //{
	// return x + y;
 //}
 //int main()
 //{
	// int x, y, sum;
	// cout << "Enter two numbers:" << endl;
	// cin >> x >> y;
	// sum = add(x, y);
	// cout << "The sum is :" << sum << endl;
	// return 0;
 //}
//int main()
//{
//	cout << "hello,world!" << endl;
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int sum = 0;
//	cout << "please input two integers:" << '\n';
//	cin >> x >> y;
//	//cin >> y;
//	sum = x + y;
//	cout << "x+y=" << sum << endl;
//	return 0;
////}
//class A 
//{
//private:
//	int a, b;
//public:
//	void intput()
//	{
//		cin >> a >> b;
//	}
//	void output()
//	{
//		cout << a << b << endl;
//	}
//	int add(int a1,int b1)
//	{
//		a = a1;
//		b = b1;
//		return a + b;
//	}
//};
//int main()
//{
//	A x;
//	x.intput();
//	x.output();
//	cout << x.add(8, 9) << endl;
//	return 0;
//}

 //int main()
 //{
	// int a, b;
	// cin >> a >> b;
	// cout << a << b<<endl;
	// cout << hex << a << " " << b << " " << dec << b << endl;
	// 
	// return 0;
 //}
 //int main()
 //{
	//  int a = 0;
	//  int c = 2;
	//  const int* b = &a;
	//  *b = 3;
	//  b = &c;
	//  int* const d = &c;
	//  *d = 3;
	//  d = &a;
	// return 0;
 //}

 //int main()
 //{
	// int a, b,d, min;
	// cout << "Emter two numbers:";
	// cin >> a >> b;
	// min = a > b ? b : a;
	// for (d = 2; d < min; d++)
	// {
	//	 if (((a % d) == 0) && ((b % d) == 0))
	//		 break;
	// }
	// if (d == min)
	// {
	//	 cout << "No common denominators" << endl;
	//	 return 0;
	// }
	// cout << "The lowest common denominator is " << d << endl;
	// return 0;
 //}

 //inline float circle(float r)
 //{
	// return 3.14 * r * r;
 //}
 //int main()
 //{
	// float area=0;
	// for (int i = 0; i <= 5; i++)
	// {
	//	 area=circle(i);
	//	 cout << "area=" << area << endl;
	// }
	//
	// return 0;
 //}


//inline int are(int x) {
//	return x * 2;
//}
//int main() {
//	for (int i = 1; i <= 3; i++) {
//		cout << i << "doubled id " << are(i) << endl;
//	}
//	cout << 1 + 2 << "double is" << are(1 + 2) << endl;
//	return 0;
//}


//int max(int a=9, int d = 3)
//{
//	return a > d ? a : d;
//}
//int main()
//{
//	cout << max(5,7)<< endl;
//}

//int i = 15;
//int main()
//{
//	int i = 100;
//	::i = i + 1;
//	cout << ::i << endl;
//	return 0;
//}

// void f(int& m, int n)//m和a一样指向a
// {
//	 int temp;
//	 temp = m;
//	 m = n;
//	 n = temp;
// }
//int main()
//{
//	int a = 3, b = 22;
//	f(a, b);
//	cout << a << " " << b << endl;
//	return 0;
//}

 //int  main()
 //{
	// int* p;
	// p = new int[5];
	// for (int i = 0; i < 5; i++)
	// {
	//	 cin >> p[i];
	// }
	// for (int i = 0; i < 5; i++)
	// {
	//	 cout << p[i];
	// }
	// delete[]p;
	// return 0;
 //}

//int& f(int& i,int& j)
//{
//	i = i + j;
//	return i;
//}
//int main()
//{
//	int k = 0;
//	int w = 4;
//	int& m = f(k,w);
//	cout << k << endl;
//	m = 20;
//	cout << k << endl;
//	m = 5;
//	cout <<f(k,w) << endl;
//
//	return 0;
//}

//void fun(int m, int& n)
//{
//	n = m * 5;
//}
//int main()
//{
//	int x;
//	int y;
//	fun(3, x);
//	fun(4, y);
//	cout << "x+y=" << x + y << endl;
//	return 0;
//}

//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int max(int a, int b, int c)
//{
//	if (a > b && a > c)
//		return a;
//	else if (b > c)
//		return b;
//	else
//		return c;
//}
//double max(double a, double b)
//{
//	return a > b ? a : b;
//}
//double max(double a, double b, double c)
//{
//	if (a > b && a > c)
//		return a;
//	else if (b > c)
//		return b;
//	else
//		return c;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	double a1 = 1.00;
//	double b2= 2.00;
//	double c3 = 3.00;
//	cout<<max(a, b)<<endl;
//	cout<<max(a, b, c)<<endl;
//	cout << max(a1, b2)<<endl;
//	cout << max(a1, b2, c3);
//}

//int main()/*
/*{
	void fun(int, int&);
	int x, y;
	fun(3, x);
	fun(4, y);
	cout << "x+y=" << x + y << endl;
	return 0;
}
void fun(int n, int& m)
{
	n = m * 5;
}*/

