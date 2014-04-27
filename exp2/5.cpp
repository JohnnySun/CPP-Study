#include <iostream>

using namespace std;

class Employee		//声明Employee类
{
		public:
				Employee(long, char*, char*, double ); // 构造函数
				~Employee();	// 析构函数

				// set functions
				void set_id(long);			// 设置id
				void set_salary(double);		// 设置salary
				void set_name(char * );		// 设置name
				void set_address(char* );	// 设置adress

				// get functions
				long get_id();				// 返回id
				double get_salary();		// 返回 salary
				char* get_name();			// 返回 name
				char* get_addressSecond();	// 返回 address

				void print();	// 打印输出Employee的相关信息  

		private:
				long id;		// 工号
				char *name;	// 姓名
				char *address;	// 家庭住址
				double salary;	// 月薪
}; // Employee类声明结束

Employee::Employee(long myid, char *myname, char*myaddress, double mysalary)
{
		id = myid;
		name = myname;
		address = myaddress;
		salary = mysalary;
}

void Employee::set_id(long myid)
{
		id = myid;
}
//其他set同40行一样的写法
long Employee::get_id()
{
		return id;
}
//其他get同45行一样的写法
void Employee::print()
{
		cout << "id:" << id << "\n" << "name:" << name << "\n" << "address:" << address << "\n" << "salary:" << salary << endl;
}

int main(void)
{
		//...
		//...
		//主函数省略，就是个验证，记住return;
		retnrn 0;
}

