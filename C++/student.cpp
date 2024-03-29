//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class Student
//{
//private:
//	double score;
//	static double total_score;
//	static int count;
//public:
//
//	void accout()
//	{
//		int x;
//		cin >> x;
//		score = x;
//		count += 1;
//		total_score += score;
//
//	}
//	static double sum()
//	{
//		return total_score;
//	}
//	static double average()
//	{
//		double average = total_score / count;
//		return average;
//	}
//};
//double Student::total_score = 0;
//int Student::count = 0;
//int main()
//{
//	Student a[10];
//	for (int i = 0; i < 10; i++)
//		a[i].accout();
//	cout << Student::sum() << ",";
//	cout << Student::average() << endl;
//}