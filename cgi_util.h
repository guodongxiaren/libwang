/*************************************************************************
	> File Name: cgi_util.h
	> Author: 
	> Mail: 
	> Created Time: Fri 09 Oct 2015 07:42:07 PM CST
 ************************************************************************/

#ifndef _CGI_UTIL_H
#define _CGI_UTIL_H

#include <map>
#include <string>
using std::string;
using std::map;
int url2map(string &url, map<string, string>&para);
#endif
