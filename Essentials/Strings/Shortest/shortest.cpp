#include <iostream>
using namespace std;
//Given a route of directions such as SNNNEWE give a shortest path to reaching the same location scuh as NNE
//The idea is as we read the route we are going to get the x and y axis 

int main(){
    char route[1000];
    cin.getline(route, 1000);
    int x = 0;
    int y = 0;
    for(int i = 0; route[i]!='\0';i++){
        if(route[i] == 'N'){
            y++;
        } else if (route[i] == 'S'){
            y--;
        } else if (route[i] == 'E'){
            x++;
        } else if (route[i] == 'W'){
            x--;
        }
    }
    cout << "Final x and y is " << x << ", " << y << "\n";

    //Now we can make cases for different quadrents the first quadrent would only move north and east 
    if (x>=0 and y>=0){
        while(y--){
            cout<<"N";
        }
        while(x--){
            cout<<"E";
        }
    }
    
    return 0;
}