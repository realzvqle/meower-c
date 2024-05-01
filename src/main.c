#include <stdlib.h>
#include <wchar.h>
#include <corecrt_wstdlib.h>
#include <time.h>

wchar_t* choiceArr[] = {L"meow",L"mrrrow", L"mrrrp", L"nyaaa", L"nya",L"mew", L"meowwww"};

int wmain(int argc, wchar_t* argv[]){
    if(argc < 2){
        wprintf(L"usage: meower <amount>\n\nexample: meower 10");
        return -1;
    }
    int amount = _wtoi(argv[1]);
    if(!amount){
        wprintf(L"amount must be a number!\n");
        return -1;
    }
    srand(time(NULL));

    for(int i = 0; i < amount; i++){
        int index = rand() % 6;
        wprintf(L"%s ", choiceArr[index]);
    }
    //srand(time(NULL));
    int chanceForCatSmile = rand();
    if(chanceForCatSmile % 5 == 0) wprintf(L":3");
    return 0;
}