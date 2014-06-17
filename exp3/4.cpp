#include<iostream>
#include<string>
using namespace std;

class Base{//单价、产地、库存量
		protected:
				float price;
				string place;
				int count;
				//int add_cnt;
				//int del_cnt;
		public:
				Base(float price1,string place1,int count1){
						price=price1;
						place=place1;
						count=count1;
				}
				void in_something(int add_cnt1){//增加库存量
						count=count+add_cnt1;
				}
				void out_something(int del_cnt1){//减少库存量
						count=count-del_cnt1;
				}
				double total_price(){//总价格
						return  price*count;
				}
				void print(){
						cout<<"价格："<<price<<endl;
						cout<<"产地："<<place<<endl;
						cout<<"现在库存量："<<count<<endl;
				}
};

class Shirt:virtual public Base{//增加"布料"		衬衣：单价、产地、库存量、布料；
		protected:
				string material;
		public:
				Shirt(float price1,string place1,int count1,string material1):Base(price1,place1,count1){
						material=material1;
				}
				void print(){
						Base::print();
						cout<<"布料："<<material<<endl;
				}
};

class Wardrobe:public Base{//立柜：单价、产地、库存量、木料、颜色
		protected:
				string stuff;
				string color;
		public:
				Wardrobe(float price1,string place1,int count1,string stuff1,string color1):Base(price1,place1,count1){
						stuff=stuff1;
						color=color1;
				}
				void print(){
						Base::print();
						cout<<"木料："<<stuff<<endl;
						cout<<"颜色："<<color<<endl;
				}
};

class Cap:public Shirt{//帽子：单价、产地、库存量、布料、样式（平顶或尖顶）；后面如果有子类，必须声明为虚基类
		private:
				string style;
		public:
				Cap(float price1,string place1,int count1,string material1,string style1):Base(price1,place1,count1),Shirt(price1,place1,count1,material1){
						style=style1;
				}
				void print(){
						Shirt::print();
						cout<<"样式："<<style<<endl;
				}
};

int main(){
		Shirt shirt(50,"衬衣出产地",100,"棉布");//衬衣：单价、产地、库存量、布料；
		cout<<"衬衣："<<endl;
		shirt.print();
		shirt.in_something(20);
		cout<<"衬衣加库存20"<<endl;
		shirt.print();
		Wardrobe wardrobe(100,"立柜出产地",50,"杉木","黄色");//	立柜：单价、产地、库存量、木料、颜色
		cout<<"立柜： "<<endl;
		wardrobe.print();
		wardrobe.out_something(10);
		cout<<"立柜减库存10"<<endl;
		wardrobe.print();
		Cap cap(10,"帽子出产地",200,"涤纶","平顶");		//帽子：单价、产地、库存量、布料、样式（平顶或尖顶
		cout<<"帽子："<<endl;
		cap.print();
		cout<<"帽子总价："<<cap.total_price()<<endl;

		return 0;
}
