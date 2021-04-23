/*I've been thinking. I have a set amount of units in my army at the beginning of the campaign. They have names. They are not all balanced. Each battle requires sacrificing units. By the end, many units will have died.
Later on, my *strike* commands will allow for all kinds of special attacks. Healing, AoE, disable, backline hit.
For now, my proof of concept is just one battle, with people doing plain hits.
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std; 

/*int main() {
  std::cout << "Hello World!\n";
}*/


class Unit {
  public:
  int HP = 0;
  int ATK = 0;
  int SPD = 1;
  string name = "";
  Unit(int HP, int ATK, int SPD, string name){
    this->HP = HP;
    this->ATK = ATK;
    this->SPD = SPD;
    this->name = name;
  }
};



class MainClass {

    // initialize the four class prototypes: Tank,fighter,mage,archer
    // no input, output is a dictionary of Units

    //as of now this isn't used
    static map <string,Unit> InitClasses (){
      map <string,Unit> classes;
      classes.insert(pair<string,Unit>("tank",Unit(10,1,1,"tank")));
      classes.insert(pair<string,Unit>("fighter",Unit(7,2,1,"fighter")));
      classes.insert(pair<string,Unit>("mage",Unit(3,3,1,"mage")));
      classes.insert(pair<string,Unit>("archer",Unit(6,2,1,"archer")));

      //enemy classes
      
      classes.insert(pair<string,Unit>("skelewarrior",Unit(4,4,1,"skelewarrior")));
      classes.insert(pair<string,Unit>("skelelock",Unit(2,3,1,"skelelock")));
      classes.insert(pair<string,Unit>("minotaur",Unit(13,2,1,"minotaur")));
      classes.insert(pair<string,Unit>("zombie",Unit(8,1,1,"zombie")));
      classes.insert(pair<string,Unit>("worm",Unit(2,1,1,"worm")));
      classes.insert(pair<string,Unit>("goblin",Unit(4,2,1,"goblin")));
      classes.insert(pair<string,Unit>("hobgoblin",Unit(8,4,1,"hobgoblin")));
      classes.insert(pair<string,Unit>("golem",Unit(5,3,1,"golem")));
      
      return classes;
    }
    map<string,Unit> classes = InitClasses();
    
    // make armies as rows of vectors. Each army is a vector of vectors.
    // for now i premake army. Later, player composes it.
    
    vector<vector<Unit>> friendlyArmy;
    vector<vector<Unit>> enemyArmy;
    
    
    void initializeFriendlyArmy () {
      vector<Unit> row1;
      row1.push_back(Unit(10,1,1,"tank"));
      //row1.push_back(classes["tank"]);
      row1.push_back(Unit(3,3,1,"mage"));
      // row1.push_back(classes["mage"]);
      friendlyArmy.push_back(row1);
      vector<Unit> row2;
      row1.push_back(Unit(7,2,1,"fighter"));
      // row1.push_back(classes["fighter"]);
      row1.push_back(Unit(6,2,1,"archer"));
      // row1.push_back(classes["archer"]);
      friendlyArmy.push_back(row2);
    }
    
    void initializeEnemyArmy () {
      vector<Unit> row1;
      row1.push_back(classes["skelewarrior"]);
      row1.push_back(classes["skelelock"]);
      enemyArmy.push_back(row1);
      vector<Unit> row2;
      row1.push_back(classes["zombie"]);
      row1.push_back(classes["goblin"]);
      enemyArmy.push_back(row2);
    }

    static void displayBattlefield (){

    }

};

int main () {
  cout << "Testing Ground\n";
  Unit test1(10,1,1,"tank");
  cout << "hello";
  return 0;
}