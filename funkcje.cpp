#include "funkcje.h"

using namespace std;


int odleglosc(int x1, int y1, int x2, int y2)
{
    double dx, dy;

    dx=x1-x2;
    dy=y1-y2;

    return sqrt(dx*dx+dy*dy);
}

long long iloczynwektorowy(long long a,long long b,long long c,long long d, long long e,long long f)
{
    long long iloczyn=a*d+c*f+e*b-e*d-c*b-a*f;
    return iloczyn;
}

bool przecinanie(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4)
{//funkcja sprawdza znaki poszczególnych wyznaczników macierzy
    long long war1, war2, znak1, znak2, znak3, znak4, d1,d2,d3,d4;
    d1=iloczynwektorowy(x1,y1,x2,y2,x3,y3);
    d2=iloczynwektorowy(x1,y1,x2,y2,x4,y4);
    d3=iloczynwektorowy(x3,y3,x4,y4,x1,y1);
    d4=iloczynwektorowy(x3,y3,x4,y4,x2,y2);
//okreœlenie znaków wyznaczników
if (d1<0)
{
    znak1=-1;
}else znak1=1;
if (d2<0)
{
    znak2=-1;
}else znak2=1;
if (d3<0)
{
    znak3=-1;
}else znak3=1;
if (d4<0)
{
    znak4=-1;
}else znak4=1;
//okreœlenie, czy znaki s¹ przeciwne
war1=znak1*znak2;
war2=znak3*znak4;
//dla linii stykajacych siê, funkcja zwraca 0
if (d1==0 || d2==0 || d3==0 || d4==0)
    return 0;
//jeœli oba znaki s¹ <0, funkcja zwraca 1, czyli
if (war1<0 && war2<0) //potwierdzenie
return true;
else
return false;
}

void przeciecie(vector<int>& linia1, vector<int>& linia2, int& xp,int& yp)
{
    double a1,a2,b1,b2,mianownik, licznik;
    int war;
    war=0;

    if ((linia1[2]-linia1[0])!=0)
    {
        licznik=linia1[3]-linia1[1];
        mianownik=linia1[2]-linia1[0];
        a1=licznik/mianownik;
        b1=linia1[1]-a1*linia1[0];
    }
    else
    {
        war=1;
    }
    if ((linia2[2]-linia2[0])!=0)
    {

        licznik=linia2[3]-linia2[1];
        mianownik=linia2[2]-linia2[0];
        a2=licznik/mianownik;
        b2=linia2[1]-a2*linia2[0];
    }
    else
    {
        war=2;
    }
    if (war==0)
    {
        licznik=b2-b1;
        mianownik=a1-a2;
        xp=licznik/mianownik;
        yp=a1*xp+b1;
    }
    if (war==1)
    {
        xp=linia1[0];;
        yp=a2*xp+b2;
    }
    if (war==2)
    {
        xp=linia2[0];
        yp=a1*xp+b1;
    }

}

int wiszace(vector<vector<int> >& linietopo)
{
    int war1, war2, war;
    war=0;

    for (int i=0; i<linietopo.size(); i++) //wybór linii do sprawdzenia
    {
        linietopo[i][5]=0;
        war1=war2=0;
        for (int j=0; j<linietopo.size(); j++) //wybór linii do porównania
        {
            if (i!=j)
            {
                if (linietopo[i][0]==linietopo[j][0] && linietopo[i][1]==linietopo[j][1])
                {
                    war1++;
                }
                if (linietopo[i][0]==linietopo[j][2] && linietopo[i][1]==linietopo[j][3])
                {
                    war1++;
                }
                if (linietopo[i][2]==linietopo[j][0] && linietopo[i][3]==linietopo[j][1])
                {
                    war2++;
                }
                if (linietopo[i][2]==linietopo[j][2] && linietopo[i][3]==linietopo[j][3])
                {
                    war2++;
                }
            }
        }

        if (war1==0)
        {
            linietopo[i][5]=1;
           // w1++;
        }
        if (war2==0)
        {
            linietopo[i][5]=2;
            //w1++;
        }
        if (war1==0 && war2==0)
        {
            linietopo[i][5]=3;
           // w2++; w1--;w1--;
        }
    }

    for (int i=0; i<linietopo.size(); i++)
        if (linietopo[i][5]==1 || linietopo[i][5]==2 || linietopo[i][5]==3)
            war++;

    return war;
}

