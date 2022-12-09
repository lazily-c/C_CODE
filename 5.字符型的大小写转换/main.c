#include <stdio.h>

int main()
{
	char c = 'a';//现在是小写字母a，要变为大写字母A
	c = c - 32;
	printf("%c\n", c);//以字符形式来输出c
	char d = 'A';//现在是小写字母A，要变为大写字母a
	d = d + 32;
	printf("%c\n", d);//以字符形式来输出d
}