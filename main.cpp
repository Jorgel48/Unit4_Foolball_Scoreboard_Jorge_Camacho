#include <iostream>
#include <string>

using namespace std;

class Scoreboard
{
    // instance variables - replace the example below with your own
    private: 
      int down;
      int toGo; 
      bool possession;
      
    /**
     * Constructor for objects of class Scoreboard
     */
     public:
        Scoreboard()
        {
            // initialise instance variables
            down = 0;
            toGo = 0; 
            possession = true; 
        }

      int getDown()
      {
          return down;
      }
      
    void setDown(int newDown)
      {
          this->down = newDown;
          
      }    
      
      bool getPossession()
      {
          return possession;
      }
      
      void setPossesion(bool newPossession)
      {
          this->possession = newPossession;
          
      }
};
    
class Team
{
  private:
    string name; 
    int score;
    string coachName;
    string cityName;
    int timeoutCount;
  public: 
    
    Team() //Default Constructor
    {
        name = "DefaultTeamName"; 
        score = 0; 
    }
    
    string getName()
    {
        return name;
    }
    
    void setName(string newName)
    {
        this->name = newName; 
    }
    
    int getScore()
    {
        return score;
    }
    
    void setScore(int newScore)
    {
        this->score = newScore; 
    }

    string getCoachName() {
      return coachName;
    }

    void setCoachName(string cn) {
      this->coachName = cn;
    }

    string getCityName() {
      return cityName;
    }

    void setCityName(string cn) {
      this->cityName = cn;
    }
    
    int getTimeoutCount() {
      return timeoutCount;
    }

    void setTimeoutCount(int tmO) {
      this->timeoutCount = tmO; 
    }
      
};
    
    //a function to build the scoreboard 
    void showMenu(Team t1, Team t2, Scoreboard board)
    {
        //Clear the screen
        for(int i=0; i < 1000; i++)
        {
            cout << "\n"; //show multiple lines
        }
        cout << "**************************************" << endl;
        cout << "Scoreboard" << endl;
        cout << "Home: " + t1.getName(); 
        cout << "\tVisitor: " + t2.getName() << endl; 
        cout << "\t" << t1.getScore();
        cout << " \t\t\t\t\t\t\t\ " << t2.getScore() << endl;
        cout << "Who has the ball: ";

        if(board.getPossession() == true)
        {
            cout << "Poss: Home" << endl; 
        }  
        else
        {
            cout << "Poss: Vistor" << endl; 
        }
       
       cout << "**************************************" << endl;
       cout << "Options" << endl; 
       cout << "A = update Team 1 Name: " << endl;
       cout << "B = update Team 2 Name: " << endl;
       cout << "C = update Team 1 Score: " << endl;
       cout << "D = update Team 2 Score: " << endl;
       cout << "F = update Team 1 Timeout: " << endl; 
       cout << "G = update Team 2 Timeout: " << endl;
       cout << "H = update Team 1 HomeCity: " << endl;
       cout << "I = update Team 2 HomeCity: " << endl;
       cout << "J = update Team 1 CoachName: " << endl;
       cout << "K = update Team 2 CoachName: " << endl;
       cout << "P = update Possesion: " << endl;
       cout << "E = Exit " << endl;
       cout << "Select Option from the menu: " << endl;
        
        
    }

int main() {
  //declare the instances of the classes we need for this work
         Team team1;
         Team team2;
         Scoreboard s; 
         char decision = '\0'; //null char to intialize a char 
         string newNameMain = ""; 
         int newScore = 0;
         int newPossMain = 0; 
               
         //do while loop around
         //show current scoreboard 
         //show menu editing scoreboard
         //write the respective functions that allow me to edit the scoreboard
         do
         {
             showMenu(team1, team2, s); //show menu
             cin >> decision;  //get decision 
             
             if(decision == 'e' || decision == 'E')
             {
                 cout << "Exit: Go Cowboys!!!" << endl;; 
                 
             }
             else if (decision == 'A' || decision == 'a')
             {
                 cout << "What new name would you like for Team1: ";
                 cin >> newNameMain; 
                 team1.setName(newNameMain); //set the new Team name
             }
            
             else if (decision == 'C' || decision == 'c')
             {
                 cout << "What new score would you like for Team1: ";
                 cin >> newScore; 
                 team1.setScore(newScore); //set the new Team name
             }
             else if (decision == 'D' || decision == 'd')
             {
                 cout << "What new score would you like for Team2: ";
                 cin >> newScore; 
                 team2.setScore(newScore); //set the new Team name
             }
             else if (decision == 'P' || decision == 'p')
             {
                 cout << "Who has possesion (1 = home, 2 = visitor)?";
                 cin >> newPossMain; //accept the choice from the user; Got it!!! Dr_T
                 if(newPossMain == 1)
                 {
                     s.setPossesion(true); 
                     cout << "Home has the ball" << endl; 
                 }
                 else
                 {
                     s.setPossesion(false);
                     cout << "Visitor has the ball" << endl;; 
                 }               
             }
            else if (decision == 'F' || decision == 'f') {
              int newTimeout = 0;
              cout << "What is the new timeout for team 1: ";
              cin >> newTimeout;
              team1.setTimeoutCount(newTimeout);
            }
            else if (decision == 'G' || decision == 'g') {
              int newTimeout = 0;
              cout << "What is the new timeout for team 2: ";
              cin >> newTimeout;
              team2.setTimeoutCount(newTimeout);
            }
            else if (decision == 'H' || decision == 'h'){
              string homeCity = " ";
              cout << "What is your City 1: ";
              cin >> homeCity;
              team1.setCityName(homeCity);
            }
            else if (decision == 'I' || decision == 'i'){
              string homeCity = " ";
              cout << "What is your chosen City";
              cin >> homeCity;
              team2.setCityName(homeCity);
            }
            else if (decision == 'J' || decision == 'j'){
              string CoachName = " ";
              cout << "What is the coach's name";
              team1.setCoachName(CoachName);
            }
            else if (decision == 'K' || decision == 'k'){
              string CoachName = " ";
              cout << "What is your coach's name";
              team2.setCoachName(CoachName);
            }
         }while(decision != 'e' && decision != 'E'); //DeMorgan's Law
}