void wyborpkt(vector<vector<int> >& linie, vector<vector<int> >& punkty)
{
    vector<int> pusty;
    int war1, war2;

    punkty.clear();

    punkty.resize(1); //okreslenie wymiarów tabeli ze wspó³rzêdnymi linii
    for(int i=0; i<punkty.size(); i++)
        punkty[i].resize(5);
    punkty.pop_back();

    pusty.resize(2);

    pusty[0]=linie[0][0];
    pusty[1]=linie[0][1];
    punkty.push_back(pusty);
    pusty[0]=linie[0][2];
    pusty[1]=linie[0][3];
    punkty.push_back(pusty);


    for (int i=1; i<linie.size(); i++)
    {
        war1=war2=0;
        for (int j=0; j<punkty.size(); j++)
        {
            if (linie[i][0]!=punkty[j][0] || linie[i][1]!=punkty[j][1])
            {
                war1++;
            }
            if (linie[i][2]!=punkty[j][0] || linie[i][3]!=punkty[j][1])
            {
                war2++;
            }
        }

        if (war1==war2 && war1>0 && war1==punkty.size())
        {
            pusty[0]=linie[i][0];
            pusty[1]=linie[i][1];
            punkty.push_back(pusty);

            pusty[0]=linie[i][2];
            pusty[1]=linie[i][3];
            punkty.push_back(pusty);
        }

        if (war1==punkty.size())
        {
            pusty[0]=linie[i][0];
            pusty[1]=linie[i][1];
            punkty.push_back(pusty);
        }
        if (war2==punkty.size())
        {
            pusty[0]=linie[i][2];
            pusty[1]=linie[i][3];
            punkty.push_back(pusty);
        }

    }

}

int azymut(int& xp, int& yp, int& xk, int& yk)
{
    double dx,dy,ddx,ddy,dxx,dyy,a;
    double c;
dx=xk-xp;
    dy=yk-yp;

ddx=dx;
ddy=dy;

dxx=ddx;
dyy=ddy;

    if(ddx<0)
    {
        ddx=-ddx;
    }

    if(ddy<0)
    {
        ddy=-ddy;
    }

    c=atan(ddy/ddx);
    c=c*(200/M_PI);

    if((dxx>0)&&(dyy>0))
    {
        a=c;
    }
        if((dxx<0)&&(dyy>0))
        {
            a=200-c;
        }
            if((dxx<0)&&(dyy<0))
            {
                a=200+c;
            }

                    if((dxx>0)&&(dyy<0))
                    {
                        a=400-c;
                    }


if (dxx==0){
    if (dyy>0)
        a=100;
            if (dyy<0)
                a=300;
    }
if (dyy==0){
    if (dxx>0)
        a=0;
            if (dxx<0)
                a=200;
}
return a*10000;

}

void parametry(double xp, double yp, double xk, double yk, double& A, double& B, double& C)
{
    if ((xk-xp)!=0)
    {
    A=(yk-yp)/(xk-xp);
    }
    else
    {
        A=-999999999999999999;
    }

    B=-1;

    if ((xk-xp)!=0)
    {
         C=-((yk-yp)*xp)/(xk-xp)+yp;
    }
    else
    {
        C=999999999999999999;
    }
}

double odlodpros(double x, double y, double A, double C)
{
    double d, licznik, mianownik;

    licznik=A*x-y+C;

    if (licznik<0)
        licznik=licznik*(-1);

    mianownik=sqrt(A*A+1);

    d=licznik/mianownik;

    return d;
}

string datap(int kwar, int rok, double stos)
{
    int dzien, miesiac;
    double ddzien, ddni;
    wxString sdzien, smiesiac, srok;
    wxDouble zmienna;
    string data;

    if (stos<1)
    {
        if (kwar==1) //pierwszy kwarta³
        {
           ddni=90;
           ddzien=ddni*stos;
           dzien=90-ddzien;
           if (dzien<=31 && dzien>0) //styczen
           {
               dzien=dzien;
               miesiac=1;
           }
           else
           {
                if (dzien<=59 && dzien>31) //luty
               {
                   dzien=dzien-31;
                   miesiac=2;
               }
               else
               if (dzien<=90 && dzien>59) //marzec
               {
                   dzien=dzien-59;
                   miesiac=3;
               }
           }

        }


        if (kwar==2) //drugi kwarta³
        {
           ddni=91;
           ddzien=ddni*stos;
           dzien=91-ddzien;
           if (dzien<=30 && dzien>0) //kwiecien
           {
               dzien=dzien;
               miesiac=4;
           }
           else
           if (dzien<=61 && dzien>30) //maj
           {
               dzien=dzien-30;
               miesiac=5;
           }
           else
           if (dzien<=91 && dzien>61) //czerwiec
           {
               dzien=dzien-61;
               miesiac=6;
           }
        }


        if (kwar==3) //trzeci kwarta³
        {
           ddni=92;
           ddzien=ddni*stos;
           dzien=92-ddzien;
           if (dzien<=30 && dzien>0) //lipiec
           {
               dzien=dzien;
               miesiac=9;
           }
           else
           if (dzien<=61 && dzien>30) //sierpien
           {
               dzien=dzien-31;
               miesiac=8;
           }
           else
           if (dzien<=92 && dzien>61) //wrzesien
           {
               dzien=dzien-62;
               miesiac=7;
           }
        }


        if (kwar==4) //czwarty kwarta³
        {
           ddni=92;
           ddzien=ddni*stos;
           dzien=92-ddzien;;
           if (dzien<=31 && dzien>0) //pazdziernik
           {
               dzien=dzien;
               miesiac=10;
           }
           else
           if (dzien<=61 && dzien>31) //listopad
           {
               dzien=dzien-31;
               miesiac=11;
           }
           else
           if (dzien<=92 && dzien>61) //grudzieñ
           {
               dzien=dzien-61;
               miesiac=12;
           }
        }
    }
    else
    {
        if (kwar==1) //czwarty kwarta³
        {
           dzien=1;
           miesiac=1;
        }

        if (kwar==2) //czwarty kwarta³
        {
           dzien=1;
           miesiac=4;
        }

        if (kwar==3) //czwarty kwarta³
        {
           dzien=1;
           miesiac=7;
        }

        if (kwar==4) //czwarty kwarta³
        {
           dzien=1;
           miesiac=10;
        }


    }

    zmienna=dzien;
    sdzien.Printf(wxT("%.0f"),zmienna);

    zmienna=miesiac;
    smiesiac.Printf(wxT("%.0f"),zmienna);

    zmienna=rok;
    srok.Printf(wxT("%.0f"),zmienna);


    data="";

    data+=sdzien;
    data+=".";
    data+=smiesiac;
    data+=".";
    data+=srok;

    return data;
}


