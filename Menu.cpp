#include "Menu.h"

#include "Video.cpp"
#include "Movie.cpp"
#include "Episode.cpp"
#include "Serie.cpp"

#include <iostream>
#include <string>
#include <vector>
using namespace std;

Menu::Menu(){

}

void Menu::startMenu(){
    //Episode
    Episode ep1("season 1", "Episode 1");
    Episode ep2("season 1", "Episode 2");
    vector<Episode> eps0;
    eps0.push_back(ep1);
    eps0.push_back(ep2);
    Episode ep3("season 0", "Pilot");
    Episode ep4("season 1", "Next episode");
    Episode ep5("season 2", "Third episode");

    vector<Episode> eps1;
    eps1.push_back(ep3);
    eps1.push_back(ep4);
    eps1.push_back(ep5);

    //Movie
    Video *vid[12]; //Video *vid[12];
    vid[0]= new Movie("M000","Spider-Man: No Way Home","Action","2h 28min ",4);
    vid[1]= new Movie("M001","Spider-Man: Homecoming", "Action", "2h 13min",3);
    vid[2]= new Movie("M002", "The Godfather", "Drama", "2h 55min", 5);
    vid[3]= new Movie("M003","Scarface","Drama","2h min", 4);
    vid[4]= new Movie("M004","Sherlock Holmes","Mistery","1h 50min",3);
    vid[5]= new Movie("M005", "Arrival", "Mistery"," 1h 56min", 1);
    //Serie
    vid[6] = new Serie("S001", "Breaking Bad", "Drama"," 5 seasons ", 5, eps0);
    vid[7] = new Serie("S002", "Game of Thrones", "Drama"," 4 seasons ", 2,eps0);
    vid[8] = new Serie("S003", "Rick and Morty", "Action"," 3 seasons ", 3,eps1);
    vid[9] = new Serie("S004", "Prision Break", "Drama"," 5 seasons ", 4,eps1);
    vid[10] = new Serie("S005", "Stranger Things", "Action"," 4 seasons ", 0,eps0);
    vid[11] = new Serie("S006", "Grey's Anatomy", "Drama"," 3 seasons ", 5,eps1);


    //Menu ejec
    int rateIndx;
    while (menuOption!=0){
      cout<<endl<<"Welcome to the main menu"<<endl<<endl;
      
      do{
        cout<<"1. Load data file\n"<<"2. Show the videos in general with a certain rating or of a certain genre\n"<<"3. Show episodes of a certain series with a certain rating\n"<<"4. Show movies with a certain rating\n"<<"5. Rate a video\n"<<"0. Exit\n\n";
        cin >> menuOption;
        if (menuOption > 5 || menuOption < 0){cout<<"ENTER A VALID ANSWER"<<endl<<endl;}
        } while (menuOption > 5 || menuOption < 0);
        //option 1
        if (menuOption==1){cout<<"Esta funcion no se desarrollo"<<endl;}
        else if (menuOption==2){
          int alfa;
          cout<<"\n1.Show videos with a certain rating\n"<<"2.Show videos of a certain genre\n\n"; cin>>alfa;
          if (alfa==1){
            cout<<"\nShow videos rated (0-5) by: ";
            cin>>rateIndx; cout<<endl<<"Videos with the rating of "<<rateIndx<<endl;
            for(int i=0; i<12; i++){
              Video *current = vid[i];
              if (rateIndx==current->getRating()){ //
                cout <<  endl;
                current-> showRating(); cout<< endl;
              }                
            }
          }
          if (alfa==2){
            int beta;
            int genreMenu;
            string genreIndx;
            cout<<"\n List of genres:\n 1. Action\n 2. Drama\n 3. Mistery\n"; cin>> beta;
            
            if(beta==1){genreIndx="Action";} else if(beta==2){genreIndx="Drama";} else if(beta==3){genreIndx="Mistery";}
            cout<<endl<<"Videos of the genre "<<genreIndx<<endl;
            for(int i=0; i<12; i++){
              Video *current = vid[i];
              if (genreIndx==current->getGenre()){
                cout <<  endl <<  current-> getName() <<": ";
                cout<< current-> getGenre(); cout<< endl;
              }                
            }
          }
        }
          
        else if (menuOption==3){
        
          cout<<"Show episodes of series with a rating of: \n"; cin>>rateIndx; 
          cout<<"\nLooking for episodes in series with the rating of "<<rateIndx<<endl; cout<<"..."<<endl;
            for(int i=0; i<12; i++){
              Video *current = vid[i];
              if (rateIndx==current->getRating()){
                string x=current->getId();
                // cout<<current->id<<endl;
                // cout<<endl<< x[0];
                if (x[0]=='S'){
                  current -> printInfo(); 
                }
              }
            }
          


        }//
    
        else if (menuOption==4){
          cout<<"Show movies rated (0-5) by: \n";
          cin>>rateIndx; cout<<endl<<"Movies with the rating of "<<rateIndx<<endl;
          for(int i=0; i<12; i++){
            Video *current = vid[i];
            if (rateIndx==current->getRating()){
              string x=current->getId();
              // cout<<current->id<<endl;
              // cout<<endl<< x[0];
              if (x[0]=='M'){
                cout <<  endl <<  current-> getName() <<": ";
                current-> showRating(); cout<< endl;
              } 
            }                
          }
        }
        else if (menuOption==5){cout<<"Decide which one to change depending on the titles\n\n";
          for(int i=0; i<=11; i++){
            Video *current = vid[i];
            cout<< i <<") ";
            current-> showRating(); cout<< endl;         
          }
          int i; cin>>i;
          cout<<"Enter the new rating of the title #"<<i<<endl;
          int u; cin>>u;
          Video *current = vid[i];
          current-> setRating(u);
          current-> showRating(); cout<< endl;         
      
          
        }
        else{cout<<endl<<"Closing Menu.\n"<<"Have a great day\n";}
    }
}