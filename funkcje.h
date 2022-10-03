#ifndef FUNKCJE_H_INCLUDED
#define FUNKCJE_H_INCLUDED

#include <vector>
#include <fstream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <wx/string.h>

#define _USE_MATH_DEFINES
#include <cmath>

#define M_PI       3.14159265358979323846

using namespace std;

int odleglosc(int x1, int y1, int x2, int y2);
long long iloczynwektorowy(long long a,long long b,long long c,long long d, long long e,long long f);
bool przecinanie(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4);
void przeciecie(vector<int>& linia1, vector<int>& linia2, int& xp,int& yp);
int wiszace(vector<vector<int> >& linietopo);
void wyborpkt(vector<vector<int> >& linie, vector<vector<int> >& punkty);
int azymut(int& xp, int& yp, int& xk, int& yk);
void parametry(double xp, double yp, double xk, double yk, double& A, double& B, double& C);
double odlodpros(double x, double y, double A, double C);
string datap(int kwar, int rok, double stos);
string datak(int kwar, int rok, double stos);




#endif // FUNKCJE_H_INCLUDED
