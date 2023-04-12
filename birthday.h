#pragma once
class Birthday
{
private:
	int day;
	int month;
	int year;
public:
	Birthday(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	Birthday() : Birthday{ 01, 01, 1970 } {};
	Birthday(int day, int month, int year) : Birthday{ day, month, year } {};
};

