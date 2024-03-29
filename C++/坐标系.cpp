//#include <iostream>
//#include <cmath>
//using namespace std;
//class Location{
//public :
//	Location(double a, double b)
//	{
//		x = a;
//		y = b;
//	}
//	double Getx()
//	{
//		return x;
//	}
//	double Gety()
//	{
//		return y;
//	}
//	double Distance(Location&L)
//	{
//		double x1 = x - L.x;
//		double y1 = y - L.y;
//		return sqrt(x1 * x1 + y1 * y1);
//	}
//	friend double Distance(Location& L1, Location& L2)
//	{
//		double x1 = L1.x - L2.x;
//		double y1 = L1.y - L2.y;
//		return sqrt(x1 * x1 + y1 * y1);
//	}
//private:
//	double x, y;
//};
//
//  
//int main()
//{
//	Location A(-5, -6);
//	Location B(-3, 4);
//	cout<<"A("<<A.Getx()<<","<<A.Gety()<<"),";
//	cout << "B(" << B.Getx() << "," << B.Gety() << ")\n";
//	cout << "Distancel=" << A.Distance(B) << endl;
//	cout << "Distancel=" << Distance(A, B) << endl;
//
//}