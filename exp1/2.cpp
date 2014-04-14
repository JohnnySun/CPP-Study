#include <iostream>

using namespace std;

class Date{
		public:
				void printDate() {
						cout << "YY/DD/MM:" << year << "/" << month << "/" << day << endl;
				}	//显示日期
				void setDay(int Dday) {
						day = Dday;
				}//设置日的值
				void setMonth(int Dmonth)  {
						month = Dmonth;
				}//设置月的值
				void setYear(int Dyear) {
						year = Dyear;
				}//设置年的值
		private:
				int day, month, year;
};
int main(){
		Date testDay;
		testDay.setDay(5);
		testDay.setMonth(10);
		testDay.setYear(2010);
		testDay.printDate();

		return 0;
}
