#include<iostream>
#include<fstream>
using namespace std ;
ifstream f("bac.in");
ofstream g("bac.out");
int p(int &n,int c ){
int copie,p;
copie=0;
p=1;
while(n>0){
    if(n%10!=c){
        copie=n%10*p+copie;
        p=p*10;

    }
    n=n/10;


}
n=copie;


}
int main (){
int a ;
while(f>>a){
    int i ;
    for(i=1;i<=9;i=i+2)
        p(a,i);
    if(a!=0)
        g<<a<<" ";
}
 return 0;
}



































