#include <iostream>
#include <string>
using namespace std;

const int max_tasks = 50;

struct Task
{
    string data;
    bool completed;
};

Task tasks[max_tasks];
int task_count = 0;

void addTasks(const string &data)
{
    if (task_count < max_tasks)
    {
        tasks[task_count].data = data;
        tasks[task_count].completed = false;
        task_count++;
        cout << "New task added : " << data << endl;
    }
    else
    {
        cout << "The task list is full! Try deleting few tasks" << endl;
    }
}

void viewTasks()
{
    if (task_count == 0)
    {
        cout << "Task list is empty!" << endl;
        return;
    }

    for (size_t i = 0; i < task_count; i++)
    {
        cout << i + 1 << " . " << tasks[i].data << " [ " << (tasks[i].completed ? "Completed" : "Pending") << " ] " << endl;
    }
}

void markTasks(int index)
{
    if (index < 1 || index > task_count)
    {
        cout << "Invalid Task Number!" << endl;
        return;
    }

    tasks[index - 1].completed = true;
    cout << "Task is marked as Completed" << endl;
}

void deleteTask(int index)
{
    if (index < 1 || index > task_count)
    {
        cout << "Invalid Task Number!" << endl;
        return;
    }

    for (int i = index; i < task_count - 1; ++i)
    {
        tasks[i] = tasks[i + 1];
    }

    task_count--;
    cout << "Task deleted successfully!" << endl;
}

int main()
{
    int choice;
    string data;
    int index;

    while (true)
    {
        cout << "1.Add Tasks" << endl;
        cout << "2.View Tasks" << endl;
        cout << "3.Mark Tasks" << endl;
        cout << "4.Delete Tasks" << endl;
        cout << "5.Exit from To-Do List" << endl;
        cout << "--------------------------------------------------" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cin.ignore();
            cout << "Enter your Task description: " << endl;
            getline(cin, data);
            addTasks(data);
            break;

        case 2:
            viewTasks();
            cout << "--------------------------------------------------" << endl;
            break;

        case 3:
            cout << "Enter the task number you want to mark: " << endl;
            cin >> index;
            markTasks(index);
            break;

        case 4:
            cout << "Enter the task number to delete: " << endl;
            cin >> index;
            deleteTask(index);
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid Choice!" << endl;
        }
    }
return 0;
    
}
