#include<iostream.h>
class Point{
		private:
				int x;
				int y;
		public:
				Point(int x1,int y1);
				void print();
				friend Point operator++(Point &obj1);
				friend Point operator++(Point &obj2,int);
};
Point::Point(int x1,int y1){
		x=x1;
		y=y1;
}
void Point::print(){
		cout<<"x:"<<x<<endl;
		cout<<"y:"<<y<<endl;
}
Point operator++(Point &obj1){
		++obj1.x;
		++obj1.y;
		return obj1;
}
Point operator++(Point &obj2,int){
		obj2.x++;
		obj2.y++;
		return obj2;
}
int main(){
		Point p1(3,4);
		p1++;
		cout<<"前置++"<<endl;
		p1.print();
		++p1;
		cout<<"后置++"<<endl;
		p1.print();
		return 0;
}
