#include <iostream>
#include <ctime>
using namespace std;
char getUserChoice();
char getComputerchoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;
    player = getUserChoice();
    cout << "Your choice";
    showChoice(player);
    computer = getComputerchoice();
    cout << "coumputer choice:";
    showChoice(computer);

    chooseWinner(player, computer);

    return 0;
}
char getUserChoice()
{
    char player;
    cout << "Rock-Paper-scissor game!\n";
    do
    {
        cout << "Choose one the following\n";
        cout << "***********************\n";
        cout << "r for rock\n";
        cout << "p for paper\n";
        cout << "s for scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerchoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
    return 0;
}
void showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << " Rock\n";
        break;
    case 'p':
        cout << " Paper\n";
        break;
    case 's':
        cout << " Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "its a tie\n";
        }
        else if (computer == 's')
        {
            cout << "you win\n";
        }
        else
        {
            cout << "you loose\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            cout << "you win\n";
        }
        else if (computer == 's')
        {
            cout << "you loose\n";
        }
        else
        {
            cout << "its a tie\n";
        }break;
    case 's':
        if (computer == 'r')
        {
            cout << "you win!!\n";
        }
        else if (computer == 's')
        {
            cout << "its a tie\n";
        }
        else
        {
            cout << "you loose\n";
        }break;
    }
}