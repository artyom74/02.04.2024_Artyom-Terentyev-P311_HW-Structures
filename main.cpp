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
        cout << "Выберите какой объект вы хотите заполнить и вывести в таблице: " << endl << "1) Обувь " << endl << "2) Видеоигра " << endl << "3) Оба объекта " << endl << "Ваш выбор - ";
        cin >> result;

    } while (result > 3 or result < 0);

    cout << "\n";

    return result;
}


void cloth_fill_info(Clothes& cloth) {

    cout << "Введите название пары обуви: ";
    cin >> cloth.name;

    cout << "Введите гендер (м/ж) : ";
    cin >> cloth.gender;

    cout << "Введите сезон: ";
    cin >> cloth.season;

    cout << "Введите размер: ";
    cin >> cloth.size;

    cout << endl;

}

void game_fill_info(VideoGame& game) {

    cout << "Введите название игры: ";
    cin >> game.game_name;

    cout << "Введите жанр игры: ";
    cin >> game.genre;

    cout << "Введите издателя игры: ";
    cin >> game.publisher;

    cout << "Введите продолжительность игры: ";
    cin >> game.duration;

    cout << "\n\n";

}


string cloth_to_string(Clothes cloth) {

    string result = "";

    result += "Размер -- " + to_string(cloth.size) + "\n";

    return result;
}

string game_to_string(VideoGame game) {

    string result = "";

    result += "Продолжительность игры -- " + to_string(game.duration) + "\n";

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

    cout << "Таблица с объектом(-ами):" << "\n\n";

    if (x == 1) cout << "Название пары обуви -- " << cloth.name << endl << "Гендер (м/ж) -- " << cloth.gender << "\n" << "Сезон -- " << cloth.season << "\n" << cloth_to_string(cloth) << endl;

    else if (x == 2)  cout << "Название игры -- " << game.game_name << endl << "Жанр игры -- " << game.genre << "\n" << "Издатель игры -- " << game.publisher << "\n" << game_to_string(game) << endl;

    else {

        cout << "Название вещи -- " << cloth.name << endl << "Гендер (м/ж) -- " << cloth.gender << "\n" << "Сезон -- " << cloth.season << "\n" << cloth_to_string(cloth) << "\n\n";
        cout << "Название игры -- " << game.game_name << endl << "Жанр игры -- " << game.genre << "\n" << "Издатель игры -- " << game.publisher << "\n" << game_to_string(game) << "\n\n";
    }




    return 0;
}
 
/*
Домашнее задание:

Написать структуры для хранения информации о


Одежде
* её названии
* гендеру (М, Ж, всем)
* сезону
* Размеру (или размеРАМ?)

Компьютерной игре
* Название
* Жанр
* Издатель
* Продолжительность (например, количество уровней и т.д.)

Написать функции для отображения этой информации в виде таблицы
Написать функции для заполнения структуры. Как будет передаваться структура?*/