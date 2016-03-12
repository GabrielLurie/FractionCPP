
#include "Rational.h"
#include <stdio.h>
Rational::Rational(int n){
	numerator=n;
	denominator=1;
}

Rational::Rational(int n, int d) {
	

	numerator=n;
	denominator=d;
}

		void Rational::print(){
			if(numerator%denominator==0) printf("\n\n%d\n\n",numerator/denominator);
			else if(numerator==0) printf("\n\n0\n\n");

			else if(denominator==1)
				printf("\n%d\n",numerator);
			else if(numerator<0)
				printf("\n%d\n -\n %d\n",numerator,denominator);
			else
			printf("\n%d\n-\n\%d\n",numerator,denominator);
			
		}

		
		Rational Rational::divided(){
			if(numerator==0) return Rational(0,1);
			int n=numerator;
			int d=denominator;
			int t= (n<d?n:d);
			//printf("%d hiii:   ",t);
			if(numerator>0)
	for(int i=t;i>=2;i--)
		if(n%i==0 && d%i==0) { 
			n=n/i;
		d=d/i;
		}

			if(numerator<0)
	for(int i=(-1*t);i>=2;i--)
		if(n%i==0 && d%i==0) { 
			n=n/i;
		d=d/i;
		}

		return Rational(n,d);
		}
		int main(){
			
			Rational r1(-1,2);
			Rational r2(1,4);
			Rational r3=r2-r1;
			r3.divided().print();

			Rational r4(1,2);
			Rational r5(-1,4);
			Rational r6=r4-r5;
			r6.divided().print();
			
			r6=r5/r4;
			r6.divided().print();

		      Rational r7(0,10);
			  r7.print();
			  r7.divided().print();

			  r6=r4*r5;
			  r6.print();
			  printf("%f  " ,r6.getFloatValue());
   //         r3=r2-r1;
			//r3.print();
			//r3=r1/r2;
			//r3.print();
			getchar();

		}

