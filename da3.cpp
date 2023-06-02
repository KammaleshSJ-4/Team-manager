#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;


//auction function
void solve(vector<int> A,vector <string> t){
   int n = A.size();
   int i = max_element(A.begin(), A.end()) - A.begin();
   sort(A.begin(), A.end());
   int l = A[n - 1];
   
   cout<< "Maximum amount "<<l<<endl;
   cout<<"Bought by team"<<t[i-5]<<endl;
}
//player class
class player{
    public:
    string first_name;
    string last_name;
    string nation;
    int matches;
    
};

//batsman class
class batsman:public player{
    public:
    string type_bat;
    int runs;
    int balls_faced;
    double str_rate;
    double aver;
    void bat_calc(int runs,int matches,int balls_faced){
        aver=runs/matches;
        str_rate=runs/balls_faced;
    }
    
    void print_bat{
        cout<<first_name<<endl;
        cout<<last_name<<endl;
        cout<<nation<<endl;
        cout<<type_bat<<endl;
        cout<<matches<<endl;
        cout<<runs<<endl;
        cout<<aver<<endl;
        cout<<str_rate<<endl;
    }
};


//bowler class
class bowler:public player{
    public:
    int wickets;
    string type_bowl;
    int overs;
    int runs_given;
    int economy;
    void bowl_calc(int overs,int runs_given){
        economy=runs_given/overs;
    }
    void print_bowl{
        cout<<first_name<<endl;
        cout<<last_name<<endl;
        cout<<nation<<endl;
        cout<<type_bowl<<endl;
        cout<<matches<<endl;
        cout<<wickets<<endl;
        cout<<overs<<endl;
        cout<<economy<<endl;
    }
};


//allrounder
class allround:public player,public batsman,public bowler{
    public:
    int catches;
    void print_allround{
    	cout<<first_name<<endl;
        cout<<last_name<<endl;
        cout<<nation<<endl;
        cout<<type_bat<<endl;
        cout<<matches<<endl;
        cout<<runs<<endl;
        cout<<aver<<endl;
        cout<<str_rate<<endl;
        cout<<type_bowl<<endl;
        cout<<matches<<endl;
        cout<<wickets<<endl;
        cout<<overs<<endl;
        cout<<economy<<endl;
};




//int main
int main(){
    //vector bids
   vector<int> A(5);
   vector<string> team{"Chennai", "Mumbai","Kolkata","Delhi","Bengalore"};
 
 
  // Print Strings stored in Vector
  cout<<"The teams are:"<<endl;
   for (int i = 0; i < team.size(); i++){
       std::cout <<team[i] << "\n";}
   string player_type;
   cin>>player_type;
   if (player_type==" BATSMAN") {
       batsman p1;
       p1.get_bat();
       p1.calc_bat() ;
       p1.print_bat() ;
   else if (player_type=="BOWLER") {
      bowler p1;
      p1.get_bowl;
      p1.calc_bowl;
      p1.print_bowl;
   

   int a;
   cout<<"Please provide the bids of the player"<<endl;
   for (int j=0;j<5;j++){
       cin>>a;
       A.push_back(a);
   }
   solve(A,team);
   
}
