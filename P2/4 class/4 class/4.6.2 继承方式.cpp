#include <iostream>
using namespace std;
 
// public 类内可以访问， 类外可以访问
// protected  类内可以访问， 类外不可以访问
// private  类内可以访问， 类外不可以访问

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

// 继承的方式决定了子class中可以访问父class的中成员变量的范围
// 不管以何种方式继承父class中private的成员变量都是无法访问的

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