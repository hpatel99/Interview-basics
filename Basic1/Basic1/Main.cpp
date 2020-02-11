#include <iostream>
#include <string>
using namespace std;

string Name[] = {"Nemo"};



void FindNemo(string arry[])
{
	for (size_t i = 0; i < arry->length(); i++)
	{
		if (arry[i] == "Nemo")
		{
			printf("Found Nemo!!");
		}
	}
}

int main()
{
	FindNemo(Name);
}
