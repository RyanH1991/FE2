#include <iostream>
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

    //initialize the four class prototypes: Tank,fighter,mage,archer
    //no input, output is a dictionary of Units
    static map <string,Unit> InitClasses (){
      map <string,Unit> classes;
      classes["tank"] = Unit(10,1,1,"tank");
      classes["fighter"] = Unit(7,2,1, "fighter");
      classes["mage"] = Unit(3,3,1,"mage");
      classes["archer"] = Unit(6,2,1,"archer");

      //enemy classes
      classes["skelewarrior"] = Unit(4,4,1,"skelewarrior");
      classes["skelelock"] = Unit(2,3,1,"skelelock");
      classes["minotaur"] = Unit(13,2,1,"minotaur");
      classes["zombie"] = Unit(8,1,1,"zombie");
      classes["worm"] = Unit(2,1,1,"worm");
      classes["goblin"] = Unit(4,2,1,"goblin");
      classes["hobgoblin"] = Unit(8,4,1,"hobgoblin");
      classes["golem"] = Unit(5,3,1,"golem");

      return classes;
    }

    //make armies as rows of vectors. Each army is a vector of vectors.
    vector<vector<Unit>> friendlyArmy;

    vector<vector<Unit>> enemyArmy;

    static void displayBattlefield (todo){

    }

  int Main () {
    cout << "Testing Ground/n";
      //Unit first = new Unit(10,1,1);
      //Unit second = new Unit(13,1,1);
      var classes = InitClasses();
      /*Unit first = classes["tank"];
      Unit second = classes["fighter"];
      fight(first,second);*/
      Unit[,] battlefield = initBattlefield(classes);
      Console.WriteLine ("Friendly Army");
      Console.WriteLine (battlefield[0,0].name);
      Console.WriteLine (battlefield[0,1].name);
      Console.WriteLine (battlefield[1,0].name);
      Console.WriteLine (battlefield[1,1].name);

      //display battlefield


      //now make an enemy army



      return;
  }


}