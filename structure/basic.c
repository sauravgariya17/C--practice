#include<stdio.h>
int main(){
    struct pokemon{
    int hp;
    int attack;
    int speed;
    };
    struct pokemon pikachu;
    pikachu.hp=50;
    pikachu.attack=100;
    pikachu.speed=60;
     printf("%d",pikachu.attack);
     
    return 0;
}