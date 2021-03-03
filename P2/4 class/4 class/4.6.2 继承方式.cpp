#include <iostream>
using namespace std;
 
// public ���ڿ��Է��ʣ� ������Է���
// protected  ���ڿ��Է��ʣ� ���ⲻ���Է���
// private  ���ڿ��Է��ʣ� ���ⲻ���Է���

class Dad {
public:
	int m_public;
	void public_fun() {
		cout << "this is public func in dad" << endl;
	}
protected:
	int m_protected;
	void protected_fun() {
		cout << "this is protected func in dad" << endl;
	}
private:
	int m_private;
	void private_fun() {
		cout << "this is private func in dad" << endl;
	}
};

// �̳еķ�ʽ��������class�п��Է��ʸ�class���г�Ա�����ķ�Χ
// �����Ժ��ַ�ʽ�̳и�class��private�ĳ�Ա���������޷����ʵ�

class PublicSon :public Dad {
public:
	void func() {
		cout << m_public << endl;
		cout << m_protected << endl;
		// cout << m_private << endl;
		public_fun();
		protected_fun();
		//private_fun();
	}

};


class ProtectedSon :protected Dad {
public:
	void func() {
		cout << m_public << endl;
		cout << m_protected << endl;
		// cout << m_private << endl;
		public_fun();
		protected_fun();
		//private_fun();
	}

};

class PrivateSon : private Dad {
public:
	void func() {
		cout << m_public << endl;
		cout << m_protected << endl;
		// cout << m_private << endl;
		public_fun();
		protected_fun();
		//private_fun();
	}
	int m_d;

};



int main463() {
	PublicSon s1;
	s1.m_public;
	s1.func();

	ProtectedSon s2;
	s2.func();
	// s2.m_public;

	PrivateSon s3;
	s3.func();
	
	cout << sizeof(s3) << endl;
	return 0;
}