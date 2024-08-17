#include "player.hpp"

player::take_damage(int damage){

}

player::is_alive(){
	if(this->hp == 0){
		return false;
	}
	else {
		return true;
	}
}

bool player::is_confused(){
	if (this->confusion == true){
		this->confusion = false;
		return true;
	}
	else {
		return false;
	}
}

void player::make_confused(){
	this->confusion = true;
}

