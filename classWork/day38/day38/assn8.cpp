#include<iostream>
#include<list>
#include<string>
#include<algorithm>
using namespace std;
std::list<string>tasks;


bool criticaltask(const string& task)
{
	return task.find("critical")!=string::npos;
}

void addTask(const string& task)
{
	if (criticaltask(task))
	{
		tasks.push_front(task);
	}
	else
	{
		tasks.push_back(task);
	}
}


void urgentTask(const string& task)
{
	tasks.push_front(task);
}




void removeTask(const string& task)
{
	auto it = find(tasks.begin(), tasks.end(), task);
	if (it != tasks.end())
	{
		tasks.erase(it);
	}
	
}


void displaytask()
{
	for (auto i :tasks)
		cout << i<<"->";

	cout << endl;
}


int main()
{
	addTask("PrepareReport");
	addTask("SubmitExpense");
	urgentTask(" ClientCall");
	addTask("FixBug");
	removeTask("SubmitExpense");
	displaytask();
	addTask("criticalDeployment");
	displaytask();


}