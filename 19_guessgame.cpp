#include <iostream>
#include<ctime>
using namespace std;

int main() {
     
int num;
int guess;
int tries=0;
srand(time(NULL));
num = (rand()%100)+1;

do
{
    cout<<"Enter your guess between (1-100): ";
    cin>>guess;
    tries++;
    if(guess>num){
        cout<<"too high!\n";

    }
    else if (guess<num)
    {
        cout<<"too  low\n";

    }
    else{
        cout<<"correct!!! # in tries: "<<tries<<'\n';
    }
    
    
} while (guess!=num);


    return 0;
}