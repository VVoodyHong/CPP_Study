//4��-17 ostream.cpp   4.7 C++ file �����
#include <iostream>
#include <fstream>
using namespace std;
void main() {
    char ch;
    fstream file;                   // �б� ���� �ٵǴ� ���� ��Ʈ��
    char filename[10];
    cout <<"File name = "<<flush;
    cin >> filename;
    file.open(filename, ios::in);   // �б� ���� ����
    file.unsetf(ios::skipws);
    while (1) {
        file >> ch;
        if (file.fail()) break;
        cout << ch;
    }
    file.close();
	system("pause");
}

// geodb : 4.7 C++ Standard I/O 22page �ҽ� �ణ ����
//int main()
//{
//	ifstream infile;
//	ofstream outfile;
//	char x;	// ���翡�� int�� �Ǿ� �ִµ� infile���� >> ������ �۵�����. char�� �ٲٸ� ��.
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
