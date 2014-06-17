#include<iostream.h>
class Point{
		private:
				int x,y;
		public:
				Point(int x1,int y1);
				Point operator++();
				Point operator++(int);
				void print();
};
Point::Point(int x1,int y1){
		x=x1;
		y=y1;
}
Point Point::operator ++(){
		++x;
		++y;
		return *this;
}
Point Point::operator ++(int){
		x++;
		y++;
		return *this;
}
void Point::print(){
		cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
int main(){
		Point p1(1,2);
		p1.print();
		++p1;
		p1.print();
		p1++;
		p1.print();
		return 0;
}
