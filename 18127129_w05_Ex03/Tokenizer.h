#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Tokenizer
{
public:
	static vector<string> Parse(string line, string seperate)
	{
		vector<string> v;
		int startPos = 0;
		int foundPos = line.find(seperate, startPos);
		while (foundPos != string::npos)
		{
			int count = foundPos - startPos;
			string str = line.substr(startPos, count);
			v.push_back(str);
			startPos = foundPos + seperate.length();
			foundPos = line.find(seperate, startPos);
		}
		int count = line.length() - startPos;
		string str = line.substr(startPos, count);
		v.push_back(str);
		return v;
	}
};
