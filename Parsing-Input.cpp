#include <fstream>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
#include <typeinfo>
#include <stdio.h>
#include <string.h>
#include <sstream>
using namespace std;

int main()
{
    ifstream file("Test-Input.txt");

    // CONVERTING STRING TO INTEGER:
    string num_of_agents_string;
    std::string agent_info;
    int num_of_agents;
    getline(file, num_of_agents_string);
    num_of_agents = stoi(num_of_agents_string.c_str());
    // cout << num_of_agents << "\n";

    for (int i = 0; i < num_of_agents; i++)
    {
        getline(file, agent_info);
        // cout << agent_info << endl;

        int position1 = 0;
        int position2 = 0;
        vector<string> words;
        std::stringstream ss(agent_info);

        ss >> position1 >> position2;
        std::cout << "Agent#" << i + 1 << " is at (" << position1 << ", " << position2 << ")"
                  << "\n"
                  << "Says: ";
        while (ss >> agent_info)
        {
            words.push_back(agent_info);
        }
        for (string agent_info : words)
        {
            cout << agent_info << " ";
        }
        cout << endl;
    }
    return 0;
}
