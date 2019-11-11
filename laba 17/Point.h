#define _POINT_

#include <iostream>

struct Point {
	int x = 0;
	int y = 0;
	int z = 0;

	friend std::ostream & operator<<(std::ostream &out, const Point &other) {
		out << "(" << other.x << ";" << other.y << ";" << other.z << ")";
		return out;
	};

	friend std::istream& operator >>(std::istream &is, Point &other) {
		char *a = new char[128];
		is >> a;
		size_t len = strlen(a);
		a[len + 1] = '\n';
		size_t i = 0, k = 0;
		char *temp = new char(len - 3);
		int mass[3];
		for (size_t j = 0; j < 3; j++) {
			while (a[i] != ':'&&a[i] != '\n') {
				temp[k] = a[i];
				i++; k++;
			}
			i++;
			mass[j] = atoi(temp);
			memset(temp, NULL, len - 3);
			k = 0;
		}
		other.x = mass[0];
		other.y = mass[1];
		other.z = mass[2];
		return is;
	};

};
