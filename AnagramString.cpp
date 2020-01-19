#include <iostream>
#include <string>
#include<algorithm>

using namespace std;
bool isAnagram(string str1, string str2)
{
	if(str1.size() != str2.size())
	return false;
	
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());
	for(int i=0; i<str1.length(); i++)
	{
		if(str1[i]!=str2[i])
		return false;
	}
	
	return true;
	
}


int main()
{
	string str1, str2;
	
	cout<<"enter two strings to check if they are anagrams or not: "<<endl;
	cout<<"enter first string: ";
	cin>>str1;
	cout<<"enter second string: ";
	cin>>str2;
	
	if(isAnagram(str1,str2))
	cout<<"Anagram";
	else
	cout<<"not anagram";
}
