/*************************************************************************
	> File Name: cgi_util.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 09 Oct 2015 07:44:25 PM CST
 ************************************************************************/

#include <sstream>
#include <iostream>
#include "cgi_util.h"
using std::istringstream;

int url2map(string &url, map<string, string>& para)
{
    istringstream is(url);
    string kv;
    int count = 0;
    while (std::getline(is, kv, '&'))
    {
        string key, value;
        int pos = kv.find('=');
        key = kv.substr(0, pos);
        value = kv.substr(pos + 1);
        if (para.find(key) == para.end())
        {
            para[key] = value;
            ++count;
        }
    }
    return count;
}

