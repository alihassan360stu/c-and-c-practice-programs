/*
	This is a quadratic equation solver,this program can be use to solve
	second-order polynomial equation with one variable "x"

	written by: Gonzales Cenelia
	website: www.ai-search.4t.com
*/


#include <iostream>
#include <cmath>

#define sqr(x) (x)*(x)
#define clrscr() system("cls");


int main()
{
intro:
	std::cout << "\t\t\tQUADRATIC EQUATION SOLVER\n\n";
	std::cout << "ENTER COEFFICIENTS:\n";
	float A, B, C, Delta;
	std::cout << "  A = ";
	std::cin >> A;
	std::cout << "  B = ";
	std::cin >> B;
	std::cout << "  C = ";
	std::cin >> C;
	std::cout << std::endl;
	if(A == 0 && B != 0)
	{
		std::cout << "THIS EQUATION IS A FIRST DEGREE EQUATION\n";
		std::cout << "THE SOLUTION IS: " << -C/B << std::endl;
	}
	else if(A == 0 && B == 0)
	{
		std::cout << "THIS EQUATION HAS NO SOLUTION";
	}
	else
	{
		Delta = sqr(B) - 4*A*C;
		if(Delta < 0)
		{
			std::cout << "THIS EQUATION DONT HAVE ANY REAL ROOTS";
		}
		else if(Delta == 0)
		{
			std::cout << "THIS EQUATION HAVE A SINGLE ROOT: " << -B/(2*A) << std::endl;
		}
		else
		{
			std::cout << "THIS EQUATION HAVE TWO REAL ROOTS" << std::endl;
			
			float X1 = (-B + sqrt(Delta)) / (2 * A);
			float X2 = (-B - sqrt(Delta)) / (2 * A);

			std::cout << "  X1 = " << X1 << std::endl;
			std::cout << "  X2 = " << X2 << std::endl;
		}
	}

	std::cout << "\nDO YOU WANT TO SOLVE ANOTHER EQUATION?\nYes(y) No(n): ";
	fflush(stdin); // flush input buffer
	int sel = tolower(getchar());
	while(sel != 'y' && sel != 'n')
	{
		std::cout << "\nWRONG SELECTION,PLEASE CHOOSE \"y\" FOR \"YES\" OR \"n\" FOR \"NO\": " << std::endl;
		fflush(stdin); // flush input buffer
		sel = tolower(getchar());
	}

	if(sel == 'y')
	{
		clrscr();
		goto intro;
	}

	std::cout << "\nTHANKS FOR USING THIS PROGRAM!" << std::endl;
	return 0;
}