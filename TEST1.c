#define _CRT_SECURE_NO_WARNINGS

/*
1.编写一个程序，以月 / 日 / 年（即mm / dd / yy）的格式接受用户输入的日期信息，并以年月日（即
yyyymmdd）的格式将其显示出来：
Enter a date(mm / dd / yyyy) : 2 / 17 / 2011
You entered the date 20110217
*/
//#include <stdio.h>
//int main()
//{
//	int mm, dd, yy;
//	printf("Enter a date(mm / dd / yyyy) :");
//	scanf("%d/%d/%d", &mm, &dd, &yy);
//	if (mm < 10&&dd< 10)
//	{
//		printf("You entered the date:%d0%d0%d", yy, mm, dd);
//	}
//	else if(mm < 10&& dd > 9)
//	{
//		printf("You entered the date:%d0%d%d", yy, mm, dd);
//	}
//	else if (dd < 10 &&mm>9)
//	{
//		printf("You entered the date:%d%d0%d", yy, mm, dd);
//	}
//	else 
//	{
//		printf("You entered the date:%d%d%d", yy, mm, dd);
//	}
//	return 0;
//}


/*
2. 编写一个程序，对用户输入的产品信息进行格式化。程序会话应类似下面这样：
Enter item number : 583
Enter unit price : 13.5
Enter purchase date(mm / dd / yyyy) : 10 / 24 / 2010
Item Unit Purchase
Price Date
583 $ 13.50 10 / 24 / 2010
其中，产品编号和日期项采用左对齐方式，单位价格采用右对齐方式，允许美元金额最大取值为
9999.99。提示：各个列使用制表符控制。
*/

//#include <stdio.h>
//int main()
//{
//	int item, mm, dd, yy;
//	float price;
//	printf("Enter item number :");
//	scanf("%d", &item);
//	printf("Enter unit price : ");
//	scanf("%f", &price);
//	if (price > 9999) 
//	{
//		printf("error");
//	}
//	printf("Enter purchase date(mm / dd / yyyy) :");
//	scanf("%d/%d/%d", &mm,&dd,&yy);
//	printf("item\tunit\tpurchase\n     \tprice \tdate\t\n%-d\t$%-.2f\t%d/%d/%d", item, price, mm, dd, yy);
//	return 0;
//}

/*
3. 图书用国际标准书号（ISBN）进行标识。2007 年1 月1 日之后分配的ISBN 包含13 位数字（旧的ISBN
使用10 位数字），分为5 组，如978-0-393-97950-3。第一组（GS1 前缀）目前为978 或979。第二
组（组标识）指明语言或者原出版国及地区（如0 和1 用于讲英语的国家）。第三组（出版商编号）
表示出版商（393 是W. W. Norton 出版社的编号）。第四组（产品编号）是由出版商分配的用于识别
具体哪一本书的编号（97950）。ISBN 的末尾是一个校验数字，用于验证前面数字的准确性。编写一
个程序来分解用户输入的ISBN 信息：
Enter ISBN: 978-0-393-97950-3
GS1 prefix: 978
Group identifier: 0
Publisher code: 393
Item number: 97950
Check digit: 3

*/

//#include <stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	printf("Enter ISBN:");
//	scanf("%d-%d-%d-%d-%d", &a, &b, &c, &d, &e);
//	printf("GS1 prefix:%d\nGroup identifier:%d\nPublisher code: %d\nItem number:%d\nCheck digit:%d",a,b,c,d,e);
//
//
//
//	return 0;
//}




/*
4.编写一个程序，提示用户以(xxx) xxx-xxxx 的格式输入电话号码，并以xxx.xxx.xxxx 的格式显示该
号码：
Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900

*/

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	printf("Enter phone number [(xxx) xxx-xxxx]:\n");
//	scanf("(%d)%d-%d", &a, &b, &c);
//	printf("You entered %d.%d.%d",a,b,c);
//	return 0;
//
//}


/*
5. 编写一个程序，要求用户（按任意次序）输入1~16 的所有整数，然后用4×4 矩阵的形式将它们显示
出来，再计算出每行、每列和每条对角线上的和：
Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1
Row sums: 34 34 34 34
Column sums: 34 34 34 34
Diagonal sums: 34 34

*/

//#include <stdio.h>
//int main()
//{
//	int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16;
//	printf("Enter the numbers from 1 to 16 in any order:\n");
//	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16);
//	printf("%2d %2d %2d %2d\n%2d %2d %2d %2d%\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
//	printf("Row sums :%d %d %d %d\nColumn sums : % d % d % d % d\nDiagonal sums : %d %d", (a1 + a2 + a3 + a4), (a5 + a6 + a7 + a8), (a9 + a10 + a11 + a12), (a13 + a14 + a15 + a16), (a1 + a5 + a9 + a13), (a2 + a6 + a10 + a14), (a3 + a7 + a11 + a15), (a4 + a8 + a12 + a16), (a1 + a6 + a11 + a16), (a4 + a7 + a10 + a13));
//
//	return 0;
//}


/*
6.
修改3.2 节的addfrac.c 程序，使用户可以同时输入两个分数，中间用加号隔开：
Enter two fractions separated by a plus sign: 5/6+3/4
The sum is 38/24

*/

/* Adds two fractions */
//#include <stdio.h>
//int main(void)
//{
//	int num1, denom1, num2, denom2, result_num, result_denom;
//	printf("Enter first and second fraction: ");
//	scanf("%d/%d,%d/%d",&num1, &denom1, &num2, &denom2);
//	result_num = num1 * denom2 + num2 * denom1;
//	result_denom = denom1 * denom2;
//	printf("The sum is %d/%d\n", result_num, result_denom);
//	return 0;
//}