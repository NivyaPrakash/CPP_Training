#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
#include<string>
#include<queue>
#include<fstream>
mutex mtx;
class task
{
	string name;
	int load;
public:
	task(string name,int load):name(name),load(load){}
	string getname()
	{
		return name;
	}
	int getload()
	{
		return load;
	}
	void execute() {
		this_thread::sleep_for(chrono::seconds(load));
	}
};
class Taskqueue
{
	queue<task> tasklist;
public:
	void executionTask(int cpu)
	{
		while (!tasklist.empty())
		{
			unique_lock<mutex>lock(mtx);
			if (tasklist.empty())
			{
				break;
			}
			task t = tasklist.front();
			tasklist.pop();
			cout << "CPU-" << cpu << " picked Task" << t.getname() << " (Load: " << t.getload() << ")" << endl;

			lock.unlock();

			t.execute();
			lock.lock();
			cout << "CPU-" << cpu << " finished Task" << t.getname() << endl;
			lock.unlock();
		}
	}

	void readTask(ifstream& infile)
	{
		string line, tname;
		int l;
		size_t pos1, pos2;
		while (getline(infile, line))
		{
			pos1 = line.find(':');
			tname = line.substr(0, pos1);
			pos2 = pos1 + 2;
			pos1 = line.find(' ', pos2);
			l = stoi(line.substr(pos1 + 1));
			//cout << tname << " " << l << endl;
			tasklist.emplace(tname, l);
		}
	}

	int readcpu(ifstream& infile)
	{
		string line;
		size_t pos;
		getline(infile, line);
		pos = line.find(":") + 2;
		cout << line.substr(pos);
		return stoi(line.substr(pos));
	}

};


int main()
{
	ifstream filein("input.txt");
	if (!filein){
		cout << "Error" << endl;
		return 0;
	}
	Taskqueue q;
	int c = q.readcpu(filein);
	q.readTask(filein);

	vector<thread> threadlist;
	for (int i = 1; i <= c; i++)
		threadlist.emplace_back(&Taskqueue::executionTask, &q, i);

	for (auto& t : threadlist) {
		if (t.joinable())
			t.join();
	}
}
