/*************************************************************************
	> File Name: ut_cgi.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 09 Oct 2015 08:48:29 PM CST
 ************************************************************************/

#include <iostream>
#include <string>
#include <map>
#include "cgi_util.h"
using namespace std;
int main()
{
    string url = "stu=abc&no=123&sex=man";
    map<string, string> para;
    int n = url2map(url, para);
    cout<<n<<endl;
    map<string, string>::iterator it;
    for (it = para.begin(); it != para.end(); ++it)
    {
        cout<<it->first<<":"<<it->second<<endl;
    }
}

