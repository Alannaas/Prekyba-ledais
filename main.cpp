#include <iostream>
#include <fstream>
using namespace std;
int main()
{

                  	int n,          	//n - kelias dienas buvo prekiauta ledais
                                       	m,              	//m - keliomis porcijomis kiekvienà kità dienà buvo parduodama daugiau
                                       	k,               	//k - kiek pirmàjà prekybos dienà parduota porcijø
                                       	sum=0;      	//sum - suma

                  	ifstream fd("Duomenys.txt");                	//fd - failo duomenys
                  	fd >> k;
                  	fd >> m;
                  	fd >> n;

                  	while (n != 0)
                  	{
                                       	sum += k;
                                       	k += m;
                                       	n--;
                  	}

                  	ofstream fr("Rezultatai.txt");                	//fr - failo rezultatai

                  	fr << sum;

}
