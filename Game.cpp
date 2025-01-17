#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

void printg(char x[][600])
{
	int i, k;
	system("cls");
	for (i = 0; i < 40; i++)
	{
		for (k = 0; k < 150; k++)
		{
			cout << x[i][k];
		}
		cout << endl;
	}
}
void print(char x[][600], int &c)
{
	int s, e;
	int ct = 0;
	char t = 186, t1 = 201, t2 = 200, t3 = 187, t4 = 188;
	if (c < 50)
	{
		s = 0, e = 150;
	}
	else if (c > 500)
	{
		s = 450, e = 600;
	}
	else {
		s = c - 50;
		e = c + 99;
	}
	system("cls");
	for (int i = 0; i < 40; i++)
	{
		if (i == 0)
		{
			cout << t1;

		}
		else if (i ==39)
		{
			cout << t2;
		}
		else {
			cout << t;
		}
		for (int k = s+1; k < e+2; k++)
		{
			cout << x[i][k];
		}
		if (i == 0)
		{
			cout << t3;
		}
		else if (i == 39 )
		{
			cout << t4;
			
		}
		else {
			cout << t;
		}
		cout << endl;
	}
	cout.flush();
}
void draw_map(char x[][600], int r, int c)
{
	int i, k;
	
	for (i = 1; i < 39; i++)
	{
		x[i][0] = 186;
	}
	
	for (i = 1; i < 599; i++)
	{
		x[39][i] = 205;
	}
	for (i = 1; i < 599; i++)
	{
		x[0][i] = 205;
	}
	
	for (i = 1; i < 39; i++)
	{
		x[i][599] = 186;
	}
	


	// // // // // // // // // // //

	//fire
	x[38][34] = '/';
	x[38][35] = 92;
	x[38][36] = '/';
	x[38][37] = 92;
	x[38][38] = '/';
	x[38][39] = 92;
	x[38][40] = '/';
	x[38][41] = 92;
	x[38][42] = '/';
	x[38][43] = 92;
	x[38][44] = '/';
	x[38][45] = 92;
	x[38][46] = '/';
	x[38][47] = 92;
	x[38][48] = '/';
	x[38][49] = 92;
	x[38][50] = '/';
	x[38][51] = 92;
	x[38][52] = '/';
	x[38][53] = 92;
	x[38][54] = '/';
	x[38][55] = 92;
	x[38][56] = '/';
	x[38][57] = 92;
	x[38][58] = '/';
	x[38][59] = 92;
	x[38][60] = '/';
	x[38][61] = 92;
	x[38][62] = '/';
	x[38][63] = 92;
	x[38][64] = '/';
	x[38][65] = 92;
	x[38][66] = '/';
	x[38][67] = 92;
	x[38][68] = '/';
	x[38][69] = 92;
	x[38][70] = '/';
	x[38][71] = 92;
	x[38][72] = '/';
	x[38][73] = 92;
	x[38][74] = '/';
	x[38][75] = 92;
	x[38][76] = '/';
	x[38][77] = 92;
	x[38][78] = '/';
	x[38][79] = 92;
	x[38][80] = '/';
	x[38][81] = 92;
	


	//STAIRS
	c = 180;
	x[r + 38][c + 30] = 219;
	x[r + 37][c + 30] = 219;
	for (int i = c + 31; i <= c + 150; i++)
	{
		x[r + 38][i] = 220;
	}
	//
	x[r + 37][c + 30] = 219;
	for (int i = c + 31; i <= c + 50; i++)
	{
		x[r + 37][i] = 223;
	}
	//
	x[r + 36][c + 50] = 219;
	x[r + 35][c + 50] = 220;
	for (int i = c + 51; i <= c + 71; i++)
	{
		x[r + 35][i] = 220;
	}
	x[r + 35][c + 72] = 219;
	//
	x[r + 34][c + 72] = 219;
	for (int i = c + 73; i <= c + 96; i++)
	{
		x[r + 34][i] = 223;
	}
	//
	x[r + 33][c + 96] = 219;
	//
	x[r + 32][c + 96] = 220;
	for (int i = c + 96; i <= c + 119; i++)
	{
		x[r + 32][i] = 220;
	}
	//
	x[r + 32][c + 120] = 219;
	x[r + 31][c + 120] = 219;
	for (int i = c + 121; i <= c + 150; i++)
	{
		x[r + 31][i] = 223;
	}
	x[r + 32][c + 150] = 219;
	x[r + 31][c + 150] = 219;
	x[r + 33][c + 150] = 219;
	x[r + 34][c + 150] = 219;
	x[r + 35][c + 150] = 219;
	x[r + 36][c + 150] = 219;
	x[r + 37][c + 150] = 219;
	x[r + 38][c + 150] = 219;
	



	//ladder
	r = 26, c = 508;
	x[r][c] = 186;
	x[r][c + 8] = 186;

	x[r + 1][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 1][i] = 205;
	}
	x[r + 1][c + 8] = 185;

	x[r + 2][c] = 186;
	x[r + 2][c + 8] = 186;

	x[r + 3][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 3][i] = 205;
	}
	x[r + 3][c + 8] = 185;

	x[r + 4][c] = 186;
	x[r + 4][c + 8] = 186;

	x[r + 5][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 5][i] = 205;
	}
	x[r + 5][c + 8] = 185;

	x[r + 6][c] = 186;
	x[r + 6][c + 8] = 186;

	x[r + 7][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 7][i] = 205;
	}
	x[r + 7][c + 8] = 185;

	x[r + 8][c] = 186;
	x[r + 8][c + 8] = 186;

	x[r + 9][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 9][i] = 205;
	}
	x[r + 9][c + 8] = 185;

	x[r + 10][c] = 186;
	x[r + 10][c + 8] = 186;

	x[r + 11][c] = 204;
	for (int i = c + 1; i < c + 8; i++)
	{
		x[r + 11][i] = 205;
	}
	x[r + 11][c + 8] = 185;

	x[r + 12][c] = 186;
	x[r + 12][c + 8] = 186;
}
void draw_fire_elevator(char x[][600], int r, int &c)
{
	x[r][c] = 220;
	x[r][c+1] = 220;
	x[r][c + 1] = 220;
	x[r][c + 2] = 220;
	x[r][c + 3] = 220;
	x[r][c + 4] = 220;
	x[r][c + 5] = 220;
	x[r][c + 6] = 220;
	x[r][c + 7] = 220;
	x[r][c + 8] = 220;
	x[r][c + 9] = 220;
	x[r][c + 10] = 220;
	x[r][c + 11] = 220;
	x[r][c + 12] = 220;
	x[r][c + 13] = 220;
	x[r][c + 14] = 220;
	x[r][c + 15] = 220;
	x[r][c + 16] = 220;
	x[r][c + 17] = 220;
	x[r][c + 18] = 220;
	x[r][c + 19] = 220;
}
void move_fire_elevator(char x[][600], int r, int &c , int&f)
{
	
	if (c + 10 < 96 && f==0)
	{
		c++;
		if(c+10==95)
		{
			f = 1;
		}
	}
	if (f==1)
	{
		c--;
		if(c==32)
		{
			f = 0;
		}
	}
}
void draw_cat(char x[][600], int   r, int c)
{
	x[r][c + 1] = 196;
	//
	x[r + 1][c] = 40;
	x[r + 1][c + 2] = 92;
	//
	x[r + 2][c + 1] = 41;
	x[r + 2][c + 2] = 41;
	//
	x[r + 3][c] = 40;
	x[r + 3][c + 1] = 40;
	x[r + 3][c + 5] = 46;
	x[r + 3][c + 6] = '-';
	x[r + 3][c + 7] = 34;
	x[r + 3][c + 8] = 34;
	x[r + 3][c + 9] = '-';
	x[r + 3][c + 10] = 46;
	x[r + 3][c + 13] = 65;
	x[r + 3][c + 14] = 46;
	x[r + 3][c + 15] = '-';
	x[r + 3][c + 16] = 46;
	x[r + 3][c + 17] = 65;
	//
	x[r + 4][c + 1] = 92;
	x[r + 4][c + 3] = 92;
	x[r + 4][c + 4] = 47;
	x[r + 4][c + 11] = 92;
	x[r + 4][c + 12] = 47;
	x[r + 4][c + 14] = 44;
	x[r + 4][c + 16] = 44;
	x[r + 4][c + 18] = 92;
	//
	x[r + 5][c + 2] = 92;
	x[r + 5][c + 6] = 92;
	x[r + 5][c + 11] = '=';
	x[r + 5][c + 12] = 59;
	x[r + 5][c + 15] = 116;
	x[r + 5][c + 18] = 47;
	x[r + 5][c + 19] = '=';
	//
	x[r + 6][c + 3] = 92;
	x[r + 6][c + 7] = 124;
	x[r + 6][c + 8] = 34;
	x[r + 6][c + 9] = 34;
	x[r + 6][c + 10] = 46;
	x[r + 6][c + 13] = 39;
	x[r + 6][c + 14] = 44;
	x[r + 6][c + 15] = 45;
	x[r + 6][c + 16] = 45;
	x[r + 6][c + 17] = 39;
	//
	x[r + 7][c + 4] = 47;
	x[r + 7][c + 6] = 47;
	x[r + 7][c + 7] = 47;
	x[r + 7][c + 10] = 124;
	x[r + 7][c + 12] = 124;
	x[r + 7][c + 13] = 124;
	//
	x[r + 8][c + 3] = 47;
	x[r + 8][c + 1] = 196;
	x[r + 8][c + 5] = 44;
	x[r + 8][c + 6] = 41;
	x[r + 8][c + 7] = 41;
	x[r + 8][c + 10] = 124;
	x[r + 8][c + 11] = 196;
	x[r + 8][c + 12] = 44;
	x[r + 8][c + 13] = 41;
	x[r + 8][c + 14] = 41;
}
void move_cat(char x[][600], int &r, int &c, char &m, int &fm, int &fl)
{
	int i, k, f = 0;
	if (m == 'd')
	{
		for (i = 0 ; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r+k][c + 20] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c++;
			}
		}
	}
	if (m == 'w')
	{
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 19; k++)
			{
				if (x[r -1][c + k] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				r--;
			}
		}
	}
	if (m == 'a')
	{
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c -1] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c--;
			}
		}
	}

	//jump right
	if (m == 'e')
	{
		fm = 1;
	}

	//jump left
	if (m == 'q')
	{
		fm = 5;
	}

	//LAZER
	if (m == 'l')
	{
		fl = 1;
	}


}
void jump(char x[][600], int& r, int& c, int& fm)
{
	int i, k, f = 0;
	
	//RIGHT
	if (fm == 1)
	{

		//ROWS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 19; k++)
			{
				if (x[r - 1][c + k] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				r--;
			}
		}

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c + 20] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c++;
			}
		}
		fm++;
	}
	else if (fm == 2)
	{
		//ROWS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 19; k++)
			{
				if (x[r - 1][c + k] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				r--;
			}
		}

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c + 20] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c++;
			}
		}
		fm++;
	}
	else if (fm == 3)
	{

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c + 20] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c++;
			}
		}
		fm++;
	}
	else if (fm == 4)
	{

		//COLUMNS
		for (i = 0; i < 10; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c + 20] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c++;
			}
		}
		fm = 0;
	}

	//LEFT
	if (fm == 5)
	{
		//ROWS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 19; k++)
			{
				if (x[r - 1][c + k] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				r--;
			}
		}

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c - 1] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c--;
			}
		}
		fm++;
	}
	else if (fm == 6)
	{
		//ROWS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 19; k++)
			{
				if (x[r - 1][c + k] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				r--;
			}
		}

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c - 1] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c--;
			}
		}
		fm++;
	}
	else if (fm == 7)
	{

		//COLUMNS
		for (i = 0; i < 5; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c - 1] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c--;
			}
		}
		fm++;
	}
	else if (fm == 9)
	{

		//COLUMNS
		for (i = 0; i < 10; i++)
		{
			f = 0;
			for (k = 0; k < 9; k++)
			{
				if (x[r + k][c - 1] != ' ')
				{
					f = 1;
				}
			}
			if (f == 0)
			{
				c--;
			}
		}
		fm = 0;
	}
}
void gravity(char x[][600], int &r, int &c)
{
	int f = 0;
	for (int k = c; k < c + 17; k++)
	{

		if (x[r + 9][k] != ' ')
		{
			f = 1;
		}
	}
	if (f == 0)
	{
		r++;
	}
}
void draw_HUN_Ene(char x[][600], int r, int c, int &fs)
{
	if (fs > 0)
	{

		//row0
		x[r][c + 12] = '.';
		x[r][c + 13] = ',';
		//row1
		x[r + 1][c + 8] = '.';
		x[r + 1][c + 13] = 196;
		x[r + 1][c + 14] = 196;
		x[r + 1][c + 15] = 196;
		x[r + 1][c + 16] = 196;
		x[r + 1][c + 17] = '/';
		x[r + 1][c + 18] = 196;
		x[r + 1][c + 19] = 196;
		x[r + 1][c + 20] = 196;
		//row2
		x[r + 2][c + 6] = '.';
		x[r + 2][c + 7] = 39;
		x[r + 2][c + 9] = 92;
		x[r + 2][c + 12] = '/';
		x[r + 2][c + 14] = 92;
		x[r + 2][c + 15] = '=';
		x[r + 2][c + 16] = '=';
		x[r + 2][c + 17] = 92;
		x[r + 2][c + 18] = 96;
		x[r + 2][c + 19] = 96;
		x[r + 2][c + 20] = 96;
		//row3
		x[r + 3][c + 5] = '/';
		x[r + 3][c + 10] = 92;
		x[r + 3][c + 12] = '7';
		x[r + 3][c + 13] = '7';
		x[r + 3][c + 15] = 92;
		x[r + 3][c + 17] = 124;
		//row4
		x[r + 4][c + 4] = '/';
		x[r + 4][c + 5] = 196;
		x[r + 4][c + 6] = '.';
		x[r + 4][c + 7] = '-';
		x[r + 4][c + 8] = '-';
		x[r + 4][c + 9] = '-';
		x[r + 4][c + 10] = '-';
		x[r + 4][c + 11] = 92;
		x[r + 4][c + 12] = 92;
		x[r + 4][c + 13] = '-';
		x[r + 4][c + 14] = '-';
		x[r + 4][c + 15] = ',';
		x[r + 4][c + 16] = '-';
		x[r + 4][c + 17] = '-';
		x[r + 4][c + 18] = '-';
		x[r + 4][c + 19] = '-';
		x[r + 4][c + 20] = '-';
		x[r + 4][c + 21] = '.';
		//row5
		x[r + 5][c] = '<';
		x[r + 5][c + 1] = '-';
		x[r + 5][c + 2] = '-';
		x[r + 5][c + 3] = '(';
		x[r + 5][c + 4] = 92;
		x[r + 5][c + 5] = 196;
		x[r + 5][c + 6] = 124;
		x[r + 5][c + 7] = 196;
		x[r + 5][c + 8] = 196;
		x[r + 5][c + 9] = 196;
		x[r + 5][c + 10] = 196;
		x[r + 5][c + 11] = 196;
		x[r + 5][c + 12] = '<';
		x[r + 5][c + 13] = 196;
		x[r + 5][c + 14] = 196;
		x[r + 5][c + 15] = 124;
		x[r + 5][c + 16] = 196;
		x[r + 5][c + 17] = 196;
		x[r + 5][c + 18] = 196;
		x[r + 5][c + 19] = 196;
		x[r + 5][c + 20] = 196;
		x[r + 5][c + 21] = '/';
		//row6
		x[r + 6][c + 4] = 92;
		x[r + 6][c + 7] = 96;
		x[r + 6][c + 8] = 96;
		x[r + 6][c + 9] = 96;
		x[r + 6][c + 10] = 96;
		x[r + 6][c + 11] = '/';
		x[r + 6][c + 12] = 124;
		x[r + 6][c + 16] = 96;
		x[r + 6][c + 17] = 96;
		x[r + 6][c + 18] = '/';
		x[r + 6][c + 19] = 96;
		x[r + 6][c + 20] = 96;
		x[r + 6][c + 21] = 96;
		//row7
		x[r + 7][c + 5] = 96;
		x[r + 7][c + 6] = '.';
		x[r + 7][c + 10] = '/';
		x[r + 7][c + 12] = 124;
		x[r + 7][c + 17] = 'I';
		x[r + 7][c + 18] = 124;
		// row8
		x[r + 8][c + 7] = 96;
		x[r + 8][c + 8] = '.';
		x[r + 8][c + 9] = '/';
		x[r + 8][c + 12] = 124;
		x[r + 8][c + 13] = 196;
		x[r + 8][c + 14] = 196;
		x[r + 8][c + 15] = 196;
		x[r + 8][c + 16] = 196;
		x[r + 8][c + 17] = 'I';
		x[r + 8][c + 18] = 124;
		//row9
		x[r + 9][c + 12] = '!';
		x[r + 9][c + 13] = '!';
		x[r + 9][c + 14] = '!';
		x[r + 9][c + 15] = '!';
		x[r + 9][c + 16] = '!';
		x[r + 9][c + 17] = '!';
		x[r + 9][c + 18] = '!';
		//row10
		x[r + 10][c + 12] = 124;
		x[r + 10][c + 14] = 124;
		x[r + 10][c + 16] = 'I';
		x[r + 10][c + 18] = 124;
		//row11
		x[r + 11][c + 12] = 124;
		x[r + 11][c + 14] = 124;
		x[r + 11][c + 16] = 'I';
		x[r + 11][c + 18] = 124;
		//row12
		x[r + 12][c + 12] = 92;
		x[r + 12][c + 14] = 92;
		x[r + 12][c + 16] = 'I';
		x[r + 12][c + 18] = 124;
		//row13
		x[r + 13][c + 12] = 124;
		x[r + 13][c + 14] = 124;
		x[r + 13][c + 16] = 'I';
		x[r + 13][c + 18] = 124;
		//row14
		x[r + 14][c + 11] = 196;
		x[r + 14][c + 12] = 124;
		x[r + 14][c + 13] = 196;
		x[r + 14][c + 14] = 124;
		x[r + 14][c + 15] = 196;
		x[r + 14][c + 16] = 'I';
		x[r + 14][c + 17] = 196;
		x[r + 14][c + 18] = 124;
		//row15
		x[r + 15][c + 10] = '/';
		x[r + 15][c + 11] = 196;
		x[r + 15][c + 12] = 196;
		x[r + 15][c + 13] = '/';
		x[r + 15][c + 14] = 196;
		x[r + 15][c + 15] = 196;
		x[r + 15][c + 16] = 196;
		x[r + 15][c + 17] = 196;
		x[r + 15][c + 18] = 124;
	}
}
void draw_Ghorela(char x[][600], int rGhorela, int cGhorela, int fG)
{
	if (fG > 0)
	{
		x[rGhorela][cGhorela + 6] = 46;
		x[rGhorela][cGhorela + 7] = 34;
		x[rGhorela][cGhorela + 8] = 96;
		x[rGhorela][cGhorela + 9] = 34;
		x[rGhorela][cGhorela + 10] = 46;
		//
		x[rGhorela + 1][cGhorela + 2] = 46;
		x[rGhorela + 1][cGhorela + 3] = 45;
		x[rGhorela + 1][cGhorela + 4] = 46;
		x[rGhorela + 1][cGhorela + 5] = 47;
		x[rGhorela + 1][cGhorela + 7] = 196;
		x[rGhorela + 1][cGhorela + 8] = 61;
		x[rGhorela + 1][cGhorela + 9] = 196;
		x[rGhorela + 1][cGhorela + 11] = 92;
		x[rGhorela + 1][cGhorela + 12] = 46;
		x[rGhorela + 1][cGhorela + 13] = 45;
		x[rGhorela + 1][cGhorela + 14] = 46;
		//
		x[rGhorela + 2][cGhorela + 1] = 123;
		x[rGhorela + 2][cGhorela + 4] = 40;
		x[rGhorela + 2][cGhorela + 5] = 44;
		x[rGhorela + 2][cGhorela + 6] = 40;
		x[rGhorela + 2][cGhorela + 7] = 111;
		x[rGhorela + 2][cGhorela + 8] = 89;
		x[rGhorela + 2][cGhorela + 9] = 111;
		x[rGhorela + 2][cGhorela + 10] = 41;
		x[rGhorela + 2][cGhorela + 11] = 44;
		x[rGhorela + 2][cGhorela + 12] = 41;
		x[rGhorela + 2][cGhorela + 14] = 125;
		x[rGhorela + 2][cGhorela + 15] = 125;
		//
		x[rGhorela + 3][cGhorela + 1] = 123;
		x[rGhorela + 3][cGhorela + 2] = 123;
		x[rGhorela + 3][cGhorela + 4] = 124;
		x[rGhorela + 3][cGhorela + 8] = 34;
		x[rGhorela + 3][cGhorela + 12] = 124;
		x[rGhorela + 3][cGhorela + 13] = 125;
		x[rGhorela + 3][cGhorela + 15] = 125;
		//
		x[rGhorela + 4][cGhorela + 1] = 123;
		x[rGhorela + 4][cGhorela + 3] = 123;
		x[rGhorela + 4][cGhorela + 5] = 92;
		x[rGhorela + 4][cGhorela + 6] = 40;
		x[rGhorela + 4][cGhorela + 7] = 45;
		x[rGhorela + 4][cGhorela + 8] = 45;
		x[rGhorela + 4][cGhorela + 9] = 45;
		x[rGhorela + 4][cGhorela + 10] = 41;
		x[rGhorela + 4][cGhorela + 11] = 47;
		x[rGhorela + 4][cGhorela + 14] = 125;
		x[rGhorela + 4][cGhorela + 15] = 125;
		//
		x[rGhorela + 5][cGhorela + 1] = 123;
		x[rGhorela + 5][cGhorela + 2] = 123;
		x[rGhorela + 5][cGhorela + 5] = 125;
		x[rGhorela + 5][cGhorela + 6] = 39;
		x[rGhorela + 5][cGhorela + 7] = 45;
		x[rGhorela + 5][cGhorela + 8] = 61;
		x[rGhorela + 5][cGhorela + 9] = 45;
		x[rGhorela + 5][cGhorela + 10] = 39;
		x[rGhorela + 5][cGhorela + 11] = 123;
		x[rGhorela + 5][cGhorela + 13] = 125;
		x[rGhorela + 5][cGhorela + 15] = 125;
		//
		x[rGhorela + 6][cGhorela + 1] = 123;
		x[rGhorela + 6][cGhorela + 3] = 123;
		x[rGhorela + 6][cGhorela + 5] = 125;
		x[rGhorela + 6][cGhorela + 6] = 46;
		x[rGhorela + 6][cGhorela + 7] = 196;
		x[rGhorela + 6][cGhorela + 8] = 58;
		x[rGhorela + 6][cGhorela + 9] = 196;
		x[rGhorela + 6][cGhorela + 10] = 46;
		x[rGhorela + 6][cGhorela + 11] = 123;
		x[rGhorela + 6][cGhorela + 14] = 125;
		x[rGhorela + 6][cGhorela + 15] = 125;
		//
		x[rGhorela + 7][cGhorela + 1] = 123;
		x[rGhorela + 7][cGhorela + 2] = 123;
		x[rGhorela + 7][cGhorela + 5] = 125;
		x[rGhorela + 7][cGhorela + 7] = 45;
		x[rGhorela + 7][cGhorela + 8] = 58;
		x[rGhorela + 7][cGhorela + 9] = 45;
		x[rGhorela + 7][cGhorela + 11] = 123;
		x[rGhorela + 7][cGhorela + 13] = 125;
		x[rGhorela + 7][cGhorela + 15] = 125;
		//
		x[rGhorela + 8][cGhorela + 1] = 123;
		x[rGhorela + 8][cGhorela + 2] = 196;
		x[rGhorela + 8][cGhorela + 3] = 123;
		x[rGhorela + 8][cGhorela + 5] = 96;
		x[rGhorela + 8][cGhorela + 7] = 61;
		x[rGhorela + 8][cGhorela + 8] = 61;
		x[rGhorela + 8][cGhorela + 9] = 61;
		x[rGhorela + 8][cGhorela + 10] = 96;
		x[rGhorela + 8][cGhorela + 11] = 123;
		x[rGhorela + 8][cGhorela + 14] = 196;
		x[rGhorela + 8][cGhorela + 15] = 125;
		//
		x[rGhorela + 9][cGhorela] = 40;
		x[rGhorela + 9][cGhorela + 1] = 40;
		x[rGhorela + 9][cGhorela + 2] = 40;
		x[rGhorela + 9][cGhorela + 3] = 40;
		x[rGhorela + 9][cGhorela + 4] = 92;
		x[rGhorela + 9][cGhorela + 11] = 40;
		x[rGhorela + 9][cGhorela + 12] = 47;
		x[rGhorela + 9][cGhorela + 13] = 41;
		x[rGhorela + 9][cGhorela + 14] = 41;
		x[rGhorela + 9][cGhorela + 15] = 41;
		x[rGhorela + 9][cGhorela + 16] = 41;
	}
}
void draw_boss(char x[][600], int r, int c, int fb)
{
	int i, k;
	if (fb >0)
	{
		for (i = 0; i < 6; i++)
		{
			x[r][c + 36 + i] = '$';
		}

		//ROW 1
		x[r + 1][c + 35] = '$';
		x[r + 1][c + 37] = '~';
		x[r + 1][c + 40] = '~';
		x[r + 1][c + 42] = '$';

		//ROW 2
		x[r + 2][c + 34] = '$';
		x[r + 2][c + 35] = '$';
		x[r + 2][c + 37] = 'O';
		x[r + 2][c + 40] = 'O';
		x[r + 2][c + 42] = '$';
		x[r + 2][c + 43] = '$';

		//ROW 3
		x[r + 3][c + 42] = '$';
		x[r + 3][c + 43] = '$';
		x[r + 3][c + 34] = '$';
		x[r + 3][c + 35] = '$';
		x[r + 3][c + 38] = '^';

		//ROW 4
		x[r + 4][c + 35] = '$';
		x[r + 4][c + 38] = '_';
		x[r + 4][c + 39] = '_';
		x[r + 4][c + 40] = '/';
		x[r + 4][c + 42] = '$';

		//ROW 5
		x[r + 5][c + 1] = '_';
		x[r + 5][c + 29] = '(';
		x[r + 5][c + 30] = '(';
		x[r + 5][c + 31] = ')';
		x[r + 5][c + 32] = ')';
		x[r + 5][c + 35] = '$';
		x[r + 5][c + 42] = '$';
		x[r + 5][c + 45] = '(';
		x[r + 5][c + 46] = '(';
		x[r + 5][c + 47] = ')';
		x[r + 5][c + 48] = ')';
		x[r + 5][c + 77] = '_';


		//ROW 6
		x[r + 6][c] = '(';
		x[r + 6][c + 1] = '#';
		x[r + 6][c + 2] = ')';
		for (i = 0; i < 26; i++)
		{
			x[r + 6][c + 3 + i] = '_';
		}
		x[r + 6][c + 29] = '(';
		x[r + 6][c + 30] = '/';
		x[r + 6][c + 31] = '/';
		for (i = 0; i < 4; i++)
		{
			x[r + 6][c + 32 + i] = '*';
		}
		x[r + 6][c + 36] = '$';
		x[r + 6][c + 38] = '@';
		x[r + 6][c + 41] = '$';
		x[r + 6][c + 42] = '$';
		for (i = 0; i < 3; i++)
		{
			x[r + 6][c + 43 + i] = '*';
		}
		x[r + 6][c + 46] = 92;
		x[r + 6][c + 47] = 92;
		x[r + 6][c + 48] = ')';
		for (i = 0; i < 27; i++)
		{
			x[r + 6][c + 49 + i] = '_';
		}
		x[r + 6][c + 76] = '(';
		x[r + 6][c + 77] = '#';
		x[r + 6][c + 78] = ')';


		//ROW 7
		x[r + 7][c] = '|';
		x[r + 7][c + 1] = '#';
		x[r + 7][c + 2] = '|';
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 3 + i] = 92;
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 7 + i] = 92;
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 17 + i] = 92;
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 22 + i] = 92;
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 5 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 10 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 15 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 20 + i] = '_';
		}
		x[r + 7][c + 25] = '&';
		x[r + 7][c + 26] = '&';
		x[r + 7][c + 27] = '|';
		x[r + 7][c + 28] = '(';
		x[r + 7][c + 29] = '(';
		x[r + 7][c + 30] = '|';
		x[r + 7][c + 31] = '|';
		for (i = 0; i < 7; i++)
		{
			x[r + 7][c + 36 + i] = '&';
		}
		x[r + 7][c + 47] = '|';
		x[r + 7][c + 48] = '|';
		x[r + 7][c + 49] = ')';
		x[r + 7][c + 50] = ')';
		x[r + 7][c + 51] = '|';
		x[r + 7][c + 52] = '&';
		x[r + 7][c + 53] = '&';
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 54 + i] = '/';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 59 + i] = '/';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 7][c + 69 + i] = '/';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 74 + i] = '/';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 57 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 62 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 67 + i] = '_';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 7][c + 72 + i] = '_';
		}
		x[r + 7][c + 76] = '|';
		x[r + 7][c + 77] = '#';
		x[r + 7][c + 78] = '|';


		//ROW 8
		x[r + 8][c] = '|';
		x[r + 8][c + 1] = '#';
		x[r + 8][c + 2] = '|';
		for (i = 0; i < 4; i++)
		{
			for (k = 0; k < 10; k++)
			{
				x[r + 8 + i][c + 3 + k] = '$';
			}
		}
		for (i = 0; i < 2; i++)
		{
			for (k = 0; k < 9; k++)
			{
				x[r + 8 + i][c + 14 + k] = '$';
			}
		}
		for (i = 0; i < 2; i++)
		{
			for (k = 0; k < 4; k++)
			{
				x[r + 8 + i][c + 23 + k] = '&';
			}
		}
		x[r + 8][c + 27] = '|';
		x[r + 8][c + 28] = '(';
		x[r + 8][c + 29] = '(';
		x[r + 8][c + 30] = 92;
		x[r + 8][c + 31] = 92;
		for (i = 0; i < 14; i++)
		{
			x[r + 8][c + 32 + i] = '.';
		}
		x[r + 8][c + 46] = '/';
		x[r + 8][c + 47] = '/';
		for (i = 0; i < 3; i++)
		{
			x[r + 8][c + 48 + i] = ')';
		}
		for (i = 0; i < 2; i++)
		{
			for (k = 0; k < 4; k++)
			{
				x[r + 8 + i][c + 51 + k] = '&';
			}
		}
		for (i = 0; i < 2; i++)
		{
			for (k = 0; k < 10; k++)
			{
				x[r + 8 + i][c + 55 + k] = '$';
			}
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 8 + i][c + 65] = '|';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 8 + i][c + 13] = '|';
		}
		for (i = 0; i < 4; i++)
		{
			for (k = 0; k < 10; k++)
			{
				x[r + 8 + i][c + 66 + k] = '$';
			}
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 8 + i][c + 76] = '|';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 8 + i][c + 78] = '|';
		}
		x[r + 8][c + 77] = '#';



		//ROW 9
		for (i = 0; i < 3; i++)
		{
			x[r + 9 + i][c] = '|';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 9 + i][c + 2] = '|';
		}
		x[r + 9][c + 27] = 92;
		x[r + 9][c + 28] = '(';
		x[r + 9][c + 29] = '(';
		for (i = 0; i < 3; i++)
		{
			x[r + 9][c + 30 + i] = '-';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 9][c + 33 + i] = '(';
		}
		x[r + 9][c + 37] = '_';
		x[r + 9][c + 38] = '_';
		x[r + 9][c + 39] = '^';
		x[r + 9][c + 40] = '_';
		x[r + 9][c + 41] = '_';
		for (i = 0; i < 7; i++)
		{
			x[r + 9][c + 43 + i] = ')';
		}
		x[r + 9][c + 50] = '/';



		//ROW10
		for (i = 0; i < 8; i++)
		{
			x[r + 10][c + 14 + i] = '$';
		}
		x[r + 10][c + 22] = '/';
		x[r + 10][c + 24] = '.';
		x[r + 10][c + 27] = '/';
		x[r + 10][c + 28] = '.';
		x[r + 10][c + 29] = 92;
		for (i = 0; i < 6; i++)
		{
			x[r + 10][c + 30 + i] = '(';
		}
		x[r + 10][c + 36] = '.';
		x[r + 10][c + 37] = 92;
		x[r + 10][c + 38] = '{';
		x[r + 10][c + 39] = '|';
		x[r + 10][c + 40] = '}';
		x[r + 10][c + 41] = '/';
		x[r + 10][c + 42] = '.';
		for (i = 0; i < 6; i++)
		{
			x[r + 10][c + 43 + i] = ')';
		}
		x[r + 10][c + 49] = '/';
		x[r + 10][c + 50] = '.';
		x[r + 10][c + 51] = 92;
		x[r + 10][c + 54] = '&';
		x[r + 10][c + 55] = '&';
		x[r + 10][c + 56] = 92;
		for (i = 0; i < 8; i++)
		{
			x[r + 10][c + 57 + i] = '$';
		}


		//ROW 11
		for (i = 0; i < 7; i++)
		{
			x[r + 11][c + 14 + i] = '$';
		}
		x[r + 11][c + 21] = '/';
		x[r + 11][c + 22] = '.';
		x[r + 11][c + 23] = '.';
		x[r + 11][c + 26] = '/';
		x[r + 11][c + 27] = '$';
		x[r + 11][c + 28] = ':';
		x[r + 11][c + 30] = 92;
		x[r + 11][c + 31] = '(';
		x[r + 11][c + 32] = '(';
		x[r + 11][c + 33] = '@';
		x[r + 11][c + 34] = ')';
		x[r + 11][c + 35] = '(';
		x[r + 11][c + 36] = '(';
		for (i = 0; i < 5; i++)
		{
			x[r + 11][c + 37 + i] = '.';
		}
		for (i = 0; i < 5; i++)
		{
			x[r + 11][c + 42 + i] = ')';
		}
		x[r + 11][c + 47] = '/';
		x[r + 11][c + 50] = ':';
		x[r + 11][c + 51] = '$';
		x[r + 11][c + 52] = 92;
		x[r + 11][c + 56] = '@';
		x[r + 11][c + 57] = 92;
		for (i = 0; i < 7; i++)
		{
			x[r + 11][c + 58 + i] = '$';
		}




		//ROW 12
		x[r + 12][c + 13] = 92;
		for (i = 0; i < 6; i++)
		{
			x[r + 12][c + 14 + i] = '$';
		}
		x[r + 12][c + 20] = '/';
		x[r + 12][c + 25] = '/';
		x[r + 12][c + 26] = '$';
		x[r + 12][c + 27] = '$';
		x[r + 12][c + 28] = ':';
		x[r + 12][c + 32] = '$';
		x[r + 12][c + 33] = 92;
		for (i = 0; i < 4; i++)
		{
			x[r + 12][c + 34 + i] = '(';
		}
		x[r + 12][c + 38] = '/';
		x[r + 12][c + 40] = 92;
		for (i = 0; i < 4; i++)
		{
			x[r + 12][c + 41 + i] = ')';
		}
		x[r + 12][c + 45] = '/';
		x[r + 12][c + 46] = '$';
		x[r + 12][c + 50] = ':';
		x[r + 12][c + 51] = '$';
		x[r + 12][c + 52] = '$';
		x[r + 12][c + 53] = 92;
		x[r + 12][c + 58] = 92;
		for (i = 0; i < 6; i++)
		{
			x[r + 12][c + 59 + i] = '$';
		}
		x[r + 12][c + 65] = '/';
		x[r + 12][c] = 92;
		x[r + 12][c + 2] = '/';
		x[r + 12][c + 1] = '_';
		x[r + 12][c + 78] = '/';
		x[r + 12][c + 77] = '_';
		x[r + 12][c + 76] = 92;


		//ROW 13
		for (i = 0; i < 3; i++)
		{
			x[r + 13][c + 18 + i] = '#';
		}
		x[r + 13][c + 21] = '>';
		x[r + 13][c + 22] = '.';
		x[r + 13][c + 23] = '.';
		x[r + 13][c + 24] = '<';
		for (i = 0; i < 3; i++)
		{
			x[r + 13][c + 25 + i] = '$';
		}
		x[r + 13][c + 28] = ':';
		x[r + 13][c + 31] = '$';
		x[r + 13][c + 32] = '$';
		for (i = 0; i < 5; i++)
		{
			x[r + 13][c + 37 + i] = '.';
		}
		x[r + 13][c + 46] = '$';
		x[r + 13][c + 47] = '$';
		x[r + 13][c + 50] = ':';
		for (i = 0; i < 3; i++)
		{
			x[r + 13][c + 51 + i] = '$';
		}
		x[r + 13][c + 54] = '>';
		x[r + 13][c + 55] = '.';
		x[r + 13][c + 56] = '.';
		x[r + 13][c + 57] = '<';
		for (i = 0; i < 3; i++)
		{
			x[r + 13][c + 58 + i] = '#';
		}


		//ROW 14
		x[r + 14][c + 18] = '#';
		x[r + 14][c + 19] = '#';
		x[r + 14][c + 20] = '^';
		x[r + 14][c + 26] = '|';
		x[r + 14][c + 29] = 92;
		x[r + 14][c + 30] = '$';
		x[r + 14][c + 31] = '$';
		for (i = 0; i < 9; i++)
		{
			x[r + 14][c + 35 + i] = '&';
		}
		x[r + 14][c + 47] = '$';
		x[r + 14][c + 48] = '$';
		x[r + 14][c + 49] = '/';
		x[r + 14][c + 52] = '|';
		x[r + 14][c + 57] = '^';
		x[r + 14][c + 58] = '#';
		x[r + 14][c + 59] = '#';


		//ROW 15
		x[r + 15][c + 19] = 92;
		x[r + 15][c + 20] = '_';
		x[r + 15][c + 26] = '|';
		x[r + 15][c + 31] = '~';
		for (i = 0; i < 4; i++)
		{
			for (k = 0; k < 13; k++)
			{
				x[r + 15 + i][c + 33 + k] = '&';
			}
		}
		x[r + 15][c + 47] = '~';
		x[r + 15][c + 52] = '|';
		x[r + 15][c + 59] = '/';



		//ROW 16
		x[r + 16][c + 21] = 92;
		x[r + 16][c + 22] = '.';
		x[r + 16][c + 23] = '.';
		x[r + 16][c + 24] = '.';
		x[r + 16][c + 27] = 92;
		x[r + 16][c + 51] = '/';
		x[r + 16][c + 54] = '.';
		x[r + 16][c + 55] = '.';
		x[r + 16][c + 56] = '.';
		x[r + 16][c + 57] = '/';


		//ROW 17
		x[r + 17][c + 23] = 92;
		x[r + 17][c + 24] = '_';
		x[r + 17][c + 25] = '.';
		x[r + 17][c + 28] = 92;
		x[r + 17][c + 50] = '/';
		x[r + 17][c + 53] = '.';
		x[r + 17][c + 54] = '_';
		x[r + 17][c + 55] = '/';


		//ROW 18
		x[r + 18][c + 26] = 92;
		x[r + 18][c + 27] = '_';
		x[r + 18][c + 28] = '_';
		x[r + 18][c + 29] = 92;
		x[r + 18][c + 49] = '/';
		x[r + 18][c + 50] = '_';
		x[r + 18][c + 51] = '_';
		x[r + 18][c + 52] = '/';


		//ROW 19
		x[r + 19][c + 26] = '/';
		x[r + 19][c + 30] = 92;
		for (i = 0; i < 6; i++)
		{
			x[r + 19][c + 32 + i] = '(';
		}
		x[r + 19][c + 38] = 92;
		x[r + 19][c + 40] = '/';
		for (i = 0; i < 6; i++)
		{
			x[r + 19][c + 41 + i] = ')';
		}
		x[r + 19][c + 48] = '/';
		x[r + 19][c + 52] = 92;
		x[r + 19][c + 53] = '.';
		x[r + 19][c + 25] = '.';


		//ROW 20
		x[r + 20][c + 25] = 92;
		x[r + 20][c + 26] = 92;
		x[r + 20][c + 27] = '_';
		x[r + 20][c + 28] = '_';
		x[r + 20][c + 29] = '_';
		x[r + 20][c + 30] = '|';
		x[r + 20][c + 32] = '/';
		x[r + 20][c + 46] = 92;
		x[r + 20][c + 48] = '|';
		x[r + 20][c + 49] = '_';
		x[r + 20][c + 50] = '_';
		x[r + 20][c + 51] = '_';
		x[r + 20][c + 52] = '/';
		x[r + 20][c + 53] = '/';


		//ROW 21
		for (i = 0; i < 3; i++)
		{
			x[r + 21][c + 26 + i] = '=';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 21][c + 49 + i] = '=';
		}
		x[r + 21][c + 31] = '/';
		x[r + 21][c + 35] = 92;
		x[r + 21][c + 41] = '/';
		x[r + 21][c + 47] = '|';


		//ROW 22
		x[r + 22][c + 30] = '/';
		x[r + 22][c + 36] = 92;
		x[r + 22][c + 37] = '_';
		x[r + 22][c + 38] = '_';
		x[r + 22][c + 39] = '_';
		x[r + 22][c + 40] = '|';
		x[r + 22][c + 47] = '|';


		//ROW 23
		x[r + 23][c + 29] = '/';
		x[r + 23][c + 36] = '/';
		x[r + 23][c + 40] = '|';
		x[r + 23][c + 47] = '|';

		//ROW 24
		x[r + 24][c + 28] = '/';
		x[r + 24][c + 35] = '/';
		for (i = 0; i < 4; i++)
		{
			x[r + 24 + i][c + 40] = '|';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 24 + i][c + 47] = '|';
		}


		//ROW 25
		x[r + 25][c + 27] = '/';
		x[r + 25][c + 34] = '/';


		//ROW 26
		x[r + 26][c + 25] = '_';
		x[r + 26][c + 26] = '/';
		x[r + 26][c + 33] = '/';
		x[r + 26][c + 48] = '_';


		//ROW 27
		x[r + 27][c + 24] = '|';
		x[r + 27][c + 33] = 92;
		x[r + 27][c + 49] = '|';


		//ROW 28
		x[r + 28][c + 24] = '|';
		x[r + 28][c + 34] = 92;
		for (i = 0; i < 5; i++)
		{
			x[r + 28 + i][c + 39] = '|';
		}
		for (i = 0; i < 5; i++)
		{
			x[r + 28 + i][c + 50] = '|';
		}

		//ROW 29
		x[r + 29][c + 23] = '/';
		x[r + 29][c + 35] = 92;

		//ROW 30
		x[r + 30][c + 22] = '(';
		for (i = 0; i < 6; i++)
		{
			x[r + 30][c + 23 + i] = '_';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 30][c + 30 + i] = '_';
		}
		x[r + 30][c + 36] = 92;
		for (i = 0; i < 8; i++)
		{
			x[r + 30][c + 41 + i] = '_';
		}


		//ROW 31
		x[r + 31][c + 21] = '/';
		for (i = 0; i < 7; i++)
		{
			x[r + 31][c + 22 + i] = '(';
		}
		x[r + 31][c + 29] = '/';
		x[r + 31][c + 30] = '(';
		x[r + 31][c + 31] = '(';
		x[r + 31][c + 32] = ')';
		x[r + 31][c + 33] = ')';
		x[r + 31][c + 34] = 92;
		x[r + 31][c + 35] = '_';
		x[r + 31][c + 36] = '_';
		x[r + 31][c + 37] = '|';
		x[r + 31][c + 38] = '(';
		x[r + 31][c + 39] = '|';
		x[r + 31][c + 40] = '/';
		for (i = 0; i < 4; i++)
		{
			x[r + 31][c + 41 + i] = '(';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 31][c + 45 + i] = ')';
		}
		x[r + 31][c + 49] = 92;
		x[r + 31][c + 50] = '|';
		x[r + 31][c + 51] = ')';



		//ROW 32
		x[r + 32][c + 19] = '_';
		x[r + 32][c + 20] = '|';
		for (i = 0; i < 7; i++)
		{
			x[r + 32][c + 21 + i] = '(';
		}
		x[r + 32][c + 28] = '|';
		for (i = 0; i < 3; i++)
		{
			x[r + 32][c + 29 + i] = '(';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 32][c + 32 + i] = ')';
		}
		x[r + 32][c + 35] = '|';
		x[r + 32][c + 36] = ')';
		x[r + 32][c + 37] = '&';
		x[r + 32][c + 38] = '(';
		x[r + 32][c + 39] = '|';
		for (i = 0; i < 5; i++)
		{
			x[r + 32][c + 40 + i] = '(';
		}
		for (i = 0; i < 5; i++)
		{
			x[r + 32][c + 45 + i] = ')';
		}
		x[r + 32][c + 50] = '|';
		x[r + 32][c + 51] = ')';


		//ROW 33
		x[r + 33][c + 17] = '/';
		for (i = 0; i < 3; i++)
		{
			x[r + 33][c + 18 + i] = '(';
		}
		for (i = 0; i < 5; i++)
		{
			x[r + 33][c + 21 + i] = '"';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 33][c + 26 + i] = '(';
		}
		x[r + 33][c + 29] = 92;
		x[r + 33][c + 30] = '(';
		x[r + 33][c + 31] = '(';
		x[r + 33][c + 32] = ')';
		x[r + 33][c + 33] = ')';
		x[r + 33][c + 34] = '/';
		x[r + 33][c + 35] = ')';
		x[r + 33][c + 36] = ')';
		x[r + 33][c + 37] = '&';
		x[r + 33][c + 38] = '(';
		x[r + 33][c + 39] = '/';
		x[r + 33][c + 40] = '"';
		x[r + 33][c + 41] = '"';
		for (i = 0; i < 3; i++)
		{
			x[r + 33][c + 42 + i] = '(';
		}
		for (i = 0; i < 3; i++)
		{
			x[r + 33][c + 45 + i] = ')';
		}
		x[r + 33][c + 48] = '"';
		x[r + 33][c + 49] = '"';
		x[r + 33][c + 50] = 92;
		x[r + 33][c + 51] = ')';



		//ROW 34
		x[r + 34][c + 16] = '|';
		for (i = 0; i < 3; i++)
		{
			x[r + 34][c + 17 + i] = '(';
		}
		for (i = 0; i < 2; i++)
		{
			x[r + 34][c + 35 + i] = ')';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 34][c + 41 + i] = '(';
		}
		for (i = 0; i < 4; i++)
		{
			x[r + 34][c + 45 + i] = ')';
		}
		x[r + 34][c + 51] = '|';
		x[r + 34][c + 37] = '&';
		x[r + 34][c + 38] = '|';



		//ROW 35
		x[r + 35][c + 15] = '(';
		for (i = 0; i < 21; i++)
		{
			x[r + 35][c + 16 + i] = '$';
		}
		x[r + 35][c + 37] = '(';
		for (i = 0; i < 14; i++)
		{
			x[r + 35][c + 38 + i] = '$';
		}
		x[r + 35][c + 52] = ')';
	}
}
void damage(char x[][600], int &r, int &c, int &health, int rs, int cs, int rg, int cg, int rb, int cb, int fs, int fg, int fb)
{

	//CHECK FIRE
	int f = 0;
	for (int k = c; k < c + 17; k++)
	{

		if (x[r + 9][k] == '/' || x[r + 9][k] == 92)
		{
			f = 1;
		}
	}
	if (f == 1)
	{
		health--;
		r = 30, c = 3;
	}

	//CHECK SKEKETON
	int i, k;
	if (fs >0)
	{
		f = 0;
		for (k = 0; k < 9; k++)
		{
			if ((c + 20 >= cs - 1 && c + 20 <= cs + 5) && rs < r)
			{
				f = 1;
			}
		}
		if (f == 1)
		{
			health--;
			r = 30, c = 3;
		}
	}


	//CHECK GHORELL
	if (fg >0)
	{

		f = 0;
		for (k = 0; k < 9; k++)
		{
			if ((c + 20 >= cg - 1 && c + 20 <= cg + 5) && rg < r)
			{
				f = 1;
			}
		}
		if (f == 1)
		{
			health--;
			r = 30, c = 3;
		}
	}



	//CHECK BOSS
	if (fb >0)
	{

		f = 0;
		for (k = 0; k < 9; k++)
		{
			if ((c + 20 >= cb - 1 && c + 20 <= cb + 5) && rb < r)
			{
				f = 1;
			}
		}
		if (f == 1)
		{
			health--;
			r = 30, c = 3;
		}
	}


	//CHECK LAZER
	for (k = r; k < r+9; k++)
	{
		if (x[k][c+20] == -37)
		{
			f = 1;
		}
		if (x[k][c - 2] == -37)
		{
			f = 1;
		}
	}
	if (f == 1)
	{
		health--;
		r = 30, c = 3;
	}
}
void gameover(char x[][600])
{
	int er1 = 4, ec1 = 5;
	int er2 = 35, ec2 = 5;
	int er3 = 18, ec3 = 5;
	int er4 = 4, ec4 = 68;
	int er5 = 32, ec5 = 68;
	int ccl1 = 4, rcl1 = 13, flagc1 = 0;
	int ccl2 = 30, rcl2 = 24, flagc2 = 0;
	int ccl3 = 74, rcl3 = 13, flagc3 = 0;
	int ccl4 = 100, rcl4 = 24, flagc4 = 0;


	for (int i = 0; i < 40; i++)
	{
		for (int k = 0; k < 600; k++)
		{
			x[i][k] = ' ';
		}
	}
	for (int r = 0; r < 40; r++)
	{
		x[r][0] = 186;
	}
	for (int r = 0; r < 40; r++)
	{
		x[r][149] = 186;
	}
	for (int c = 0; c < 150; c++)
	{
		x[0][c] = 205;
	}
	for (int c = 0; c < 150; c++)
	{
		x[39][c] = 205;
	}
	x[0][0] = 201;
	x[0][149] = 187;
	x[39][0] = 200;
	x[39][149] = 188;
	x[4][0] = 186;
	x[4][149] = 186;
	x[20][68] = 71;
	x[20][69] = 65;
	x[20][70] = 77;
	x[20][71] = 69;
	x[20][72] = ' ';
	x[20][73] = 79;
	x[20][74] = 86;
	x[20][75] = 69;
	x[20][76] = 82;

}
void hero_elevator(char x[][600], int& r, int& c, int&ce)
{
	int f = 0;
	for (int k = c; k < c + 17; k++)
	{

		if (x[r + 9][k] == -36 && 200>k>0)
		{
			f = 1;
		}
	}
	if (f == 1)
	{
		r = 23, c  = ce + 1;
		if (ce+10 == 94)
		{
			r = 30, c = 103;
		}
	}
}
void draw_lazer(char x[][600], int r, int c, int& posR, int& posC)
{
	int i, k;

	for (i = 0; i < 12; i++)
	{
		x[r][c + i] = 219;
	}
	for (i = 0; i < 10; i++)
	{
		x[r + 1][c + i + 1] = 219;
	}
	for (i = 0; i < 8; i++)
	{
		x[r + 2][c + i + 2] = 219;
	}

	posR = r + 3;
	posC = c + 2;

}
void lazer(char x[][600], int posR, int posC, int& fl)
{
	for (int i = 0; i < 40 - posR; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			x[posR + i][posC + k] = 219;
		}
	}
	if (fl)
	{
		for (int i = 0; i < 39 - posR; i++)
		{
			for (int k = 0; k < 8; k++)
			{
				x[posR + i][posC + k] = ' ';
			}
		}
		fl++;
		if (fl == 40)
		{
			fl = 0;
		}
	}
}
void draw_bolits(char x[][600], int r[], int c[], int fb[], int i)
{
	if (fb[i] == 1)
	{
		x[r[i]][c[i]] = 254;
	}
}
void move_bolits(char x[][600], int r[], int c[], int fb[], char& m, int rh, int ch, int i, int &ib)
{
	if (m == 'f')
	{
		fb[ib] = 1;
		m = NULL;
		r[ib] = rh + 5;
		c[ib] = ch + 17;
		ib++;
	}
	if (fb[i] == 1)
	{
		for (int k = 0; k < 5; k++)
		{
			if (x[r[i]][c[i] + k + 1] == ' ')
			{
				c[i]++;
			}
			else
			{
				fb[i] = 0;
			}
		}
	}
}
void damage_skil(char x[][600], int r, int c, int &fs)
{
	int i;
	for (i = 0; i < 15; i++)
	{
		if (x[r + i][c - 1] == -2|| x[r + i][c - 2] == -2|| x[r + i][c - 3] == -2 || x[r + i][c - 4] == -2 || x[r + i][c - 5] == -2)
		{
			fs--;
		}
	}
}
void damage_ghorela(char x[][600], int r, int c, int& fg)
{
	int i;
	for (i = 0; i < 9; i++)
	{
		if (x[r + i][c - 1] == -2 || x[r + i][c - 2] == -2 || x[r + i][c - 3] == -2 || x[r + i][c - 4] == -2 || x[r + i][c - 5] == -2)
		{
			fg--;
		}
	}
}
void damage_boss(char x[][600], int r, int c, int& fb)
{
	int i;
	for (i = 0; i < 38; i++)
	{
		if (x[r + i][c - 1] == -2 || x[r + i][c - 2] == -2 || x[r + i][c - 3] == -2 || x[r + i][c - 4] == -2 || x[r + i][c - 5] == -2)
		{
			fb--;
		}
	}
}
void winpage(char x[][600])
{
	int rlazer, clazer, fl = 0;
	int ccl1 = 4, rcl1 = 15, flagc1 = 0;
	int ccl2 = 30, rcl2 = 22, flagc2 = 0;
	int ccl3 = 74, rcl3 = 15, flagc3 = 0;
	int ccl4 = 100, rcl4 = 22, flagc4 = 0;
		for (int i = 0; i < 40; i++)
		{
			for (int c = 0; c < 150; c++)
			{
				x[i][c] = ' ';
			}
		}
		for (int r = 0; r < 40; r++)
		{
			x[r][0] = 186;
		}
		for (int r = 0; r < 40; r++)
		{
			x[r][149] = 186;
		}
		for (int c = 0; c < 150; c++)
		{
			x[0][c] = 205;
		}
		for (int c = 0; c < 150; c++)
		{
			x[39][c] = 205;
		}
		x[0][0] = 201;
		x[0][149] = 187;
		x[39][0] = 200;
		x[39][149] = 188;
		x[4][0] = 186;
		x[4][149] = 186;
		x[20][68] = 87;
		x[20][69] = 73;
		x[20][70] = 78;
}
void cloud1(int rcl, int ccl, char x[][600]) {
	x[rcl][ccl] = 95;
	x[rcl][ccl + 1] = 95;
	x[rcl + 1][ccl - 1] = 40;
	x[rcl + 1][ccl + 2] = 41;
	x[rcl + 1][ccl + 3] = 95;
	x[rcl + 1][ccl + 4] = 40;
	x[rcl][ccl + 5] = 95;
	x[rcl + 1][ccl + 6] = 41;
	x[rcl + 1][ccl + 7] = 95;
	x[rcl + 1][ccl - 2] = 95;
	x[rcl + 2][ccl - 3] = 40;
	x[rcl + 2][ccl - 2] = 95;
	x[rcl + 2][ccl + 2] = 95;
	x[rcl + 2][ccl + 7] = 95;
	x[rcl + 2][ccl + 8] = 41;
	x[rcl + 3][ccl - 1] = 40;
	x[rcl + 3][ccl] = 95;
	x[rcl + 3][ccl + 1] = 41;
	x[rcl + 3][ccl + 4] = 40;
	x[rcl + 3][ccl + 5] = 95;
	x[rcl + 3][ccl + 5] = 95;
	x[rcl + 3][ccl + 6] = 41;

}



