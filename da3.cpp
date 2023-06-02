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
   cout<< l<<endl;
   cout<<t[i-5]<<endl;
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
        cout<<type_bat<<endl;
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
};




//int main
int main(){
    //vector bids
   vector<int> A(5);
   vector<string> team{"Chen", "Mum","Kol","Del","Ben"};
 
 
  // Print Strings stored in Vector
   for (int i = 0; i < team.size(); i++){
       std::cout <<team[i] << "\n";}
    

   int a;
   for (int j=0;j<5;j++){
       cin>>a;
       A.push_back(a);
   }
   solve(A,team);
}