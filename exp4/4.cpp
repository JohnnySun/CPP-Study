#include<iostream.h>
class Vehicle{
		public:
				virtual void run(){
						cout<<"Vichicle run……"<<endl;
				}
				virtual void stop(){
						cout<<"Vichicle stop……"<<endl;
				}
};
class Bicycle : virtual public Vehicle{
		public:
				void run(){
						cout<<"Bicycle run……"<<endl;
				}
				void stop(){
						cout<<"Bicycle stop……"<<endl;
				}
};
class Motorcar : virtual public Vehicle{
		public:
				void run(){
						cout<<"Motorcar run……"<<endl;
				}
				void stop(){
						cout<<"Motorcar stop……"<<endl;
				}
};
class Motorcycle : public Bicycle,public Motorcar{
		public:
				void run(){
						cout<<"Motorcycle run……"<<endl;
				}
				void stop(){
						cout<<"Motorcycle stop……"<<endl;
				}
};
int main(){
		Vehicle a;
		Bicycle b;
		Motorcar c;
		Motorcycle m;
		a.run();
		a.stop();	
		b.run();
		b.stop();	
		c.run();
		c.stop();	
		m.run();
		m.stop();
		cout<<"vehicle类型的指针来调用几个对象的成员函数"<<endl;
		Vehicle *p1=&a;
		Vehicle *p2=&b;
		Vehicle *p3=&c;
		Vehicle *p4=&m;
		p1->run();
		p1->stop();
		p2->run();
		p2->stop();
		p3->run();
		p3->stop();
		p4->run();
		p4->stop();
		return 0;
}
