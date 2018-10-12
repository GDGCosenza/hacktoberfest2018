#include <iostream>
int main ()
{
	std::cout << "HELLO WORLD!"<< std::endl;
	const int n = 6;
	char *a = new char[n]; 
	char *p = a;
	int i = 1;
	while ( p < a+n )
	{
		*p = 'z'-i;
		p++;
		i++; }
	char* q =a;
	p--;
	while(p > q)
	std::cout << *(q++)<<" "<<*(p--)<<std::endl;
	delete []a;
	return 0;
}
