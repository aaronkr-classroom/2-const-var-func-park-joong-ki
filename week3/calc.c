#include <stdio.h>
#include <math.h> //M_PI는 여기에 있어야 하지만 없으면
#include "calc.h" //우리 만든 .h 파일이 include 할 때
				 //큰 따움표를 사용해야 됨




int main(void) {
	double x = 2, y = 0, result = 0;

	//더하기
	result = sum(x, y);
	printf("x: %.1f + y: %.1f = %.1f\n", x, y, result);

	//빼기
	result = sub(x, y);
	printf("x: %.1f - y: %.1f = %.1f\n", x, y, result);

	//곱하기
	result = mul(x, y);
	printf("x: %.1f * y: %.1f = %.1f\n", x, y, result);

	//나누기
	result = div(x, y);
	printf("x: %.1f / y: %.1f = %.6f\n", x, y, result);

	
	//나머지
	result = rem(x, y);
	printf("x: %d %% y: %d = %d\n", x, y, result);

	(int)x, (int)y, rem(((int)x), ((int)y));
	
	//추가 부분
	printf("x: %.1f^y: %.1f=%.1f\n",x,y,power(x,y));
	printf("sqrt of x: %.1f = %.1f\n",x,squareRoot(x));
	printf("area of x: %.1f = %.1f\n",x,area0fCircle(x));
	printf("circ of x: %.1f = %.1f\n",x,circumference0fCircle(x));

	return 0;
}


//더하기
double sum(double value1, double value2) {
	return value1 + value2;

}

//빼기
double sub(double value1, double value2) {
	return value1 - value2;

}

// 곱하기
double mul(double value1, double value2) {
	return value1 * value2;

}

//나누기
double div(double value1, double value2) {
	if(value2 != 0) return value1 / value2;
	else {
		printf("Error");
		return 0;
	}

}

//나머지
int rem(int value1, int value2) {
	if(value2 !=0) return value1 % value2;
	else {
		printf("Error");
		return 0;
	}
}

//제곱
double power(double base, double exponent) {
	return pow(base, exponent); //pow() 함수??
}

//제곱근
double squareRoot(double num) {
	if(num >= 0)
		return sqrt(num); //math.h에서 있는 sqrt()함수
	else {
		printf("Error:");
		return -1;
	}
}

//
double area0fCircle(double radius) {
	return M_PI * radius * radius;
}

//
double circumference0fCircle(double radius) {
	return 2 * M_PI * radius;
}