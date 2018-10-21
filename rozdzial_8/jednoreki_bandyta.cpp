//
//  main.cpp
//  lab
//
//  Created by Stanislaw Czembor on 18/10/2018.
//  Copyright © 2018 Stanislaw Czembor. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    double seed = time(NULL);
    srand(seed);
    int i=1;
    
    cout<<"witaj w grze jednoreki bandyta, aby kontynuaowac nacisnij enter";
    cin.get();
    do{
        cin.get();
        int liczba1 =(rand()%7)+1;
        int liczba2 =(rand()%7)+1;
        int liczba3 =(rand()%7)+1;
        if(liczba1==liczba2 and liczba3==liczba1){
            cout<<liczba1<<liczba2<<liczba3<<endl;
            break;
        }
        else{
            cout<<liczba1<<liczba2<<liczba3<<endl;
        }
        i++;
        
    }while(1);
    
    cout<<"!!!WYGRANA!!!";
    cout<<"ilosc wykonanych losowan: "<<i<<endl;
    
    return 0;
}


    
    



