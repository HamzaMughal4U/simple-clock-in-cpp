# Simple Clock in C++

You can clone the repository in your computer or you can simply download the zip

### About the program
This is not anything of advanced level. Just the simple clock that syncs with your system time and refreshes

### Issues you may run into
There are 2 ways of solving it
1. Enabling C++ 11
2. Changing following code
```
auto hour = now->tm_hour;
auto min = now->tm_min;
auto sec = now->tm_sec;
```
to
```
int hour = now->tm_hour;
int min = now->tm_min;
int sec = now->tm_sec;
```