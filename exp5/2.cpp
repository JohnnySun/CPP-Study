lude<iostream.h>
class Matrix{
		public:
				Matrix();
				friend Matrix operator + (Matrix &,Matrix &);
				friend ostream& operator<<(ostream &,Matrix &);
				friend istream& operator>>(istream &,Matrix &);
		private:
				int mat[2][3];//定义数组
};
Matrix::Matrix(){//构造函数里对多维数组初始化
		for(int i=0;i<2;i++)
				for(int j=0;j<3;j++)
						mat[i][j]=0;//数组的初始化
}
Matrix operator + (Matrix &a,Matrix &b){
		Matrix c;
		for(int i=0;i<2;i++)
				for(int j=0;j<3;j++){
						c.mat[i][j]=a.mat[i][j]+b.mat[i][j];
				}
		return c;
}
istream &operator>>(istream & in,Matrix &m){
		cout<<"输入矩阵的值:"<<endl;
		for(int i=0;i<2;i++)
				for(int j=0;j<3;j++){
						in>>m.mat[i][j];
				}
		return in;
}
ostream &operator<<(ostream &out,Matrix &m){
		for(int i=0;i<2;i++)
				for(int j=0;j<3;j++){
						out<<m.mat[i][j]<<" ";
				}
		out<<endl;
		return out;
}
int main(){
		Matrix a,b,c;
		cin>>a;
		cin>>b;
		cout<<endl<<"Matrix a:"<<endl<<a<<endl;
		cout<<endl<<"Matrix b:"<<endl<<b<<endl;
		c=a+b;
		cout<<endl<<"两个矩阵相加：Matrix c=Matrix a+Matrix b:"<<endl<<c<<endl;
		return 0;

}
