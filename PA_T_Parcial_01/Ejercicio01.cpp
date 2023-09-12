#include "Ejercicio01.h"

char Ejercicio01::lower(char c)
{
	string sinespa(string pa) {
		string palsin;
		string palre;
		string palsin 2;
		int con = 0
			for (int i = 0; i < pa.lenght();i++) {
				if (pa[i] != ' ') {
					palsin += pa[i];
				}
				else {
					palsin2 += palsin;
				}

				for (int x = palsin2.size() - 1;x >= 0;x--) {
					palre += palsin2[x];
				}
				if (palre == palsin2) {
					con++
				}
				palsin = "";
				palsin2 = "";
				palre = "";
			}
    }
	cout << "La palabra es palíndroma son: " << con << endl;
	return palsin;
}
