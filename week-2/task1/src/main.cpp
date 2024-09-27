#include <iostream>
using namespace std;


class User {
	private:
		string name;
	public:
		string getName(){
			return this->name;
		}
		void setName(string name){
			 this->name = name;
		}
};

int main(){

	User *user = new User();
	user->setName("Test User");
	cout << user->getName() << endl;
	delete user;
	return 0;
}
