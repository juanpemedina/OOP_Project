#ifndef Video_h
#define Video_h

#include <iostream>
#include <string>
#include <vector>
// #include "Episode.h"

using namespace std;

class Video{
protected:
/* data */
    string duration;
    string id;
    string name;
    int rating;
    string genre;
public:
/* methods */
  Video();
  Video(string,string,string,string,int);
  virtual void showRating()=0;
  virtual void printInfo();
  void setRating(int);
  string getId();
  string getName();
  string getGenre();
  string getDuration();
  int getRating();
};

#endif /* Video_h */