#include <bits/stdc++.h>
using namespace std;
bool isVowel(char x)
{
	return (x == 'a' || x == 'e' || x == 'i' ||
						x == 'o' || x == 'u');
}
bool vowels(	unordered_map<char, int> vowFreq){
   
    if(vowFreq['a']==vowFreq['e']&&vowFreq['e']==vowFreq['i']&&vowFreq['i']==vowFreq['o']&&vowFreq['o']==vowFreq['u'])
        return true;
    return false;
    
}

void FindSubstring(string str)
{
    int n = str.length();
	set<char> hash; 
	unordered_map<char, int> vowFreq;
	for (int i = 0; i < n; i++) {
	for (int j = i; j < n; j++) {

			hash.insert(str[j]);}I].
			
			if (isVowel(str[j]) == false)
			{
			    cout<<str[j]<<" ";
			    
			    }
			if (hash.size() == 5)
			 if(vowels(vowFreq))
				{
				    
				    cout << str.substr(i, j-i+1) << " ";}
			
		}
vowFreq.clear(); else
{vowFreq[str[j]]++;

	}
}
int main()
{
	string str = "aeiouiaeou";
	FindSubstring(str);
	return 0;
}