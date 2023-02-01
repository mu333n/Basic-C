#include <windows.h> // use to define SYSTEMTIME , GetLocalTime() and GetSystemTime()
#include <stdio.h> // For printf() (could otherwise use WinAPI equivalent)

int main(void) { // Or any other WinAPI entry point (e.g. WinMain/wmain)

    SYSTEMTIME t; // Declare SYSTEMTIME struct

    GetLocalTime(&t);
    t.wYear;

}
