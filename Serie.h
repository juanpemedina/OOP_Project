#ifndef Serie_h
#define Serie_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Serie:public Video {
private:
/* data */
    vector<Episode> episodes;
public:
/* methods */
    Serie();
    Serie(string,string,string,string,int, vector<Episode>);
    void showRating();
    void printInfo();

    
};


#endif /* Serie_h */