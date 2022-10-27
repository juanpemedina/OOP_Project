#include "Video.h"

#include <iostream>
#include <string>
#include <vector>
// #include "Episode.h"
using namespace std;

Video::Video() {
    id="";
    name="";
    genre="";
    duration="";
    rating=0;

}
Video::Video(string idV,string nameV,string genreV,string durationV,int ratingV) {
    id=idV;
    name=nameV;
    genre=genreV;
    duration=durationV;
    rating=ratingV;
}
void Video::printInfo(){
  cout<<name<<"Episode";
}
//setters
void Video::setRating(int a){
  rating=a;
}
//getters
string Video::getId(){
  return id;
}
string Video::getName(){
  return name;
}
string Video::getGenre(){
  return genre;
}
string Video::getDuration(){
  return duration;
}
int Video::getRating(){
  return rating;
}


