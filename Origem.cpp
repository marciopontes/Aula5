//Pavic Multithreading C++ - 2022
#include<iostream>
#include<thread>
using namespace std;

void marcioPontes() {
	printf ("Marcio, threads");

}
void call_from_thread() {
	cout << "Hello, Word from thread" << endl;

}
int main() {
	//Launch a thread
	thread marcio(marcioPontes);
	thread t1(call_from_thread);
		

	cout << "Hello, Word from CPU " << endl;

	// After Join
	marcio.join();
	t1.join();
	
	
	cout << "Hello, Word from CPU - after Join" << endl;
	return 0;
}