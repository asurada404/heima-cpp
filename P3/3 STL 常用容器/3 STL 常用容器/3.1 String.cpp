#include <iostream>
#include <string>
using namespace std;

// string 构造函数
void test311() {
	string s1;
	cout << "s1: " << s1 << endl;
	const char* str = "hello world";
	string s2(str); // c_string 转换成string
	cout << "s2: " << s2 << endl;
	string s3(s2); // 拷贝构造
	cout << "s3: " << s3 << endl;
	string s4(10, 'c');
	cout << "s4: " << s4 << endl;

}

// string 赋值操作
void test312() {
	string str1;
	str1 = "hello world";
	cout << "str1 : " << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2 : " << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3 : " << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4 : " << str4 << endl;

	string str5;
	str5.assign("hello c++", 5);
	cout << "str5 : " << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6 : " << str6 << endl;

	string str7;
	str7.assign(5, 'x');
	cout << "str7 : " << str7 << endl;
}


// string拼接

void test313() {
	string s1 = "I";
	s1 += " LOVE YOU.";
	cout << "s1: " << s1 << endl;

	s1 += " : ";
	cout << "s1: " << s1 << endl;

	string s2 = "LOL.";
	s1 += s2;
	cout << "s1: " << s1 << endl;
	
	string str3 = "You";
	cout << "str3: " << str3 << endl;
	str3.append(" love ");
	cout << "str3: " << str3 << endl;
	str3.append("123456", 4);
	cout << "str3: " << str3 << endl;
	str3.append("123456", 4, 2);
	cout << "str3: " << str3 << endl;
}


// string 查找和替换

void test315() {
	string str1 = "12345678967";
	int pos = str1.find("67");
	if (pos == -1) {
		cout << " didn't find ." << endl;
	}
	else {
		cout << "pos = " << pos << endl;
	}

	int rpos = str1.rfind("67");
	if (rpos == -1) {
		cout << " didn't find ." << endl;
	}
	else {
		cout << "rpos = " << rpos << endl;
	}

}

// REPALCE
void test3152() {
	string s = "12345678";
	s.replace(1, 2, "ssssss");
	cout << "s: " << s << endl;
}

// 比较
void test316() {
	string s1 = "abc";
	string s2 = "abcd";
	string s3 = "eabs";
	cout << "s1 > s2 " << s1.compare(s2) << endl;
	cout << "s1 > s3 " << s1.compare(s3) << endl;
	cout << "s2 > s3 " << s2.compare(s3) << endl;
}

// 存取
void test317() {
	string s1 = "1234567";
	for (int i = 0; i < s1.size(); i++) {
		cout << s1[i] << " , ";
	}
	cout << endl;
	for (int i = 0; i < s1.size(); i++) {
		cout << s1.at(i) << " , ";
	}
	cout << endl;
	s1[3] = 'x';
	s1.at(1) = '-';
	for (int i = 0; i < s1.size(); i++) {
		cout << s1.at(i) << " , ";
	}

}

// 插入和删除

void test318() {
	string s1 = "12345678";
	cout << "s1: " << s1 << endl;
	s1.insert(1, "xxx");
	cout << "s1: " << s1 << endl;
	s1.erase(1, 3);
	cout << "s1: " << s1 << endl;

}

// sub string
void test319() {
	string s1 = "12345678";
	string ss1 = s1.substr(1, 3);
	cout << "s1: " << s1 << endl;
	cout << "ss1: " << ss1 << endl;



}

int main31() {
	//test311();
	//test312();
	//test313();
	//test315();
	//test3152();
	//test316();
	//test317();
	//test318();
	test319();
	return 0;
}