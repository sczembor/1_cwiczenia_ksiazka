//
//  main.cpp
//  książka_cwiczenia
//
//  Created by Stanislaw Czembor on 06/10/2018.
//  Copyright © 2018 Stanislaw Czembor. All rights reserved.
//

#include <iostream>

using namespace std;

char plansza[3][3] ={'1','2','3','4','5','6','7','8','9'};
void pole();
char ruch2;
char ruch1;

int main()
{
    
    
    pole();
    for(int a = 1; a<10;a++){
        if(a%2==0){
            cout<<"player's 2 turn (X) : ";
            cin>>ruch2;
            switch(ruch2){
                case '1':
                    plansza[0][0] = 'X';
                    break;
                case '2':
                    plansza[0][1] = 'X';
                    break;
                case '3':
                    plansza[0][2] = 'X';
                    break;
                case '4':
                    plansza[1][0] = 'X';
                    break;
                case '5':
                    plansza[1][1] = 'X';
                    break;
                case '6':
                    plansza[1][2] = 'X';
                    break;
                case '7':
                    plansza[2][0] = 'X';
                    break;
                case '8':
                    plansza[2][1] = 'X';
                    break;
                case '9':
                    plansza[2][2] = 'X';
                    break;
            }
            pole();
        }
        else
        {
            cout<<"player's 1 turn (O) : ";
            cin>>ruch1;
            switch(ruch1){
                case '1':
                    plansza[0][0] = 'O';
                    break;
                case '2':
                    plansza[0][1] = 'O';
                    break;
                case '3':
                    plansza[0][2] = 'O';
                    break;
                case '4':
                    plansza[1][0] = 'O';
                    break;
                case '5':
                    plansza[1][1] = 'O';
                    break;
                case '6':
                    plansza[1][2] = 'O';
                    break;
                case '7':
                    plansza[2][0] = 'O';
                    break;
                case '8':
                    plansza[2][1] = 'O';
                    break;
                case '9':
                    plansza[2][2] = 'O';
                    break;
            }
            pole();
            
        }
        
        
    }
    
}
void pole()
{
    cout<<"     |     |     "<<endl;
    cout<<"  "<<plansza[0][0]<<"  |"<<"  "<<plansza[0][1]<<"  |"<<"  "<<plansza[0][2]<<"   "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<plansza[1][0]<<"  |"<<"  "<<plansza[1][1]<<"  |"<<"  "<<plansza[1][2]<<"   "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<plansza[2][0]<<"  |"<<"  "<<plansza[2][1]<<"  |"<<"  "<<plansza[2][2]<<"   "<<endl;
    cout<<"     |     |     "<<endl<<endl<<endl<<endl<<endl<<endl;
    
}






