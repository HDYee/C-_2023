#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const int MIN_players = 9, MAX_player = 15;

    int players, teamSize, numTeam, leftOver;

    cout<<"How many players do you wish per team?\n";
    cout<<"(Enter a value in the range "<<MIN_players<<" - "<<MAX_player<<"): ";
    cin>>teamSize;

    while(teamSize < MIN_players || teamSize > MAX_player){
        cout<<"\nTeam size should be "<<MIN_players<<" - "<<MAX_player<<" players.\n";
        cout<<"How many players do you wish per team? ";
        cin>>teamSize;
    }

    cout<<"\nHow many players are available? ";
    cin>>players;

    while (players <= 0)
    {
        cout<<"Please enter a positive number  : ";
        cin >> players;
    }

    numTeam = players / teamSize;
    leftOver = players % teamSize;

    cout<<"\nThere will be "<<numTeam<<" teams with ";
    cout<<leftOver<<" players left over.\n";
  
    return 0;
}