#include<iostream.h>
class Time{
		private:
				int hour,minute,second;
		public:
				Time(int a=0,int b=0,int c=0){
						hour=a;
						minute=b;
						second=c;
				}
				void set(){
						cout<<"请输入时间："<<endl;
						cout<<"请输入小时：";
						cin>>hour;
						if(hour<0||hour>23){
								cout<<"请重新输入小时：";
								cin>>hour;
						}
						cout<<"请输入分钟：";
						cin>>minute;
						if(minute<0||minute>=60){
								cout<<"请重新输入分钟：";
								cin>>minute;
						}
						cout<<"请输入秒：";
						cin>>second;
						if(second<0||second>=60){
								cout<<"请重新输入秒：";
								cin>>second;
						}
				}
				void show(){
						cout<<"现在时间："<<hour<<":"<<minute<<":"<<second<<endl;
				}
				int operator++();
				int operator--();
};
//重载++
int Time::operator++(){
		++second;
		if(second>59){
				minute=minute+1;
				second=1;
		}
		if(minute>59){
				hour=hour+1;
				minute=1;
		}
		if(hour>23){
				hour=1;
		}
		return second;
}
//重载--
int Time::operator--(){
		if(second<0){
				second=59;
				minute=minute-1;
		}else{
				--second;
		}
		if(minute<0){
				minute=59;
				hour=hour-1;
		}
		if(hour<0){
				hour=23;
		}
		return second;
}

int main(){
		char x;
		Time a;
		a.show();
		a.set();
		a.show();
		cout<<"加2秒"<<endl;
		++a;
		++a;
		a.show();
		cout<<"减1秒"<<endl;
		--a;
		a.show();
		/*cout<<"按1加一秒，按0减一秒，请选择：<1/0>：";
		  cin>>x;
		  cout<<x<<endl;
		  if(x){
		  ++a;
		  a.show();
		  }else{
		  --a;
		  a.show();
		  }
		//--a;
		//a.show();*/
		return 0;
}
