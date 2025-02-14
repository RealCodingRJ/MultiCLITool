#include <iostream>
#include <string>
#include <list>
#include <tuple>
#include <thread>
#include <chrono>

struct Colors {

	int Age = 0; 
	std::string name;

	void Name() {
		std::cout << "Hello Ryan James" << "\n";
	}

	std::string Names(std::string Name) {
		return this->name = Name;
	}

	int Colors1(int Age) {
		return this->Age = Age;
	}



};

struct Command {

	std::string command;

	void SetCommand() {
		std::cout << "Command: " << this->command << "\n";
	}

	std::string Command1(std::string cmd) {
		return this->command = cmd;
	}
};

constexpr int resultx(int a) {
	return a;
}


struct SetName {

	std::string userName;

	std::string getName(std::string name) {
		return this->userName;
	}

	void getUserName() {
		std::cout << "User Name: " << this->userName << "\n";
	}
};

struct getCommands {

	std::string command;

	void listCommands() {
		
		std::tuple<std::string, std::string, std::string>
			t = { "/Math", "/Timer", "/Home" };
		auto [a, b, c] = t;

		std::cout << "1: " << a << "\n";
		std::cout << "2: " << b << "\n";
		std::cout << "3: " << c << "\n";

	}


};

struct Timer {

	int timer = 0;

	int TimerSetting(int time) {
		return this->timer = time;
	}

	int timerHours(int a) {
		return 60 * a;
	}



};

bool isSignedin = false;
bool isTimerSet = false;


int main() {



	SetName n;
	getCommands c;

	if (!isSignedin) {

		std::cout << "Enter Command: " << "\n";
		std::getline(std::cin, c.command);

		if (c.command == "/List") {
			c.listCommands();
		}

		if (c.command == "/Timer") {

			int i = 1;

			while(i > 0) {

				i += 1;
			
				std::this_thread::sleep_for(std::chrono::milliseconds(1000));
				//std::thread t;
				//t.join();
				
				Timer timer;
				std::cout << "Seconds: " << i << "\n";
				
				if (i == timer.timerHours(25)) {
					std::cout << "Done...";
				}
				else {
					timer.TimerSetting(i);
				}


			}


		}
	}



	system("pause > 0");
	return 0;
}