#include <iostream>
#include <string>

using namespace std;

typedef struct mystr {
		string str[5];
};

int main(void)
{
		mystr *str1 = new mystr;
		int i;
		for(i = 0; i < 5; i++) {
				cin >> str1->str[i];
		}

		for(i = 4; i >= 0; i--) {
				cout << str1->str[i] << " ";
		}
}

