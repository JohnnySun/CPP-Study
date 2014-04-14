#include <iostream>

using namespace std;

class ClsName
{
		public:
				ClsName() {cout << "No Argv" << endl;}
				ClsName(int a) {cout << a << endl;}
				ClsName(int c, int d) {cout << c << "/" << d << endl;}
				void print() {cout << x << "/" << y << endl;}
				void setx(int a) {x = a;}
				void sety(int a) {y = a;}
		private:
				int x;
				int y;
};

int main() {
		ClsName test1;
		ClsName test2(1);
		ClsName test(1,2);
}
