#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Užduoties struktūra
struct menuItemType {
    string menuItem;
    double menuPrice;
};

// Tik prototipai
void getData(menuItemType menuList[], int& count);
void showMenu(const menuItemType menuList[], int count);
void printCheck(const menuItemType menuList[], int count, const int orderQuantities[]);

int main() {
    setlocale(LC_ALL, "Lithuanian");

    menuItemType menuList[100];
    int n = 0;
    int kiekiai[100] = {0};

    cout << "Programa pradėta..." << endl;
    return 0;
}

// Tuščios funkcijos (paruoštos ateičiai)
void getData(menuItemType menuList[], int& count) {}
void showMenu(const menuItemType menuList[], int count) {}
void printCheck(const menuItemType menuList[], int count, const int orderQuantities[]) {}