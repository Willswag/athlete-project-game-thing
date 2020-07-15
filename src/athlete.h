/*
base class for athletes and equiptment
with child classes

*/
#include <cstring>
#include <iostream>

using namespace std;

class athlete{
  private:
    //base class stats for all athletes
    string name;//the athletes name
    bool gender;//0 for female 1 for male
    int strength;//how strong is the athlete based on lifting
    int speed;//how fast can they sprint
    int endurance;//how much pain can they endure ie long dist events
    int skill;//general coordination
    int duarability;//how injury prone are they
    double weight;//weight in pounds
    double height;//height in inches
    int sport_spec;//how good are they at their specific sport
    int exp = 0;// exp
  public:
    athlete athlete();
    athlete athlete(String name,int strength,int speed,int endurance, int skill,int duarability,double weight,double height);

    void setname(String name);
    void setStrength(int strength);
    void setSpeed(int speed);
    void setEndurance(int endurance);
    void setSkill(int skill);
    void setDurability(int duarability);
    void setWeight(double weight);
    void setHeight(double height)
    void setSport_secific(int sport_specif);
    void incrementExp(int exp_gain);
};

//ball and stick athletes
class football_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class basketball_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class baseball_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class hockey_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class soccer_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class lacrosse_player:private athlete{
  //todo: stats from games and functions to pop athlete paramas
};
class volleyball_player:private athlete{

};
class softball_player:private baseball_player{

};
class tennis_player:private athlete{

};
class golfer:private athlete{

};


//strength athletes
class powerlifter:private athlete{
    int max_bench;
    int max_squat;
    int max_deadlift;
    //todo functions to define strength from lifts
};
class strongman:private powerlifter{
  private:
  public:
};

//combat athletes
class wrestler:private athlete{

};
class boxxer:private athlete{};
class mma_fighter:private athlete{};

//endurance athletes
class cyclist:private athlete, private bike{
private:
  double func_power;

public:
    bike bicycle;
};
class mountain_biker: private cyclist{
private:
  int jump_skill;
public:
};
class swimmer:public athlete{
private:
  string main_stroke;
  int main_dist;
public:
};

class runner:private athlete, private shoes{
private:
public:
};

class triathlete: private cyclist, private swimmer, private runner){
public:
  int trans_skill
};


//gymnist and divers
class gymnist:private athlete{};
class diver:private diver, private swimmer{};

//equiptment classes
class bike{
    string make;
    string model;
    double weight;
    int gears;
    double ratios[gears];
    int grip_strenth
    int
};
class shoes{
  string typ;
  string brand;

};
class ball{
  double rad;
  double weight;
  string shape;
};
