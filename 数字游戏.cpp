#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // �������������
    srand(time(0));
    
    // ����1-100֮��������
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    
    cout << "��ӭ������������Ϸ��" << "\n";
    cout << "���Ѿ�����һ��1��100֮������֣����ܲ³�����" << "\n";
    cout << "==============================================" << "\n";
    
    do {
        cout << "��������Ĳ²�: ";
        cin >> guess;
        attempts++;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "??  ��������Ч�����֣�" << "\n";
            continue;
        }
        
        if (guess > secretNumber) {
            cout << "̫���ˣ�����һ�Ρ�" << "\n";
        } else if (guess < secretNumber) {
            cout << "̫С�ˣ�����һ�Ρ�" << "\n";
        } else {
            cout << "��ϲ�㣡�¶��ˣ�" << "\n";
            cout << "������ " << attempts << " �γ��ԡ�" << "\n";
        }
        
        cout << "------------------------" << "\n";
        
    } while (guess != secretNumber);
    
    // ���ݳ��Դ�����������
    if (attempts <= 5) {
        cout << " ���ǲ����ִ�ʦ��" << "\n";
    } else if (attempts <= 10) {
        cout << " ���ֲ���" << "\n";
    } else {
        cout << " ����Ŭ�����´λ���ã�" << "\n";
    }
    
    return 0;
}
