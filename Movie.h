#ifndef Movie_h
#define Movie_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Movie:public Video {
private:
/* data */
public:
/* methods */
    Movie();
    Movie(string,string,string,string,int);
    void showRating();
    
};


#endif /* Movie_h */