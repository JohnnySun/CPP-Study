#include<iostream.h>
class Container{
		public:
				virtual double area()=0;//纯虚函数
				virtual double size()=0;//纯虚函数
};
class Sephere:public Container{
		public:
				Sephere(double a){
						r=a;
				}
				double area(){
						return 4*3.14*r*r;
				}
				double size(){
						return (4/3)*3.14*r*r*r;
				}
		private:
				double r;
};
class Cylinder:public Container{
		public:
				Cylinder(double a,double b){
						r=a;
						h=b;
				}
				double area(){
						return 2*3.14*r*(h+r);
				}
				double size(){
						return 3.14*r*2*h;
				}
		private:
				double r,h;
};
int main(){
		Container *c;
		Sephere a(1.5);
		Cylinder b(1.5,2.5);
		c=&a;
		cout<<"球体的半径为：1.5"<<endl;
		cout<<"球体表面积："<<c->area()<<endl;
		cout<<"球体体积："<<c->size()<<endl;
		c=&b;
		cout<<"圆柱体的半径为：1.5，高为：2.5"<<endl;
		cout<<"圆柱体表面积："<<c->area()<<endl;
		cout<<"圆柱体体积："<<c->size()<<endl;
		return 0;
}