string datak(int kwar, int rok, double stos)
{
    int dzien, miesiac;
    double ddzien, ddni;
    wxString sdzien, smiesiac, srok;
    wxDouble zmienna;
    string data;

    if (stos<1)
    {
        if (kwar==1) //pierwszy kwarta³
        {
           ddni=90;
           ddzien=ddni*stos;
           dzien=ddzien;
           if (dzien<=31 && dzien>0) //styczen
           {
               dzien=dzien;
               miesiac=1;
           }
           else
           {
                if (dzien<=59 && dzien>31) //luty
               {
                   dzien=dzien-31;
                   miesiac=2;
               }
               else
               if (dzien<=90 && dzien>59) //marzec
               {
                   dzien=dzien-59;
                   miesiac=3;
               }
           }

        }


        if (kwar==2) //drugi kwarta³
        {
           ddni=91;
           ddzien=ddni*stos;
           dzien=ddzien;
           if (dzien<=30 && dzien>0) //kwiecien
           {
               dzien=dzien;
               miesiac=4;
           }
           else
           if (dzien<=61 && dzien>30) //maj
           {
               dzien=dzien-30;
               miesiac=5;
           }
           else
           if (dzien<=91 && dzien>61) //czerwiec
           {
               dzien=dzien-61;
               miesiac=6;
           }
        }


        if (kwar==3) //trzeci kwarta³
        {
           ddni=92;
           ddzien=ddni*stos;
           dzien=ddzien;
           if (dzien<=31 && dzien>0) //lipiec
           {
               dzien=dzien;
               miesiac=9;
           }
           else
           if (dzien<=61 && dzien>31) //sierpien
           {
               dzien=dzien-31;
               miesiac=8;
           }
           else
           if (dzien<=92 && dzien>61) //wrzesien
           {
               dzien=dzien-62;
               miesiac=7;
           }
        }


        if (kwar==4) //czwarty kwarta³
        {
           ddni=92;
           ddzien=ddni*stos;
           dzien=ddzien;;
           if (dzien<=31 && dzien>0) //pazdziernik
           {
               dzien=dzien;
               miesiac=10;
           }
           else
           if (dzien<=61 && dzien>31) //listopad
           {
               dzien=dzien-31;
               miesiac=11;
           }
           else
           if (dzien<=92 && dzien>61) //grudzieñ
           {
               dzien=dzien-61;
               miesiac=12;
           }
        }
    }
    else
    {
        if (kwar==1) //czwarty kwarta³
        {
           dzien=31;
           miesiac=3;
        }

        if (kwar==2) //czwarty kwarta³
        {
           dzien=30;
           miesiac=6;
        }

        if (kwar==3) //czwarty kwarta³
        {
           dzien=30;
           miesiac=9;
        }

        if (kwar==4) //czwarty kwarta³
        {
           dzien=31;
           miesiac=12;
        }


    }

    zmienna=dzien;
    sdzien.Printf(wxT("%.0f"),zmienna);

    zmienna=miesiac;
    smiesiac.Printf(wxT("%.0f"),zmienna);

    zmienna=rok;
    srok.Printf(wxT("%.0f"),zmienna);


    data="";

    data+=sdzien;
    data+=".";
    data+=smiesiac;
    data+=".";
    data+=srok;

    return data;
}
