#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

class Location					//声明类Location
{
		public:
				Location(double,double);	//构造函数	
				double Getx();				//成员函数，取x坐标的值
				double Gety();				//成员函数，取y坐标的值
				double distance1(Location&);		//成员函数，求两坐标点之间的距离
				friend double distance2(Location&, Location&);		//友元函数，求两坐标点之间的距离
		private:
				double x,y;
};

Location::Location(double getx, double gety)
{
		x = getx;
		y = gety;
}

double Location::Getx()
{
		return x;
}

double Location::Gety()
{
		return y;
}

double Location::distance1(Location &Location1)
{
		double distance;
		double x1 = Location1.Getx();
		double y1 = Location1.Gety();
		distance = sqrt(fabs(x-x1) * fabs(x-x1) + fabs(y-y1) * fabs(y-y1));
		return distance;
}

double distance2(Location &Location1, Location &Location2)
{
		double distance;
		double x1 = Location1.Getx();
		double x2 = Location2.Getx();
		double y1 = Location1.Gety();
		double y2 = Location2.Gety();
		distance = sqrt(fabs(x1-x2) * fabs(x1-x2) + fabs(y1-y2) * fabs(y1-y2));
		return distance;
}

int main(void)
{
		Location d1(1.1,3.2);
		Location d2(2.1,4);
		double dis1 = d1.distance1(d2);
		double dis2 = distance2(d1, d2);
		cout << "destance1 = " << dis1 << endl;
		cout << "destance2 = " << dis2 << endl;
		return 0;
}

