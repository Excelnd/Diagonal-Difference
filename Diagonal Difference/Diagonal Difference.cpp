// Diagonal Difference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int diagonalDiff(vector< vector<int> > &a) {
	int pd = 0, sd = 0;
	for(int i=0; i< a.size(); i++) pd += a[i][i];
	for (int i = a.size() - 1, j = 0; i >= 0 && j < a.size(); i--, j++) sd += a[i][j];
	return abs(pd - sd);
}


int main()
{
	int n;
	cin >> n;
	vector< vector<int> > a(n, vector<int>(n));
	for (int a_i = 0; a_i < n; a_i++) {
		for (int a_j = 0; a_j < n; a_j++) {
			cin >> a[a_i][a_j];
		}
	}
	cout << diagonalDiff(a);
	    return 0;
}

