#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	
	std::string Nome;
    double Salario, TotalVendas, SalarioTotal;
    
    cin >> Nome >> Salario >> TotalVendas;
   
	SalarioTotal = Salario + (TotalVendas * 0.15);
       
    cout << "TOTAL = R$ " << fixed << setprecision(2) << SalarioTotal << endl;
    return 0;
}