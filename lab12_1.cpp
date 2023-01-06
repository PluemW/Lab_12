#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int ran;
string grade;
int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    ran = rand()%9;
    if(ran == 0) grade="A";
    else if(ran == 1) grade="B+";
    else if(ran == 2) grade="B";
    else if(ran == 3) grade="C+";
    else if(ran == 4) grade="C";
    else if(ran == 5) grade="D+";
    else if(ran == 6) grade="D";
    else if(ran == 7) grade="F";
    else if(ran == 8)grade="W";
    else grade = "Error";
    cout << "You will get "<<grade<<" in this 261102.";
}