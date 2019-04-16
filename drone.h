// Lawrence Scroggs CS202 04/05/19 Program 1
// This file will hold the drone class of the program
// it will also hold the location and controller class.
// The parent class will be the location class this way 
// the drone is a location and the controller is a drone
// they controller will access the drone and drone will move 
// location

#include "node.h"


class location: public node{

  public:
    location();
    ~location();
  protected:
    void update_location();
    void scan();
    

  private:

    int drone_location;

};
class drone: public location{

  public:
    drone();
    ~drone();
  protected:
    void name_drone();

  private:
    char * drone_name;


};
class controller: public drone{

  public:
    controller();
    ~controller();
  protected:
    void move_forward();
    void move_back();
    void move_up();
    void move_down();

  private:


};
