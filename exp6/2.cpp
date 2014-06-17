#include<iostream>
#include<string>
using namespace std;
template <class TYPE>
void bubble(TYPE A[],int len){
		int i,j,t;
		for(j=0;j<len;j++)
				for(i=0;i<len-1-j;i++)
						if(A[i]>A[i+1])
						{
								t=A[i];
								A[i]=A[i+1];
								A[i+1]=t;
						}
		for(i=0;i<len;i++)
				cout<<A[i]<<" ";
		cout<<endl;
}
void bubble(char*Strs[],int len){
		char *max_Strs;
		max_Strs=Strs[0];
		for(int i=1;i<len;i++) {
				if(*Strs[i]>*max_Strs){
						*max_Strs=*Strs[i];
				}
		} 
}
class STUDENT{
		private:
				int num;
				string name;
				int age;
		public:
				STUDENT(int n,string NAME,int a){
						num=n;
						name=NAME;
						age=a;
				}
				bool operator <(const STUDENT &s){
						if(num<s.num)
								return true;
				}
				bool operator >(const STUDENT &s){
						if(num<s.num)
								return true;
				}
};
void main(){
		int a[]={3,6,8,9,4,2,1,7,5,6};
		char b[20];
		STUDENT s1(1,"jack",20);
		STUDENT s2(2,"tom",20);
		strcpy(b,"asdfghjkle");
		bubble(a,10);
		bubble(b,10);
		if(s1<s2)
				cout<<"s1的学号小于s2"<<endl;
}
