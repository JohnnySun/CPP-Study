#include<iostream>
using namespace std;
class Fraction{
		private:
				int num,den;
		public:
				//Fraction(int num1,int den1);
				Fraction();
				Fraction(int num1,int den1);
				friend Fraction operator+(const Fraction &a,const Fraction &b);//加法运算，友元函数
				friend Fraction operator-(const Fraction &a,const Fraction &b);	//减法运算，友元函数
				Fraction operator*(const Fraction &a);	//乘法运算
				Fraction operator/(const Fraction &a);	//除法运算
				Fraction operator -();	//求负运算
				Fraction operator=(const Fraction &a);	//赋值运算
				void print(){
						cout<<"分数为："<<num<<"/"<<den<<endl;
				}
};
Fraction::Fraction(){
		num=0;
		den=0;
}
Fraction::Fraction(int num1,int den1){
		num=num1;//分子
		den=den1;//分母
}
Fraction operator+(const Fraction &a,const Fraction &b){
		Fraction temp;
		temp.num=a.num*b.den+b.num+a.den;
		temp.den=a.den*b.den;
		return temp;
}
Fraction operator-(const Fraction &a,const Fraction &b){
		Fraction temp;
		temp.num=a.num*b.den-b.num*a.den;
		temp.den=a.den*b.den;
		return temp;
}
Fraction Fraction::operator*(const Fraction &a){
		Fraction temp;
		temp.num=num*a.num;
		temp.den=den*a.den;
		return temp;
}
Fraction Fraction::operator/(const Fraction &a){
		Fraction temp;
		temp.num=num*a.den;
		temp.den=den*a.num;
		return temp;
}
Fraction Fraction::operator-(){
		num=-num;
		return *this;
}
Fraction Fraction::operator=(const Fraction &a){
		num=a.num;
		den=a.den;
		return *this;
}
int main(){
		Fraction f(3,5);
		f.print();
		return 0;
}
