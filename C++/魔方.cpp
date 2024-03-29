//#include <iostream>
//#include <cmath>
//using namespace std;
//
//class magic{
//private :
//	int first;
//	int step;
//	int sum;
//	int m[4][4];
//public :
//	void getdata()
//	{
//		cout << "ÇëÊäÈë³õÊ¼Öµ£º";
//		cin >> first;
//		cout << "ÇëÊäÈë²îÖµ£º";
//		cin >> step;
//	}
//	void setfirstmagic()
//	{
//		m[0][0] = first;
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				if(j!=0)
//				m[i][j] = m[i][j - 1] + step;
//				if (j == 3 && i < 3)
//					m[i + 1][0] = m[i][j] + step;
//			}
//		}
//	}
//	void generatemagic()
//	{
//		sum = m[0][0] + m[3][3];
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				if(i==j||i+j==3)
//				m[i][j] = sum - m[i][j];
//			}
//		}
//	}
//	void printmagic()
//	{
//		cout << "ÆåÅÌ£º" << endl;
//		for (int i = 0; i < 4; i++) {
//			for (int j = 0; j < 4; j++) {
//				printf("%3d",m[i][j]);
//			}
//			cout << endl;
//		}
//	}
//};
//
//int main()
//{
//	magic h;
//	h.getdata();
//	h.setfirstmagic();
//	h.printmagic();
//	h.generatemagic();
//	h.printmagic();
//}
