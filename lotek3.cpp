#include <iostream>
#include <conio.h>
using namespace std;
class duze //do przechowywania duzych liczb
{
      public:
             short int licz[1001];
             duze();
             duze operator=(duze a);
             void zmien(short int a);
             void wyswietl();

                          
};
void duze::zmien(short int a) //zmienia ostatnie cyfry liczby na a
             {
             for(int i=1000;i>992;i--)
              {
             this->licz[i]=a;
               }
             }
duze ciag(duze max, duze limes, duze n, duze how);    //zwraca zwraca poszczególne liczby bêd¹ce n-t¹ kombinacj¹ z kolei
void wyzeruj(duze &a);
duze silnia(duze a);
duze newton(duze n, duze k); //Liczy symbol Newtona
duze toduze(int a);      //zmienia liczbê z int'a na duze
duze toduze2(unsigned long long int a);
duze przenies(duze a, int b);  //zmienia forme liczby z abc000.... na: ...000abc
duze x10(duze a); //mno¿y podan¹ liczbê przez 10
duze mnoznik(short int cyfra, duze liczba); //mno¿y podan¹ liczbe przez dan¹ cyfrê
short int iloraz(duze dzielna, duze dzielnik);   //dzieli dwie nieduze liczby
duze operator+(duze a, duze b);
duze operator+(duze a, int b);
duze operator-(duze a, duze b);
duze operator-(duze a, int b);
duze operator*(duze a, duze b);
duze operator/(duze a, duze b);
bool operator<(duze a, duze b);
bool operator>(duze a, duze b);
bool operator==(duze a, duze b);
int main()						/////////////		FUNKCJA MAIN!!!!!
{
    duze a, b, c, pom, pom1, pom2, pom3, liczba, *wsk, zero, jeden;
    long int x=1, y, z, ile;
    unsigned long long int w;
    b=toduze(y);
    a.licz[1000]=5;
    jeden.licz[1000]=1;
    while(1){
    cout<<"Podaj koniec przedzialu: "<<endl;
    cin>>y;
    cout<<"Ile liczb jest losowanych: "<<endl;
    cin>>ile;
    b=toduze(y);
    c=toduze(ile);
    pom2=b;do{    b=toduze(y);a.licz[1000]=5;c=toduze(ile);
    cout<<"Podaj liczbe z zakresu <1;";
    pom1=newton(b, c);pom1.wyswietl();cout<<">"<<endl;
    cin>>w;liczba=toduze2(w);
    pom=pom3;
    wsk=new duze[ile];
    for(int i=0;i<ile;i++)
    {c=c-1;
    do                           //pom- suma dotychczasowych wartosci symbolu Newtona
     {                           //pom1- maksymalna liczba oznaczaj¹ca uk³ad c liczb wœród wszystkich b
              wsk[i]=wsk[i]+1;
              b=b-1;
              pom3=pom;
              pom=pom+newton(b, c);
              if(liczba<pom || liczba==pom)
              {
              if(i==0 && wsk[i]>jeden){liczba=liczba-pom3;}
              else if(wsk[i]>jeden){liczba=liczba-pom3;}
              pom1=pom1-pom3;
               break;        
              }
     }while(pom<liczba);
     if(i>0){wsk[i]=wsk[i]+wsk[i-1];}
     wyzeruj(pom);wyzeruj(pom3);
     }// koñcówka FOR'a
     if(w==0)break;
    for(int i=0;i<ile;i++)
    {
            wsk[i].wyswietl();cout<<", ";
    }cout<<endl;}while(1);}
    getch();
}
void duze::wyswietl()
{
     int i=0;
     while(((this->licz[i])==0)&& i<1000){i++;}
     if(i==1000){cout<<this->licz[i];}else
     {for(;i<1001;i++)
     {if((i+1)%3==0){cout<<".";}cout<<this->licz[i];}}
     //{cout<<this->licz[i];}}
     
 }
 duze silnia(duze a)
 {
      duze zero, pom=a;
      if(a==zero){pom=pom+1;}
      else{
      a=a-1;
      for(duze i=a;i>zero;i=i-1)
      {
              pom=(pom*a);
              a=a-1;
      }}
      return pom;
 }
