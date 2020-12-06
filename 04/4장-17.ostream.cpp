//4장-17 ostream.cpp   4.7 C++ file 입출력
#include <iostream>
#include <fstream>
using namespace std;
void main() {
    char ch;
    fstream file;                   // 읽기 쓰기 다되는 파일 스트림
    char filename[10];
    cout <<"File name = "<<flush;
    cin >> filename;
    file.open(filename, ios::in);   // 읽기 모드로 열기
    file.unsetf(ios::skipws);
    while (1) {
        file >> ch;
        if (file.fail()) break;
        cout << ch;
    }
    file.close();
	system("pause");
}

// geodb : 4.7 C++ Standard I/O 22page 소스 약간 수정
//int main()
//{
//	ifstream infile;
//	ofstream outfile;
//	char x;	// 교재에는 int로 되어 있는데 infile에서 >> 연산이 작동안함. char로 바꾸면 됨.
//
//	infile.open("./data.in");
//	if (infile.is_open())
//	{
//		outfile.open("./result.out");
//		while(infile >> x)
//		{
//			outfile << "input = " << x << endl;
//		}
//
//		infile.close();
//		outfile.close();
//	}
//	else
//	{
//		cout << "fail to open data.in" << endl;
//		system("pause");
//		return 1;
//	}
//
//	system("pause");
//}
