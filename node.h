// Lawrence Scroggs CS202 04/06/19 Program1
// This file will hold the node class and the
// graph class the node class will hold information
// of the location of the drone and the graph which 
// is the racetrack for the drone.  This will also be
// the base class for both sets of drone and obstacle 
// allowing for shared functioniality between the sets

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;



class node{

  public:
    node();
    ~node();

  protected:

  private:
    int d_loc;
    int o_loc;
    class adjacent * adj_list;
    node * next;


};
class adjacent: public node{

  public:
    adjacent();
    ~adjacent();

  protected:

  private:

    node * head;

};
class graph: public adjacent{

  public:
    graph();
    ~graph();
  protected:

  private:

    adjacent ** graph_list;
    node * next;
    node * prev;

};
