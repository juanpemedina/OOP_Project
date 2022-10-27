#include "Episode.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Episode::Episode() {
  season=" ";
  title=" ";
}
Episode::Episode(string seasonE,string titleE){
  season=seasonE;
  title=titleE;
}
ostream& operator<< (ostream& os, const Episode&dt){
  os << dt.season <<' '<< dt.title<<endl;
  return os;
}