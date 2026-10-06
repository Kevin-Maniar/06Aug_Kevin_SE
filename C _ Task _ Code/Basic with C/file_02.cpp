// Writing in file

#include<stdio.h>
int main()
{
	FILE  *ob;
	ob = fopen("temp.text","w");
	fprintf(ob,"Good Morning"); // write in file 
}
