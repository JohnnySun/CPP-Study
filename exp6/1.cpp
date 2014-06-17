#include<iostream.h>
#include<string.h>
template <class TYPE>
TYPE max_of_array(TYPE A[],int len){//数组中的最大值
		TYPE max;
		max=A[0];
		for(int i=1;i<len;i++){
				if(A[i]>max)
						max=A[i];
		}
		return max;
}
char *max_of_array(char*Strs[],int len){//最大的字符串
		char *max_Strs;
		max_Strs=Strs[0];
		for(int i=1;i<len;i++) {
				if(*Strs[i]>*max_Strs){
						*max_Strs=*Strs[i];
				}
				//cout<<*Strs++<<endl;  
		}  

		return max_Strs;
}
int compare_string(char *s,char *t){//字符串比较;
		int a,leng;
		int leng1=strlen(s);
		int leng2=strlen(t);
		if(leng1<leng2){
				leng=leng1;
		}else{
				leng=leng2;
		}
		if(s<t){
				a=-1;
		}else if(s>t){
				a=1;
		}else {
				if(leng1>leng2){
						a=1;
				}else if(leng1<leng2){
						a=-1;
				}
		}
		return a;
}
void main(){
		char *t[]={"abc","cde","fgh"}; 
		int c;
		char *m="hello";
		char *n="world";
		int max_int,max_char;
		int a[]={4,7,5,8,3};
		char b[]={'s','f','g','r','q'};
		max_int=max_of_array(a,5);
		cout<<max_int<<endl;
		c=compare_string(m,n);
		cout<<c<<endl;
}
