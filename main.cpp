#include <iostream>  
#include <string>  
using namespace std;


struct Clothes {

    string name;
    string gender;
    string season;
    int size;
};

struct VideoGame {

    string game_name;
    string genre;
    string publisher;
    int duration;

};


int menu() {

    int result;

    do {
        cout << "�������� ����� ������ �� ������ ��������� � ������� � �������: " << endl << "1) ����� " << endl << "2) ��������� " << endl << "3) ��� ������� " << endl << "��� ����� - ";
        cin >> result;

    } while (result > 3 or result < 0);

    cout << "\n";

    return result;
}


void cloth_fill_info(Clothes& cloth) {

    cout << "������� �������� ���� �����: ";
    cin >> cloth.name;

    cout << "������� ������ (�/�) : ";
    cin >> cloth.gender;

    cout << "������� �����: ";
    cin >> cloth.season;

    cout << "������� ������: ";
    cin >> cloth.size;

    cout << endl;

}

void game_fill_info(VideoGame& game) {

    cout << "������� �������� ����: ";
    cin >> game.game_name;

    cout << "������� ���� ����: ";
    cin >> game.genre;

    cout << "������� �������� ����: ";
    cin >> game.publisher;

    cout << "������� ����������������� ����: ";
    cin >> game.duration;

    cout << "\n\n";

}


string cloth_to_string(Clothes cloth) {

    string result = "";

    result += "������ -- " + to_string(cloth.size) + "\n";

    return result;
}

string game_to_string(VideoGame game) {

    string result = "";

    result += "����������������� ���� -- " + to_string(game.duration) + "\n";

    return result;
}


int main() {
    setlocale(LC_ALL, "ru");

    Clothes cloth;

    cloth.name;
    cloth.gender;
    cloth.season;
    cloth.size;

    VideoGame game;

    game.game_name;
    game.genre;
    game.publisher;
    game.duration;

    int x = menu();


    if (x == 1) cloth_fill_info(cloth);

    else if (x == 2) game_fill_info(game);

    else {
        cloth_fill_info(cloth);
        game_fill_info(game);
    }

    cout << "������� � ��������(-���):" << "\n\n";

    if (x == 1) cout << "�������� ���� ����� -- " << cloth.name << endl << "������ (�/�) -- " << cloth.gender << "\n" << "����� -- " << cloth.season << "\n" << cloth_to_string(cloth) << endl;

    else if (x == 2)  cout << "�������� ���� -- " << game.game_name << endl << "���� ���� -- " << game.genre << "\n" << "�������� ���� -- " << game.publisher << "\n" << game_to_string(game) << endl;

    else {

        cout << "�������� ���� -- " << cloth.name << endl << "������ (�/�) -- " << cloth.gender << "\n" << "����� -- " << cloth.season << "\n" << cloth_to_string(cloth) << "\n\n";
        cout << "�������� ���� -- " << game.game_name << endl << "���� ���� -- " << game.genre << "\n" << "�������� ���� -- " << game.publisher << "\n" << game_to_string(game) << "\n\n";
    }




    return 0;
}
 
/*
�������� �������:

�������� ��������� ��� �������� ���������� �


������
* � ��������
* ������� (�, �, ����)
* ������
* ������� (��� ��������?)

������������ ����
* ��������
* ����
* ��������
* ����������������� (��������, ���������� ������� � �.�.)

�������� ������� ��� ����������� ���� ���������� � ���� �������
�������� ������� ��� ���������� ���������. ��� ����� ������������ ���������?*/