#include<iostream.h>
#include<fstream.h>
#include<string.h>
class Student{
		public:
				long id;
				char name[20];
				int age;
				float math;
				float chinese;
				float english;
		public:
				Student();
				Student(long l,char NAME[],int a);
				Student(long l,char NAME[],int a,float m, float c, float e);
				Student(const Student& other);	// 特殊的构造函数：拷贝构造函数
				Student operator =(const Student& other);	// 重载赋值运算符
				~Student();

				void setId(long l);
				long getId();
				void setName(char NAME[]);	  
				void setAge(int a);
				int  getAge();
				void setAll(float m, float c, float e);

				friend ostream& operator <<(ostream& stream, Student& obj);	// 利用友元函数：重载输出运算符"<<"和输入运算符">>"
				friend istream& operator >>(istream& stream, Student& obj);

};
Student::Student(){
		id=20070001;
		name[20]=0;//字符数组初始化
		age=20;
		math=90;
		chinese=90;
		english=90;
}
Student::Student(long l,char NAME[],int a){
		id=l;
		strcpy(name,NAME);
		age=a;
		math=90;
		chinese=90;
		english=90;
}
Student::Student(long l,char NAME[],int a,float m, float c, float e){
		id=l;
		strcpy(name,NAME);
		age=a;
		math=m;
		chinese=c;
		english=e;
}
Student::Student(const Student& other){//拷贝构造函数
		id=other.id;
		strcpy(name,other.name);
		age=other.age;
		math=other.math;
		chinese=other.chinese;
		english=other.english;
}
Student Student::operator =(const Student& other){// 重载赋值运算符
		id=other.id;
		strcpy(name,other.name);
		age=other.age;
		math=other.math;
		chinese=other.chinese;
		english=other.english;
		return *this;
}
Student::~Student(){
		cout<<"destructor is called!"<<endl;
}
void Student::setId(long l){
		id=l;
}
long Student::getId(){
		return id;
}
void Student::setName(char NAME[]){
		strcpy(name,NAME);
}
void Student::setAge(int a){
		age=a;
}
int  Student::getAge(){
		return age;
}
void Student::setAll(float m, float c, float e){
		math=m;
		chinese=c;
		english=e;
}
ostream& operator <<(ostream& stream, Student& obj){//重载输出运算符
		stream<<obj.id;
		stream<<obj.name;
		stream<<obj.age;
		stream<<obj.math;
		stream<<obj.chinese;
		stream<<obj.english;
		return stream;
}
istream& operator >>(istream& stream, Student& obj){//重载输入运算符
		stream>>obj.id;
		stream>>obj.name;
		stream>>obj.age;
		stream>>obj.math;
		stream>>obj.chinese;
		stream>>obj.english;
		return stream;
}
int main(){
		int a;
		char ch;
		Student s1(2007002,"Jerry",18);
		Student s2(2007003,"Jack",19,78.5,89.5,93.0);
		fstream ioFile("a.txt",ios::in|ios::out);
		if(!ioFile){
				cout<<"cannot open a.txt\n";
				//abort();
		}
		ioFile<<s1.id<<s1.name<<s1.age<<(s1.math+s1.chinese+s1.english)/3<<endl;
		ioFile<<s2.id<<s2.name<<s2.age<<(s2.math+s2.chinese+s2.english)/3<<endl;
		ioFile.close();
		ifstream fin("a.txt",ios::in);
		if(!fin){
				cout<<"open failed"<<endl;
				//abort();
		}
		cout<<"a.txt 内容\n";
		while(fin.get(ch)){//输出文件a.txt的内容
				cout<<ch;
		}
		fin.close();

		Student s3;
		Student s4(2007002,"Jerry",18);
		Student s5(2007003,"Jack",19,78.5,89.5,93.0);
		ofstream outfile("stud.dat",ios::out);//建立文件stud.dat，输入内容
		outfile<<s3<<endl<<s4<<endl<<s5<<endl;
		outfile.close();
		char stud[3];
		ifstream infile("stud.dat",ios::in);//输出文件stud.dat的内容
		infile>>stud[3];
		cout<<endl;
		for(int i=0;i<3;i++){
				infile.read((char *) &stud[i],sizeof(stud[i]));
				cout<<"输入第 "<<i+1<<" 个学生的信息：\n"<<stud[i]<<endl;
		}
		char ch1;
		cout<<endl;
		cout<<"stud.dat内容\n";
		cout<<"另一种方式输出\n";
		while(infile.get(ch1))
				cout<<ch1;
		infile.close();

		Student e1(1,"张三",23,10,20,30);
		Student e2(2,"李四",32,20,30,40);
		Student e3(3,"王五",34,30,40,50);
		Student e4(4,"刘六",27,40,50,60);
		ofstream outfile1("stud1.dat",ios::binary);
		if(!outfile1){
				cout<<"cannot open stud1.dat\n";
				//abort();
		}
		outfile1<<e1<<endl<<e2<<endl<<e3<<endl<<e4<<endl;//输入内容stud1.dat
		e3.setAge(40);
		outfile1.close();
		ifstream infile1("stud1.dat",ios::binary);
		cout<<endl;
		cout<<"stud1.dat内容\n";
		cout<<"一种方式输出\n";
		char ch2;
		while(infile1.get(ch2))
				cout<<ch2;
		char str[3];
		infile1.read((char *) &str[3],sizeof(str[3]));//输出第三个人的信息
		cout<<"输出第三个人的信息："<<str[3]<<endl;
		Student s6=e3;
		cout<<s6<<endl;

		return 0;
}
