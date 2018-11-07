#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;
#define   N   81
void fun(char  *s) {
	//Ğ´ÈëÄãµÄ´úÂë
	int len = strlen(s);
	char str[N];
	for (int i = 0; i < len; i++) {
		str[i] = *(s + len - 1 - i);
	}
	str[len] = '\0';
	strcpy_s(s,len+1,str);
}
void  main(void) {
	char   a[N];
	printf("Enter  a  string :  ");
	cin >> a;
	printf("The original string is :  "); 
	puts(a);
	fun(a);
	printf("\n");
	printf("The string after modified :  ");
	puts(a);
}
