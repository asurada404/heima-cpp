#include <iostream>
using namespace std;

class Peer {
friend ostream& operator<<(ostream& out, Peer& p);
private:
	int m_a;
	int m_b;
public:
	Peer() {};
	Peer(int a, int b) {
		this->m_a = a;
		this->m_b = b;
	}
};


ostream& operator<<(ostream& out, Peer& p) {
	out << "a:" << p.m_a << ", b: " << p.m_b;
	return out;
}



int main452() {
	Peer p(10, 20);
	cout << p;

	return 0;
}