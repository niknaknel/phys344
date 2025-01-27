
#define IA 16807
#define IM 2147483647
#define AM (1.0/IM)
#define IQ 127773
#define IR 2836
#define MASK 123459876

double double_ran0(long *idum)
{
	long k;
	double ans;

	*idum ^= MASK;
	k=(*idum)/IQ;
	*idum=IA*(*idum-k*IQ)-IR*k;
	if (*idum < 0) *idum += IM;
	ans=AM*((double) *idum);
	*idum ^= MASK;
	return ans;
}

#undef IA
#undef IM
#undef AM
#undef IQ
#undef IR
#undef MASK

