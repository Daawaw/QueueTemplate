#include <iostream>
#include "Queue.h"
#include "Point.h"
//
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//
//
//	std::cout << "-------------------------------------------" << std::endl;
//	std::cout << "-------------------INT---------------------" << std::endl;
//	std::cout << "-------------------------------------------" << std::endl;
//	Queue<int> myQueue(20);
//
//	std::cout << myQueue << std::endl;
//	//int *IntMass = new int[4];
//	//std::cout << "Введите числа: "<<std::endl;
//	/*for (int i = 0; i < 4; i++) {
//		std::cin >> IntMass[i];
//		myQueue.enqueue(IntMass[i]);
//	}*/
//	myQueue.enqueue(5);
//	myQueue.enqueue(8);
//	myQueue.enqueue(10);
//	myQueue.enqueue(67);
//	int k = 0;
//	std::cout << "Размер:" << myQueue.size() << std::endl;
//	try {
//		std::cout << myQueue << std::endl;
//		myQueue.dequeue();
//		myQueue.dequeue();
//
//
//
//
//		//std::cout << newQueue << std::endl;
//		
//		//myQueue = newQueue;
//		std::cout << "Очередь: " << std::endl;
//		std::cout << myQueue << std::endl;
//		std::cout<< "Элемент в очереди убран ->"<<myQueue.dequeue()<<std::endl;
//		std::cout 
//		myQueue.enqueue(54);
//		myQueue.enqueue(32);
//		myQueue.enqueue(2);
//		myQueue.enqueue(18);
//		myQueue.enqueue(20);
//		std::cout << "Очередь: " << std::endl;
//		std::cout << "COUT: " << myQueue << std::endl;
//		myQueue.dequeue();
//		std::cout << "Очередь: " << std::endl;
//		std::cout << "COUT: " << myQueue << std::endl;
//		myQueue.clear();
//		//std::cout << Queue2;
//	}
//	catch (std::exception &e) {
//		std::cerr << e.what() << std::endl;
//
//	}
//
	//std::cout << "-------------------------------------------" << std::endl;
	//std::cout << "-------------------CHAR--------------------" << std::endl;
	//std::cout << "-------------------------------------------" << std::endl;
	/*Queue<char> MyChar;
	char *CharMass = new char[5];
	std::cout << "Введите буквы: " << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cin >> CharMass[i];
		MyChar.enqueue(CharMass[i]);
	}
	MyChar.enqueue('l');
	MyChar.enqueue('o');
	MyChar.enqueue('h');
	MyChar.enqueue('!');
	std::cout << "Размер:" << MyChar.size() << std::endl;
	try {
		std::cout << MyChar << std::endl;
		MyChar.dequeue();
		MyChar.dequeue();


		std::cout << MyChar << std::endl;

		std::cout << std::endl << "COPY:" << std::endl;


		std::cout << "Очередь: " << std::endl;
		std::cout << MyChar << std::endl;
		std::cout << "Очередь: " << std::endl;
		std::cout << "COUT: " << MyChar << std::endl;
		MyChar.clear();
		std::cout << "Очередь: " << std::endl;
		std::cout << "COUT: " << MyChar << std::endl;
		MyChar.dequeue();
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;

	}*/
//	delete[] CharMass;
//	std::cout << "-------------------------------------------" << std::endl;
//	std::cout << "-------------------POINT-------------------" << std::endl;
//	std::cout << "-------------------------------------------" << std::endl;
//	Queue<Point> PointQueue;
//	Point *Point1 = new Point[3];
//	std::cout << "Введите point: " << std::endl;
//	for (int i = 0; i < 3; i++) {
//		std::cin >> Point1[i];
//		PointQueue.enqueue(Point1[i]);
//	}
//
//	try {
//		std::cout << "Размер:" << PointQueue.size() << std::endl;
//		std::cout << PointQueue << std::endl;
//		PointQueue.dequeue();
//		std::cout << "Очередь: " << std::endl;
//		std::cout << PointQueue << std::endl;
//		PointQueue.clear();
//		std::cout << "Очередь: " << std::endl;
//		std::cout << PointQueue << std::endl;
//		PointQueue.dequeue();
//
//
//	}
//	catch (std::exception &e) {
//		std::cerr << e.what() << std::endl;
//
//	}
//	delete[] Point1;
//	getchar();
//	getchar();
//
//	return 0;
//}

int main() {
	Queue<int> MyQueue(10);
	for (int i = 0; i < 10; i++) {
		MyQueue.enqueue(i);
		std::cout << MyQueue;
		std::cout << std::endl;
		std::cout << "--> " << "Size->" << MyQueue.size() << "||" << "Capacity->" << MyQueue.capacity() << std::endl;
	}
	std::cout << "------------------------------------------------------------DEQUEUE---------------------------------" << std::endl;
	try {
		for (int i = 0; i < 20; i++) {
			std::cout << MyQueue;
			std::cout << std::endl << "Element - >" << MyQueue.dequeue() << "--> " << "Size->" << MyQueue.size() << "||" << "Capacity->" << MyQueue.capacity() << std::endl;

		}
	}
	catch (std::exception&e) {
		std::cerr << e.what() << std::endl;
	}
	Queue<char> MyChar;
	char mass[] = { 'U', 'R', 'A' };
	std::cout << "Enter a elements: " << std::endl;
	for (int i = 0; i < 3; i++) {
		MyChar.enqueue(mass[i]);
		std::cout << MyChar;
		std::cout << std::endl;
		std::cout << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;
	}
	MyChar.enqueue('l');
	std::cout << MyChar;
	std::cout << std::endl;
	std::cout << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;
	MyChar.enqueue('o');
	std::cout << MyChar;
	std::cout << std::endl;
	std::cout << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;
	MyChar.enqueue('l');
	std::cout << MyChar;
	std::cout << std::endl;
	std::cout << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;
	MyChar.enqueue('!');
	std::cout << MyChar;
	std::cout << std::endl;
	std::cout << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;
	try {
		for (int i = 0; i < 20; i++) {
			std::cout << MyChar;
			std::cout << std::endl << "Element - >" << MyChar.dequeue() << "--> " << "Size->" << MyChar.size() << "||" << "Capacity->" << MyChar.capacity() << std::endl;

		}
	}
	catch (std::exception&e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << "============================================================POINT====================================" << std::endl;
	Queue<Point>QueueP;

		Point *Point1 = new Point[7];
		std::cout << "POINT: " << std::endl;
		for (int i = 0; i < 6; i++) {
			std::cin >> Point1[i];
			QueueP.enqueue(Point1[i]);
			std::cout << QueueP;
			std::cout << "--> " << "Size->" << QueueP.size() << "||" << "Capacity->" << QueueP.capacity() << std::endl;
		}
		std::cout << "------------------------------------------------------DEQUEUE---------------------------------" << std::endl;
		try {
			for (int i = 0; i < 10; i++) {
				std::cout << QueueP;
				std::cout << std::endl << "Element -> " << QueueP.dequeue() << "-->" << "Size -> " << QueueP.size() << "||" << "Capacity -> " << QueueP.capacity() << std::endl;
			}
		}
		catch (std::exception&e) {
			std::cerr << e.what() << std::endl;
		}

	getchar();
	getchar();

		return 0;
}