#define _CRT_SECURE_NO_WARNINGS

/*
1.��дһ���������� / �� / �꣨��mm / dd / yy���ĸ�ʽ�����û������������Ϣ�����������գ���
yyyymmdd���ĸ�ʽ������ʾ������
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
2. ��дһ�����򣬶��û�����Ĳ�Ʒ��Ϣ���и�ʽ��������ỰӦ��������������
Enter item number : 583
Enter unit price : 13.5
Enter purchase date(mm / dd / yyyy) : 10 / 24 / 2010
Item Unit Purchase
Price Date
583 $ 13.50 10 / 24 / 2010
���У���Ʒ��ź��������������뷽ʽ����λ�۸�����Ҷ��뷽ʽ��������Ԫ������ȡֵΪ
9999.99����ʾ��������ʹ���Ʊ�����ơ�
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
3. ͼ���ù��ʱ�׼��ţ�ISBN�����б�ʶ��2007 ��1 ��1 ��֮������ISBN ����13 λ���֣��ɵ�ISBN
ʹ��10 λ���֣�����Ϊ5 �飬��978-0-393-97950-3����һ�飨GS1 ǰ׺��ĿǰΪ978 ��979���ڶ�
�飨���ʶ��ָ�����Ի���ԭ���������������0 ��1 ���ڽ�Ӣ��Ĺ��ң��������飨�����̱�ţ�
��ʾ�����̣�393 ��W. W. Norton ������ı�ţ��������飨��Ʒ��ţ����ɳ����̷��������ʶ��
������һ����ı�ţ�97950����ISBN ��ĩβ��һ��У�����֣�������֤ǰ�����ֵ�׼ȷ�ԡ���дһ
���������ֽ��û������ISBN ��Ϣ��
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
4.��дһ��������ʾ�û���(xxx) xxx-xxxx �ĸ�ʽ����绰���룬����xxx.xxx.xxxx �ĸ�ʽ��ʾ��
���룺
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
5. ��дһ������Ҫ���û����������������1~16 ������������Ȼ����4��4 �������ʽ��������ʾ
�������ټ����ÿ�С�ÿ�к�ÿ���Խ����ϵĺͣ�
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
�޸�3.2 �ڵ�addfrac.c ����ʹ�û�����ͬʱ���������������м��üӺŸ�����
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