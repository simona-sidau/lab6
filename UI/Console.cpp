//
// Created by user on 3/29/2022.
//

#include "../Domain/Rectangle.h"
#include "Run_Menu.h"
#include "option.h"
#include "../Repository/Repository.h"

using namespace std;


void console() {
    Rectangle r;
    bool consoleOn = true;
    char choice;
    Rectangles repo;

    while (consoleOn) {
        runMenu();
        choice = option();
        switch (choice) {
            case '1': {
                int sz = repo.get_size();
                cin >> r;
                repo.add(r);
                if (sz == repo.get_size()) {
                    cout << "Nu s-a putut adauga dreptunghiul" << '\n';
                }
                break;
            }
            case '2': {
                std::queue<Rectangle> q = repo.get_all();
                while (!q.empty()) {
                    cout << q.front() << '\n';
                    q.pop();
                }
                break;
            }
            case 'x': {
                consoleOn = false;
                break;
            }
            default: {
                std::cout << "Optiune gresita! Reincercati!" << std::endl;
            }
        }
    }
}