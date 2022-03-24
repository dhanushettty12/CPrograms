/* 

comput the sin(x)/cos(x) using tjr talyor series apporixmation  compare your result with the built iin library. print both the result with approxite interference.

Expt: n07
name: dhanush 
rol l no: n07
 sin(x) = x-x^3/3!+x^5/5!-x^7/*7!+x^9/9! - .......
 cos(x) = 1-x^2/2!+x^4/4!-x^6/6!+x^8/8! - .......

*/


# include<stdio.h>
# include<math.h>
int main ()
{
	float x, degree;
	float sum;
  	float term,nume,deno;
	int i;
 
	printf("enter the degree:");
	scanf("%f",&degree);
	x= degree* (3.14157/180);

	 sum=0;
	 nume=x;
	 deno=1;
	 i=1;


  do
{
  	term= nume/deno;
	sum= sum + term;
	i=i+2;
	nume=-1*nume*x*x;
	deno= deno*(i-1)*i;
} 
	while(fabs(term)>=0.00001);


	printf("compute value of sin(%f)= %f\n",degree,sum );
	printf("value of the sin(%f) from the libarary function =%f\n",degree,sin(x));
	return 0;
}
 
