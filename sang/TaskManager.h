#pragma once 
#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include "Task.h"
#include "Task.cpp"
#include <string>
#include <vector>
#include <iomanip>
#include <fstream> 
#include <sstream>
#include <algorithm>

// ? TaskManager có cần phải kế thừa class Task hay không? hay chỉ cần sử dụng class Task thôi?
class TaskManager : public Task {
private:
    std::vector<Task> tasks;

public:
    void add(Task task);

    void display() const;

    static void deletetask(TaskManager& taskmanager);

    static void edittask(TaskManager& taskmanager);

    static void readAFile(TaskManager& taskmanger);

    static void find(TaskManager taskmanager);

    static void findStatus(TaskManager taskmanager);

    static void sortTasksByPriority(TaskManager& taskmanger);

    static void AddTaskToSave(TaskManager& taskmanager);

    static void filter(TaskManager taskmanager);

    // static std::vector<Task> filerdeadline();
};

#endif