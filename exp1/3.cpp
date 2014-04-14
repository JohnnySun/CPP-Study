#include <iostream>

using namespace std;

class counter
{
	public:
		counter(int number) {value = number;}		//构造函数
		void increment() {value++;}					//给value原值加1
		void decrement() {value--;}					//给value原值减1
		void setvalue(int set) {value = set;}		//设置计数器值
		int getvalue() {return value;}				//取得计数器值
		void print() {cout << value <<endl;}		//显示计数
	private:
		int value;				//数据成员
};


int main(){
	counter c1(5);
	c1.increment();
	c1.print();
	c1.decrement();
	c1.print();
	int a;
	a = c1.getvalue();
	cout << a << endl;
	return 0;
}
