#include <iostream>
#include "complex.h"

int main() {
	FILE *file;
	int length , position;
	file = fopen("complex.txt", "r");
	if (file == NULL) {
		std::cout << "cannot find file" << std::endl;
	}
	else {
		fscanf(file, "%d", &length);
		Complex *arr = new Complex[length];
		Complex max;
		max.setComplex(0, 0);
		for (int i = 0; i < length; i++)
		{
			fscanf(file, "%lf %lf", &arr[i].real, &arr[i].imag);
			if (arr[i].getAbs() > max.getAbs())
			{
				max.setComplex(arr[i].real, arr[i].imag);
			}
		}

		max.printComplex();
		fclose(file);
	}
	return 0;
}