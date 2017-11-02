// lab20_ver1.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;
//Определить количество чисел последовательности (2n-1)^2/n, попадающих в интервал [k,m], где k, m- вещественные числа. n>0.
void main()
{
	double k, m, l;                                         //l=member of sequence
	int count = 0;
	cout << "Please, input k and m" << endl;                  
	cin >> k >> m;
	cout << "k=" << k << ", m=" << m << ".";
	for (int n = 1; n <= m; n++)
	{
		l = (2 * n - 1)*(2 * n - 1) / n;                      //counting members from n=0 to n=m   
		if ((l >= k) && (l <= m)) count++;                    // counts number of members between k and m 
	}
	cout << "\nThere're " << count << " members of sequence between k and m\n" << endl;
	system("pause");
}