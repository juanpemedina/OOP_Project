#ifndef Episode_h
#define Episode_h

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Episode {
private:
    string season;
    string title;
public:
    Episode();
    Episode(string,string);
    friend ostream& operator<< (ostream& os, const Episode&dt);
};

#endif /* Episode_h */