duze ciag(duze max, duze limes, duze n, duze how)
{
     duze pom, pom1;
     how=how-1;
     while(pom1<limes || pom1==limes)
     {
              pom=pom+1;
              max=max-1;
              pom1=pom1+newton(max, how);
              if(n<pom1 || n==pom1)break;
     }
     return pom;
}
 duze newton(duze n, duze k)
 {
      duze pom, pom1=n-k, pom2;
      if(n==k){pom.licz[1000]=1;return pom;}
      pom=silnia(n);
      pom1=silnia(k);
      pom2=silnia(n-k);
      pom=pom/pom1;
      pom=pom/pom2;
      return pom;
 }
 duze toduze(int a)
 {
      duze pom;
      int i=1, j=a, k=1;
      if(a<10){pom.licz[1000]=a;return pom;}
      else{
      while(i<a){i=i*10;k++;}
      while(k>=1)
      {
                 pom.licz[1001-k]=a/i;
                 a=a-(pom.licz[1001-k])*i;
                 i=i/10;
                 k--;
      }
      return pom;
      }
 }
 duze toduze2(unsigned long long int a)
 {
            duze pom;
      unsigned long long int i=1, j=a, k=1;
      if(a<10){pom.licz[1000]=a;return pom;}
      else{
      while(i<a){i=i*10;k++;}
      while(k>=1)
      {
                 pom.licz[1001-k]=a/i;
                 a=a-(pom.licz[1001-k])*i;
                 i=i/10;
                 k--;
      }
      return pom;
      }
 }
 duze x10(duze a)
 {
      duze pom;
      short int x, i=0;
      do{i++;}while(a.licz[i]==0);
      for(;i<=1000;i++)
      {
                       x=i-1;
                       a.licz[x]=a.licz[i];
      }
      a.licz[1000]=0;
      return a;
      
 }
 duze mnoznik(short int cyfra, duze liczba)
 {
      
      short int x=0, y, i=0;
      duze pom;
      do{i++;}while(liczba.licz[i]==0);
      if(cyfra==(-1)){liczba.licz[i]*=(-1);return liczba;}
      for(int a=1000;a>=i;a--)
      {
              pom.licz[a]= x + cyfra*(liczba.licz[a]);
              x=0;
              if(pom.licz[a]>=10)
              {
                                 do
                                 {
                                   pom.licz[a]-=10;
                                   x++;
                                 }while(pom.licz[a]>=10);
              }
      }
      pom.licz[i-1]=x;
      return pom;
 }
 void wyzeruj(duze &a)
 {
      for(int i=0;i<=1000;i++)
      {
              a.licz[i]=0;
      }
 }
 duze przenies(duze a, int b)
 {
      b--;
      duze pom;
      for(int i=1000;b>=0;i--)
      {
              pom.licz[i]=a.licz[b];
              b--;
      }
      return pom;
 }
 short int iloraz(duze dzielna, duze dzielnik)
 {
      short int pom=0;
      while(dzielnik<dzielna || dzielnik==dzielna)
      {
         dzielna= dzielna - dzielnik;
         pom= pom+1;
      }
      return pom;
 }
