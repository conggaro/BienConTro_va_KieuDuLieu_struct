#include <iostream>
using namespace std;

struct Person
{
    int id;
    string ten;
};

int main(){
    // tạo biến con trỏ
    Person *pointer;

    // cấp phát vùng nhớ 
    pointer = new Person[5];

    // thêm dữ liệu cho id
    for (int i = 0; i < 5; i++)
    {
        (*(pointer + i)).id = i;
    }

    // thêm dữ liệu cho tên
    (*(pointer + 0)).ten = "Nguyen Van A";
    (*(pointer + 1)).ten = "Nguyen Van B";
    (*(pointer + 2)).ten = "Nguyen Van C";
    (*(pointer + 3)).ten = "Nguyen Van D";
    (*(pointer + 4)).ten = "Nguyen Van E";

    // hiển thị
    for (int i = 0; i < 5; i++)
    {
        cout << (*(pointer + i)).id << "\t" << (*(pointer + i)).ten << "\n";
    }

    // thu hồi vùng nhớ
    delete[] pointer;

    return 0;
}