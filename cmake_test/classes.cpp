#include <iostream>
using namespace std;

class Robot
{

    public:
    string name;
    int max_speed;
    int speed;

    void increase_speed(int speed_increase){
	speed = speed + speed_increase;
	if (speed > max_speed){
	     speed = max_speed;
	}
        cout << "The speed of " << name << " is " << speed << endl;
    }
};

int main(){
    Robot robot1;
    robot1.speed = 0;
    robot1.name = "robot1"; 
    robot1.max_speed=10;

    Robot robot2;
    robot2.speed = 0;
    robot2.name = "robot2"; 
    robot2.max_speed=20;

    robot1.increase_speed(20);
    robot2.increase_speed(20);

    return 0;

}
