#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class  Student{

public:
	void setName(string name) {
		this->name = name;
	}

	void setGroup(string group) {
		this->group = group;
	}

	void setStudentId(int studentId) {
		this->studentId = studentId;
	}

	void setAverageScore(float averageScore) {
		this->averageScore = averageScore;
	}

	string toString() {
		string g;
		g.append("Student name: ");
		g.append(name);
		g.append("\n"); 
		g.append("Student group: ");
		g.append(group);
		g.append("\n");
		g.append("Student Id: ");
		g.append(to_string(studentId));
		g.append("\n");
		g.append("Student Average Score: ");
		g.append(to_string(averageScore));
		g.append("\n");
		g.append("Student Birth Date: ");
		g.append(ctime(&timestamp));
		return g;
	}

	void setbirthDate(time_t timestamp) {
		this->timestamp = timestamp;
	}

	int getAge() {
		struct tm* now = localtime(&timestamp);
		return 2024 - 1900 - now->tm_year;
	}

	bool isExcellentStudent() {
		if (averageScore > 4.8) {
			return true;
		
		}

	}

private:
	time_t timestamp;
	string name;
	string group;
	int studentId;
	float averageScore;
};



time_t date(int year, int mon, int day) {

	struct tm datetime;
	time_t timestamp;

	datetime.tm_year = year - 1900;
	datetime.tm_mon = mon - 1;
	datetime.tm_mday = day;
	datetime.tm_hour = 12;
	datetime.tm_min = 30;
	datetime.tm_sec = 1;
	return mktime(&datetime);

	
}

int main()
{
	setlocale(LC_ALL, "RU");
	Student f;
	f.setbirthDate(date(2003, 4, 30));
	f.setAverageScore(5);
	f.setGroup("23Иб1б");
	f.setName("Ilya Ivannikov");
	f.setStudentId(1);
	cout << f.toString();
	cout << "Student Age: " << f.getAge() << endl;
	

	Student f2;
	f2.setbirthDate(date(2004, 2, 12));
	f2.setAverageScore(1);
	f2.setGroup("23Иб1б");
	f2.setName("Lesha Sotnikov");
	f2.setStudentId(1);
	cout << f2.toString();
	cout << "Student Age: " << f2.getAge() << endl;
	

	Student f3;
	f3.setbirthDate(date(2002, 6, 30));
	f3.setAverageScore(5);
	f3.setGroup("23Иб1б");
	f3.setName("Daniil Vikylov");
	f3.setStudentId(1);
	cout << f3.toString();
	cout << "Student Age: " << f3.getAge() << endl;



}
