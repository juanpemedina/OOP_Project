#include "Serie.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


Serie::Serie() {

}
Serie::Serie(string idV,string nameV,string genreV,string durationV,int ratingV, vector<Episode> ep): Video(idV, nameV, genreV, durationV, ratingV) {
  episodes=ep;
}
void Serie::showRating(){
    cout<< "The serie "<<name<<" has a rating of " <<rating<<"/5";
}
void Serie::printInfo(){
  cout<<"Episodes of "<< name<<": \n";
  for (int i=0; i<episodes.size();i++){
    int z=i+1;
    cout<<z<< ")" <<episodes[i];
  }
  cout<<endl;
  

}