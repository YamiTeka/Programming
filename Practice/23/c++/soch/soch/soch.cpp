
#include "soch.h" 
#include "fact.h" 

int Soch(int k, int n)
{
	int c = 0;
	c = Fac(n) / (Fac(k) * Fac(n - k));
	return c;
}