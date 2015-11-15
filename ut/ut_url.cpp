/*************************************************************************
	> File Name: ut_url.cpp
	> Author: Jelly
	> Mail: 879231132@qq.com
	> Created Time: Sun 15 Nov 2015 04:30:51 PM CST
 ************************************************************************/

#include <iostream>
#include "url.h"
using namespace std;

int main()
{
    //string msg = "%28I+Love+You%29";
    string msg = "%e5%95%8a";
    cout<<Url::decode(msg);

}
