#include<iostream>
#include<string>
using namespace std;
template <class T>
class SET {
		private:
				T elements[20];	
				int	N;	
		public:	
				SET(){
						T elements[]={1};
						N=(sizeof(elements)/sizeof(T));
				}
				SET(T data[], int n){
						for(int i=0;i<N;i++)
								elements[i]=data[i];
						N=n;
				}
				SET(SET &obj){
						for(int i=0;i<N;i++)
								elements[i]=obj.elements[i];
						N=obj.N;
				}
				~SET(){
						cout<<"destructor is called\n";
				}
				int hasElement(T one){  //判断元素one是否在集合中]
						int len=(sizeof(elements)/sizeof(T));//判断数组中元素个数
						for(int i=0;i<len;i++){
								if(one==elements[i]){
										return 1;
								}else{
										return 0;
								}
						}
						return 1;
				}
				void inputElement(T one){// 向集合中加入一个元素
						int len=(sizeof(elements)/sizeof(T));
						elements[len+1]=one;
				}
				void delElement(T one){// 从集合中删除一个元素
						int len=(sizeof(elements)/sizeof(T));
						for(int j=0;j<len;j++){
								if(one==elements[j])
										elements[j]=elements[j+1];
								len=len-1;
								break;
						}
				}
				void showAllElements(){//显示集合中的所有元素
						int len=(sizeof(elements)/sizeof(T));
						for(int m=0;m<len;m++)
								cout<<elements[m];
						cout<<endl;
				}
				// SET对象之间的运算：交、并、差，分别采用运算符重载实现
				SET operator+(const SET &obj){//求交集
						int a=0;
						SET temp;
						int len1=(sizeof(elements)/sizeof(T));
						int len2=(sizeof(obj.elements)/sizeof(obj.elements[0]));
						int len;
						if(len1<len2){
								len=len1;
						}else{
								len=len2;
						}
						for(int n=0;n<len;n++){
								if(elements[n]==obj.elements[n]){
										temp.elements[a]=elements[n];
										a++;
								}
						}
						return temp;
				}
				SET operator*(const SET &obj){//求并集（需补充）
						int a=0;
						SET temp;
						int len1=(sizeof(elements)/sizeof(T));
						int len2=(sizeof(obj.elements)/sizeof(obj.elements[0]));
						int len;
						if(len1<len2){
								len=len2;
								for(int i=0;i<len2;i++)
										temp.elements[i]=obj.elements[i];
								/*for(int b=0;b<len;b++)
								  for(int m=0,m<len1,m++)
								  if(elements[b]!=temp.elements[m]){
								  temp.elements[len]=elements[b];
								  len++;
								  }*/
						}else{
								len=len1;
								for(int j=0;j<len1;j++)
										temp.elements[j]=elements[j];
								/*for(int c=0;c<len,c++)
								  for(int n=0,n<len2,n++)
								  if(obj.elements[n]!=temp.elements[n]){
								  temp.elements[len]=elements[n];
								  len++;
								  }*/
						}
						return temp;
				}
				SET operator-(const SET &obj){//求差集（需补充）
						SET temp;
						int len1=(sizeof(elements)/sizeof(T));
						for(int i=0;i<len1;i++)
								temp.elements[i]=elements[i];
						return temp;
				}
				SET operator=(const SET &obj){
						SET temp;
						for(int i=0;i<N;i++)
								temp.elements[i]=obj.elements[i];
						N=obj.N;
						return temp;
				}
};

class STUDENT{
		public:
				long id;
				char name[10];
				char sex;
				int age;
		public:
				STUDENT(){
						id=1;
						strcpy(name,"james");
						sex='m';
						age=20;
				}
				STUDENT(const STUDENT& obj){
						id=obj.id;
						strcpy(name,obj.name);
						sex=obj.sex;
						age=obj.age;
				}
				STUDENT(long idd, char namee[], char sexx, int agee){
						id=idd;
						strcpy(name,namee);
						sex=sexx;
						age=agee;
				}
				~STUDENT(){
						cout<<"destructor is called\n";
				}

				int operator==(const STUDENT& obj){
						int a;
						if(id==obj.id){
								a=1;
						}else{
								a=0;
						}
						return a;
				}
				STUDENT operator=(const STUDENT& obj){
						id=obj.id;
						strcpy(name,obj.name);
						sex=obj.sex;
						age=obj.age;
				}
				// 定义友元函数
				friend ostream& operator<<(ostream& stream, const STUDENT& obj);
};	
ostream& operator<<(ostream& stream,STUDENT& obj){
		stream<<"学号："<<obj.id<<endl;
		stream<<"姓名："<<obj.name<<endl;
		stream<<"性别："<<obj.sex<<endl;
		stream<<"年龄："<<obj.age<<endl;
		return stream;
}
void main(){
		/*int a[]={1,2,3,4,5};
		  cout<<sizeof(a)/sizeof(a[0]);
		  cout<<endl;
		  int t[]={1,2,3,4,5};
		  int b[]={3,4,5,6,7};
		  int c[]={0};
		  SET<int> array1;
		  SET<int> array2(t,5);
		  SET<int> array3(b,5);
		  array2.hasElement(4);
		  array2.inputElement(6);
		  array2.showAllElements();
		  array2.delElement(6);
		  array2.showAllElements();
		  array1=array2+array3;
		  array1.showAllElements();
		  array1=array2*array3;
		  array1.showAllElements();
		  array1=array2-array3;
		  array1.showAllElements();*/
		STUDENT stud1(1,"andy",'m',20);
		cout<<stud1;
		STUDENT stud2(2,"jordon",'m',20);
		cout<<stud2;
		if(stud1==stud2){
				cout<<"学号相同\n";
		}else{
				cout<<"学号不同\n";
		}

}