duze::duze() // KONSTRUKTOR
{
      for(int i=0;i<1001;i++)
      {
              licz[i]=0;
      }
}
bool operator<(duze a, duze b)  //MNIEJSZOŒÆ (prze³adowanie operatora)
{
     int x=0, y=0;
     for(;a.licz[x]==0;x++);
     for(;b.licz[y]==0;y++);
     if(x>y) return true;
     else if(x<y) return false;
     else
     {
         for(;x<=1000;x++)
         {
                          if(a.licz[x]<b.licz[x]) return true;
                          else if(a.licz[x]>b.licz[x]) return false;
         }
     }
     return false;
}
bool operator>(duze a, duze b) //WIÊKSZOŒÆ (prze³adowanie operatora)
{
     short int i=0, j=0;
     while(a.licz[i]==0)i++;
     while(b.licz[j]==0)j++;
     if(i>j)return false;
     else if(i<j)return true;
     else
     {
         while(i<=1000)
         {
                       if(a.licz[i]>b.licz[i])return true;
                       else if(a.licz[i]<b.licz[i])return false;
                       i++;
         }
         return false;
     }
}
bool operator==(duze a, duze b)  //RÓWNOŒÆ (prze³adowanie operatora)
{
     short int i=0, j=0;
     while(a.licz[i]==0 && i<=1000){i++;}
     while(b.licz[j]==0 && j<=1000){j++;}
     if(i!=j){return false;}
     while(i<=1000)
     {
                   if(a.licz[i] != b.licz[i])return false;
                   i++;
     }
     return true;
}
duze operator+(duze a, duze b)  //DODAWANIE (prze³adowanie operatora)
{
     short pom=0;
     duze finish;
     for(int i=1000;i>=0;i--)
     {
             if((a.licz[i]+b.licz[i]+pom)>=10)
             {
                //pom=(a.licz[i] + b.licz[i])/10;
                finish.licz[i]=(a.licz[i] + b.licz[i] + pom)-10;
                pom=1;
             }else
             {
                  finish.licz[i] = a.licz[i] + b.licz[i] + pom;
                  pom=0;     
             }
     }  
     return finish;   
}
duze operator+(duze a, int b)    //prze³adowanie funkcji
{
     duze pom;
     int i=1, j=10, k=0;
     short int *wsk;
     while(a.licz[k]==0)k++;
     while(b>=j)
     {
        j=j*10;
        i++;
     }
     j=j/10;
     wsk=new short int [i];
     for(int x=0;x<i;x++)wsk[x]=0;
     for(int x=0;x<i;x++)
     {
             while(b>=j){b-=j;pom.licz[1001-i+x]+=1;}
             j/=10;
     }
     pom= pom+a;
     return pom;     
}
duze operator-(duze a, duze b)   //ODEJMOWANIE (prze³adowanie operatora)
{
     duze pom;
     short int x=1, d, i=0, j=0;
     if(a<b){pom=a;a=b;b=pom;x=-1;}
     while(a.licz[i]==0){i++;}
     while(b.licz[j]==0){j++;}
     for(int c=1000;c>=j;c--)
     {
             d=c-1;
             if(b.licz[c]>a.licz[c])
             {
                       while(a.licz[d]==0)d--;
                       a.licz[d]=a.licz[d]-1;d++;
                       while((a.licz[d]==0) && d<c){a.licz[d]=9;d++;}
                       a.licz[c]=a.licz[c]+10;
             }
             a.licz[c]=a.licz[c] - b.licz[c];
     }
     return a;
}
duze operator-(duze a, int b) //prze³adowanie funkcji
{
     short int i=1, j=0, k=0, x;
     duze pom;
     while(b>=i){i*=10;j++;}
     i=i/10;
     while(b>0)
     {
           x=b/i;
           pom.licz[1001-j+k]=x;
           b=b-x*i;
           k++;i=i/10;
     }
     pom=a-pom;
     return pom;
}
duze duze::operator=(duze a)  //PRZYPISANIE (prze³adowanie operatora)
{
     
     for(int i=0;i<1001;i++)
     {
             licz[i]=a.licz[i];
     }
     return a;
} 
duze operator*(duze a, duze b) // MNO¯ENIE (prze³adowanie operatora)
{
     duze *wsk, finish;
     duze pom;
     short int i=0;
     if(b<a)
     {
            pom=a; a=b; b=pom;
     }
     do{i++;}while(a.licz[i]==0);
     wsk=new duze[1001-i];
     short int y=0;
     for(short int x=1000;x>=i;x--)
     {
               wsk[1000-x] = mnoznik(a.licz[x], b);
     }
     for(short int x=0;x<1001-i;x++)
     {
               for(short int z=0;z<x;z++)
               {
                         wsk[x] = x10(wsk[x]);
               }
     }
     for(int c=0;c<1001-i;c++)
     {
             finish=finish + wsk[c];
     }
     delete wsk;
     return finish;
}
duze operator/(duze a, duze b) //DZIELENIE (prze³adowanie operatora)
{
     duze pom, pom1, pom2, finish;
     int x=0, c=0;
     while(a.licz[x]==0){x++;}
     for(int i=x;i<=1000;i++)
     {
          pom=x10(pom);
          pom.licz[1000]= a.licz[i];
          finish.licz[c]=iloraz(pom, b);
          pom=pom-mnoznik(finish.licz[c], b);
          c++;
     }
     finish= przenies(finish, c);
     return finish;
}

