#include<iostream.h>
#include<fstream.h>
struct Book{
		long id;//id
		char name[30];//书名
		char publisher[30];//出版社
		char author[20];//作者
};	

void addBookInfo(Book dBook[4]){// 向文件book.dat中添加新的一条书的信息
		//Book aBook[4]={2001, "Star", "yahoo", "Li Ming"};
		ofstream add("book.dat",ios::binary|ios::app);
		if(!add){
				cout<<"cannot open output file.\n";
				//abort();
		}
		for(int i=0;i<4;i++)
				add.write((char *) &dBook[i],sizeof(dBook[i]));//向Book传递参数
		add<<endl;
		add.close(); 
}

void selectBook(){//从文件book.dat中读出书名为namee的所有书的记录
		Book dBook[4];
		ifstream select("book.dat",ios::binary);
		if(!select){
				cout<<"cannot open book.dat!\n";
				//abort();
		}
		for(int i=0;i<3;i++){
				select.read((char *) &dBook[i],sizeof(dBook[i]));
				//if(dBook[i].name==namee)
				cout<<dBook[i].id<<" "<<dBook[i].name<<" "<<dBook[i].publisher<<" "<<dBook[i].author<<endl;
		}
		select.close();
}

/*
   list list2[2];
   ifstream in("f4.dat",ios::binary);

   if(!in){
   cout<<"cannot open input file.\n";
   abort();
   }
   for(int i=0;i<2;i++){
   in.read((char *) &list2[i],sizeof(list2[i]));//read写入内存
   cout<<list2[i].course<<" "<<list2[i].score<<endl;
   }
   in.close();
 */

void main(){
		Book aBook[4]={2001, "Star", "yahoo", "Li Ming"};
		//Book bBook[4]={2002, "Boold", "Sina", "Tom Berry"};
		//Book cBook[4]={2003, "Star", "google", "Li Ming"};
		addBookInfo(aBook);//添加图书信息
		//addBookInfo(bBook);//添加图书信息
		//addBookInfo(cBook);//添加图书信息
		selectBook();//选择图书
}
