#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 设置随机数种子
    srand(time(0));
    
    // 生成1-100之间的随机数
    int secretNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    
    cout << "欢迎来到猜数字游戏！" << "\n";
    cout << "我已经想了一个1到100之间的数字，你能猜出来吗？" << "\n";
    cout << "==============================================" << "\n";
    
    do {
        cout << "请输入你的猜测: ";
        cin >> guess;
        attempts++;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "??  请输入有效的数字！" << "\n";
            continue;
        }
        
        if (guess > secretNumber) {
            cout << "太大了！再试一次。" << "\n";
        } else if (guess < secretNumber) {
            cout << "太小了！再试一次。" << "\n";
        } else {
            cout << "恭喜你！猜对了！" << "\n";
            cout << "你用了 " << attempts << " 次尝试。" << "\n";
        }
        
        cout << "------------------------" << "\n";
        
    } while (guess != secretNumber);
    
    // 根据尝试次数给出评价
    if (attempts <= 5) {
        cout << " 你是猜数字大师！" << "\n";
    } else if (attempts <= 10) {
        cout << " 表现不错！" << "\n";
    } else {
        cout << " 继续努力，下次会更好！" << "\n";
    }
    
    return 0;
}
