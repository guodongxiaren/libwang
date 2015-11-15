/*************************************************************************
	> File Name: url.cpp
	> Author: Jelly
	> Mail: 879231132@qq.com
	> Created Time: Sun 15 Nov 2015 04:03:06 PM CST
 ************************************************************************/

#include <iostream>
#include "url.h"
using namespace std;
string Url::decode(string& message)
{
    string tmp;
    for (int i = 0; i < message.size(); ++i)
    {
        unsigned char x = message[i];
        if ('+' == message[i])
        {
            x = ' ';
        }
        if ('%' == message[i])
        {
            x = 0;
            ++i;
            for (int j = 0; j < 2; i++, j++)
            {
                x *= 16;
                char ch = message[i];
                if (ch >='0' && ch <= '9')
                {
                    x += ch - '0';
                }
                else if (ch >= 'a' && ch <= 'f')
                {
                    x += ch - 'a' + 10;
                }
                else if (ch >= 'A' && ch <= 'F')
                {
                    x += ch - 'A' + 10;
                }
            }
            --i;
        }
        tmp += x;
    }
    return tmp;
}