void main()
{
	int i, k, fm = 0;
	int health = 5, rS = 23, cS = 150;
	int rE, cE, f = 0, chero = 3, rhero = 30;
	int rG = 21, cG = 310, fL = 0;
	int rb = 3, cb = 500, posR = 0, posC = 0;
	int rBOL[1000], cBOL[1000], fB[1000], iB=0;
	int fS = 3, fG = 3, fBoss = 10;
	rE = 32, cE = 34;
	char x[40][600];
	for (int i = 0; i < 1000; i++)
	{
		rBOL[i] = 0;
		cBOL[i] = 0;
		fB[i] = 0;
	}
	for (i = 0; i < 40; i++)
	{
		for (k = 0; k < 600; k++)
		{
			x[i][k] = ' ';
		}
	}
	char m;
	
	for (;;)
	{
		
		for (; !_kbhit();)
		{
			for (i = 0; i < 40; i++)
			{
				for (k = 0; k < 600; k++)
				{
					x[i][k] = ' ';
				}
			}

			draw_map(x, 0, 0);
			
			cloud1(1, 5, x);
			cloud1(2, 20, x);
			cloud1(1, 35, x);
			cloud1(3, 50, x);
			cloud1(2, 65, x);
			cloud1(3, 80, x);
			cloud1(1, 95, x);
			cloud1(2, 105, x);
			cloud1(3, 120, x);
			draw_fire_elevator(x, rE, cE);
			move_fire_elevator(x, rE, cE, f);
			gravity(x, rhero, chero);
			jump(x, rhero, chero, fm);
			draw_HUN_Ene(x, rS, cS, fS);
			draw_Ghorela(x, rG, cG, fG);
			draw_boss(x, rb, cb, fBoss);
			hero_elevator(x, rhero, chero, cE);
			draw_lazer(x, 1, 350, posR, posC);
			lazer(x, posR, posC, fL);
			for (i = 0; i < 1000; i++)
			{
				draw_bolits(x, rBOL, cBOL, fB, i);
				move_bolits(x, rBOL, cBOL, fB, m, rhero, chero, i, iB);
			}
			damage_boss(x, rb, cb, fBoss);
			damage_ghorela(x, rG, cG, fG);
			damage_skil(x, rS, cS, fS);
			damage(x, rhero, chero, health, rS, cS, rG, cG, rb, cb, fS,fG,fBoss);
			draw_cat(x, rhero, chero);
			print(x, chero);
			if (health == 0 || fBoss<=0)
			{
				break;
			}
		}
		if (health == 0)
		{
			gameover(x);
			printg(x);
			break;
		}
		if (fBoss <= 0)
		{
			winpage(x);
			printg(x);
			break;
		}
		m = _getch();
		move_cat(x, rhero, chero, m, fm, fL);
	}

}
