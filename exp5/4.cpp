#include<fstream>
#include<iostream>
using namespace std;
int main()
{
		int i,t,j;
		int a[10];
		int b[21];
		ofstream outfile1("f1.dat",ios::out);
		cout<<"请输入要存入f1中的10个整型变量"<<endl;
		for(i = 0;i < 10;i++)
		{
				cin>>a[i];
				outfile1<<a[i]<<" ";
		}
		outfile1.close();
		ofstream outfile2("f2.dat",ios::out);
		cout<<"请输入要存入f2中的10个整型变量"<<endl;
		for(i = 0;i < 10;i++)
		{
				cin>>a[i];
				outfile2<<a[i]<<" ";
		}
		outfile2.close();
		ifstream infile1("f1.dat",ios::in);
		for(i = 0;i < 10;i++)
		{
				infile1>>a[i];
		}
		infile1.close();
		ofstream outfile3("f2.dat",ios::app);
		for(i = 0;i < 10;i++)
		{
				outfile3<<a[i]<<" ";
		}
		outfile3.close();
		ifstream infile2("f2.dat",ios::in);
		for(i = 0;i < 20;i++)
		{
				infile2>>b[i];
		}
		infile2.close();
		for(j = 0;j < 19;j++)
				for(i = 0;i < 19-j;i++)
						if(b[i] > b[i+1])
						{
								t = b[i];
								b[i] = b[i+1];
								b[i+1] = t;
						}
		ofstream outfile4("f2.dat",ios::out);
		for(i = 0;i < 20;i++)
		{
				outfile4<<b[i]<<" ";
		}
		outfile4.close();
		ifstream infile3("f2.dat",ios::in);
		cout<<"f2中数据为:"<<endl;
		for(i = 0;i < 20;i++)
		{
				infile3>>b[i];
				cout<<'\t'<<b[i];
		}
		infile3.close();
		return 0;
}
