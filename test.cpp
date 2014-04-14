|| ./test.cpp: In function ‘int man()’:
./test.cpp|9 col 5| error: incompatible types in assignment of ‘int*’ to ‘int [1]’
||    d = test_init();
||      ^
|| ./test.cpp: In function ‘int* test_init(int, int)’:
./test.cpp|15 col 6| warning: address of local variable ‘c’ returned [-Wreturn-local-addr]
||   int c[1];
||       ^
