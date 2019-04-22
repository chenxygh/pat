/*
* @Author: cxy
* @Date:   2019-04-22 23:56:58
* @Last Modified by:   cxy
* @Last Modified time: 2019-04-23 00:59:09
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double r1 = 0.0, r2 = 0.0, p1 = 0.0, p2 = 0.0;
	scanf("%lf%lf%lf%lf", &r1, &p1, &r2, &p2);
	double r3 = r1 * r2;
	double p3 = p1 + p2;
	double a = r3 * cos(p3);
	double b = r3 * sin(p3);
	// 注意： 在对负数进行四舍五入的时候，符号会保留，-0.00
	// printf("%.2lf\n", -0.004);
	b = fabs(b) < 0.005? 0.00: b;
	a = fabs(a) < 0.005? 0.00: a;
	char sign = b < 0? '-': '+';
	printf("%.2lf%c%.2lfi", a, sign, fabs(b));

	return 0;
}
