#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

class TodoList {
private:
    vector<string> tasks;

public:
    void addTask(const string& task) {
        tasks.push_back(task);
    }

    void displayTasks() {
        cout << "Tasks:" << endl;
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << endl;
        }
    }

    void removeTask(int index) {
        if (index >= 1 && index <= tasks.size()) {
            tasks.erase(tasks.begin() + index - 1);
        } else {
            cout << "Invalid task index!" << endl;
        }
    }
};

int main() {
    TodoList todoList;

    int choice;
    do {
        cout << "1. Add task" << endl;
        cout << "2. Display tasks" << endl;
        cout << "3. Remove task" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter task: ";
                cin.ignore();
                getline(cin, task);
                todoList.addTask(task);
                cout<<"tast added!!"<<endl;
                break;
            }
            case 2: {
                todoList.displayTasks();
                cout<<endl;
                break;
            }
            case 3: {
                int index;
                cout << "Enter index of task to remove: ";
                cin >> index;
                todoList.removeTask(index);
                cout<<"tast removed!!"<<endl;
                cout<<endl;
                break;
            }
            case 4: {
                cout << "Exiting..." << endl;
                break;
            }
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);

    return 0;
}
