/*************************************************************************
	> File Name: url.h
	> Author: Jelly
	> Mail: 879231132@qq.com
	> Created Time: Sun 15 Nov 2015 04:00:35 PM CST
 ************************************************************************/

#ifndef _URL_H
#define _URL_H
#include <string>
using std::string;

class Url
{
public:
    static string decode(string& message);
};
#endif
