//
//  main.cpp
//  książka_cwiczenia
//
//  Created by Stanislaw Czembor on 06/10/2018.
//  Copyright © 2018 Stanislaw Czembor. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;
void pierwiastki_kwadratowe(int a, int b, int c){
    double delta;
    delta = b*b -4*a*c;
    double pierwiatek= sqrt(delta);
    if (delta<0) {
        cout<<"brak rozwiazan"<<endl;
    }
    else{
        cout<<"x1="<<(-b - pierwiatek)/2*a<<endl;
        cout<<"x2="<<(-b + pierwiatek)/2*a<<endl;
    }
}
void kalkulator(int wybor, double a, double b){
    
    if (wybor==1)
        cout<<a<<"+"<<b<<"="<<a+b<<endl;
    else if (wybor ==2)
        cout<<a<<"-"<<b<<"="<<a-b<<endl;
    else if (wybor==3)
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    else if (wybor==4)
        cout<<a<<"/"<<b<<"="<<a/b<<endl;
    }
void piosenka(){
    for(int i =99; i>1; i--){
        cout<<i<<" bottles of beer on the wall, "<<i<<" bottles of beer. Take one down and pass it around - "<<i-1<<" bottles of beer on the wall.\n";
    }
    cout<<"1 bottle of beer on the wall, 1 bottle of beer. Take it down and pass it around - no more bottles of beer on the wall.\n";
}
void metoda_wyznacznikow(int a1, int b1,int c1, int a2,int b2, int c2){
        double wx, wy, w;
        w =a1*b2 -b1*a2;
        wx =c1*b2- b1*c2;
        wy =a1*c2 -c1*a2;
        if (w!=0) {
            cout<<"x="<<wx/w<<endl;
            cout<<"y="<<wy/w<<endl;
        }
        else{
            if (wx!=0 and wy!=0)
                cout<<"uklad sprzeczny"<<endl;
        
            else
                 cout<<"uklad oznaczony"<<endl;
        }
}
        
  

int main(){
    int wybor;
    cout<<"1.liczenie pierwiastków funkcji kwadratowej\n";
    cout<<"2.oblicznie równania liniowego\n";
    cout<<"3.kalkulator\n";
    cout<<"4.99 Bottles of beer\n";
    bool warunek =true;
    do{
        cout<<"wybierz: ";
        cin>>wybor;
        warunek = wybor!=1 and wybor != 2 and wybor !=3 and wybor != 4;
        if(wybor==1){
            int a,b,c;
            cout<<"podaj a,b,c: ";
            cin>> a;
            cin>> b;
            cin>> c;
            pierwiastki_kwadratowe(a, b, c);
        
        }
        else if (wybor==2){
            int a1,b1,c1,a2,b2,c2;
            cout<<"a1x +b1y =c1\n";
            cout<<"podaj wartości: ";
            cin>>a1;
            cin>>b1;
            cin>>c1;
            cout<<"a1x +b1y =c1\n";
            cout<<"podaj drugie wartości:";
            cin>>a2;
            cin>>b2;
            cin>>c2;
            metoda_wyznacznikow(a1, b1, c1, a2, b2, c2);
        
        }
        else if (wybor==3){
            int wybor;
            double a,b;
            cout<<"1.dodawanie\n";
            cout<<"2.odejmowanie\n";
            cout<<"3.mnozenie\n";
            cout<<"4.dzielenie\n";
            cout<<"wybierz opcje: ";
            cin>>wybor;
            cout<<"wprowadz liczby: ";
            cin>>a;
            cin>>b;
            kalkulator(wybor, a, b);
       
            
        }
        else if (wybor==4){
            piosenka();
        }
        
    }while(warunek);
    
}

 
    
    

