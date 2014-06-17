#include <iostream>
#include <string>
class EMPLOYEE{
		private:
				long id;//工号、姓名、部门、年龄、工资
				char name[20];
				char department[50];
				int  age;
				double salary;
		public:
				EMPLOYEE();
				EMPLOYEE(const EMPLOYEE& obj);
				EMPLOYEE(long idd, char namee[], char depar[], int agee, double sala);
				~EMPLOYEE();
				void changeDepartment(char newDepar[]);
				void changeAge(int agee);
				void raiseSalary(double delta);
				// 定义友元函数,提供输入/输出运算"<<"和">>"。
				friend ostream& operator<<(ostream& stream, EMPLOYEE& obj);
				friend istream& operator>>(istream& stream, EMPLOYEE& obj);
}; 
EMPLOYEE::EMPLOYEE(){
		id=0;
		name[0]=0;//字符数组的初始化
		department[0]=0;//字符数组的初始化
		age=0;
		salary=0;
}
EMPLOYEE::EMPLOYEE(long idd, char namee[], char depar[], int agee, double sala){
		id=idd;
		strcpy(name,namee);
		strcpy(department,depar);
		age=agee;
		salary=sala;
}
EMPLOYEE::~EMPLOYEE(){
		cout<<"destructor is called"<<endl;
}
void EMPLOYEE::changeDepartment(char newDepar[]){//修改部门
}
void EMPLOYEE::changeAge(int agee){//修改年龄
}
ostream& operator<<(ostream& stream, EMPLOYEE& obj){
		stream<<"工号："<<obj.id<<endl;
		stream<<"姓名："<<obj.name<<endl;//输出数组
		stream<<"部门："<<obj.department<<endl;//输出数组
		stream<<"年龄："<<obj.age<<endl;
		stream<<"工资："<<obj.salary<<endl;
		return stream;
}
istream& operator>>(istream& stream, EMPLOYEE& obj){
		cout<<"请输入工号：";
		stream>>obj.id;
		cout<<"请输入姓名：";
		stream>>obj.name;
		cout<<"请输入部门：";
		stream>>obj.department;
		cout<<"请输入年龄：";
		stream>>obj.age;
		cout<<"请输入工资：";
		stream>>obj.salary;
		return stream;
}
void main()
{
		EMPLOYEE A(200701, "Tom", "DEPARTMENT A",34,2345.6);
		cout<<A;
		EMPLOYEE B;
		cin>>B;
		cout<<"输入的信息："<<endl<<B<<endl;
}
