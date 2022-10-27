#include "Movie.h"

#include <iostream>
#include <string>
#include <vector>
using namespace std;


Movie::Movie() {

}
Movie::Movie(string idV,string nameV,string genreV,string durationV,int ratingV): Video(idV, nameV, genreV, durationV, ratingV) {
    
}
void Movie::showRating(){
    cout<< "The movie "<<name<<" has a rating of " <<rating<<"/5";
}
