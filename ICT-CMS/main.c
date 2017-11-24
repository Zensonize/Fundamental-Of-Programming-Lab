#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <ctype.h>

struct contact{
    int idx;
    char id[8];
    char first[50];
    char last[50];
    char phone[11];
    char email[50];
    char pwd[30];
};

void Redirecting(int duration){
    int timer1,timer2;
    printf("\nRedirecting");
    for(timer1 = duration; timer1 > 0; timer1--){
        printf(" %d",timer1);
        Sleep(200);
        for(timer2 = 3;timer2>0;timer2--){
            printf(".");
            Sleep(200);
        }
        printf(" "); Sleep(200);
    }
}

void credit(){
    printf("    ``                                                             ``::-.`                                                                                                                ``..-----.......................................................\n"); Sleep(200);
    printf("    ``                                                            ``::::.`````                                                                                                                ``..........................................................\n"); Sleep(200);
    printf("    ``                                                           ` ./::-```..`                                                                                                                    ```.....................................................\n"); Sleep(200);
    printf("    ``                                                          ` `::--.``.--`                                                                                                                         ```................................................\n"); Sleep(200);
    printf("    ``                                                        `   .:::-` `.--`                                                                                                                              ```...........................................\n"); Sleep(200);
    printf("    ``                                                       ``   -:-:.   -:-`                                                                                                                                    `````..........................```````..\n"); Sleep(200);
    printf("``````                                                      `    `::::.` `:/:.`                                                                                                                                             `...........```````         ``\n"); Sleep(200);
    printf("...```........````````````````````                               .:-::.``.:///:.`                                                                                                                                           ``.......`.```               `\n"); Sleep(200);
    printf("  ` ````....------------.....................``````````          -:-::.``.:////-`                                                                                                                                           ``.........``                 \n"); Sleep(200);
    printf("    ``    `````.....----:--::------::::::://///::-----.........``:--/:.``.:////-`  ``........``````````````......`.``````````````````````````````````   ```````````` `   ``                            `````````` ``   ````````.........`.........````   `\n"); Sleep(200);
    printf("    ``                   ````````````........--------------:::-..:--/:.``.://+/.```..---:::::::::::://///////:::::::::::::::::::::::-----:::-----------::----------.................`.......`........----..........----------.``.....----------....````...\n"); Sleep(200);
    printf("    ``                                                    ````  -:--::.``.:///.````        ```````````````````````````````.....-:::::::::/::::::::--.......``````````...----...---.....---.---...--------...`..........```````                            \n"); Sleep(200);
    printf("    ``                                                          ---::-.``.://:.` ``                                                   `````````````````               ```````  ``````` ``   `                                                             \n"); Sleep(200);
    printf("    ``                                                         `:--::-.``.:/+/.``                                                                                                                                                                         \n"); Sleep(200);
    printf("     `                                                         `:--::-.`.-///-`                                                             `    `````````                                                                                                \n"); Sleep(200);
    printf("     `                                                         .--:::....:///.                                                   ````````````````````````````````                                                                                         \n"); Sleep(200);
    printf("     `                                                         .--::-....:///`                                          ````...----::-:-----.....`...``````````` ``````                                                                                   \n"); Sleep(200);
    printf("     `                                                         ---::-....://:`                               ```...-----::::::::///////////::::::---::----......``````````                                                                                \n"); Sleep(200);
    printf("     `                                                         ---::-..`.://:`                         ```..---::///++////+///+++++///+/////////:::::::::::::::::---........```                                                                           \n"); Sleep(200);
    printf("    ``                                                        `:--::-..`.://:`                     ````.--:::://////::::::::::::::----::------------::::::://///+++////::--:::.````                                                                       \n"); Sleep(200);
    printf("    ``                                                        `:-::-.....://:`                `````.---::://+///////:://////::::-:----:::-----------....-----::::///++++o+///:::.``  ````                                                                 \n"); Sleep(200);
    printf("     `                                                        `:-::-..``.::/:`             `..--:::://///+++///:://://:/::::/::::::::--:::----------::--------:::::::::::://+///::-.`   ````                                                              \n"); Sleep(200);
    printf("    ``                                                        .:-::-..``-::/:`        ``..-:::::://////////////::::::/::-----:::::::::-----------..--:::::::::/:::////:/://://:::::-.``   ````                                                            \n"); Sleep(200);
    printf("``` ``           ``````````    `                              .:-::-..``-::/:`     ``.--:::/://////:://////////:::::::/::::::::--::::///////:::------..--::::::---:///++/////+//:-//::-.``   ```                                                          \n"); Sleep(200);
    printf("--.````....``.``.............`...........``````      ``````` `-:-::...``-::/:`   `.-:::////////////://////++++++o+++//::::------::::::::/::///++++/:///::::::::::---::://////++ossssso+/:--.`` ``                                                         \n"); Sleep(200);
    printf("..`````....-----::------...--.........................----...`::-:-...`.:::/:-..-:://+++////////++/+/+/++++ooooo++++++++o+oooo+/////:-://++oss++sssysssyyso++////+++/:/++//:///:/+oyyyysso+/:--.```                                                       \n"); Sleep(200);
    printf("     `        ``````.......----------------..--::-----://:-...::-:-...`.:::///:://oo++///////++++++oosssooosssyyso+//++//ooossooosssso+++++///++//+osssyysyhhyyyyyysyyssoooooooo+++///+oossoso/:-.```                                                     \n"); Sleep(200);
    printf("     `                         ````````........------:::::-...:--:-..``.:::////+o++++//+++++++//+ooososoossooooo++oo+/++//+++++o+++oosyyyyyyysssooosooosyyyyyyyhhhhhhhdmmmdhhhyyyhyyyysooooo+osso/--.``                                                   \n"); Sleep(200);
    printf("     `                                                  ``````:--:-..``.:::////oo++/+++oo+++o+ooso++ooooossysssssyhyo//+o+//://++////+++sssyyhhddddddddddddddhyyyyyhyhhhdmddddhddmdddddhhhyysso+oo+/:.` ``                                                \n"); Sleep(200);
    printf("     `                                                       `:--:-..``.::::///+oo+++oso+/+sso+++/+syssshhhyhdhysssyssosyyys+///::::/+/////+/++///++oosssyssssysyysyhhddmmmmmmmddddmdyhdhdddddyshyyso+:.````                ```````    ``````           ``\n"); Sleep(200);
    printf("     `                                                       `:--:-..``.:::://+ss++ooo+/+oyo+osysyyssyysyhdhhyyssyyssyyyyyyysoooo++++//+++/:///+o+++/+//++o+ossosysyyhdddddhdmmmmNNNmmdhhyyhdhddmmmmmdhs/-.`.``````..........-----.................``````.\n"); Sleep(200);
    printf("::-.`   `.-.`                                                .:--:...```:::://o+++oo+++ssooyddhhhyhdhhhdyyhhdmmddhyyyyyhhyyyhyhyysossyo/+s++////+++oo+++ooooosyyyyhhyhhdhhhdmmmddmmmmmNNNNNmdhyyyhddddyyyy+:........--------::---------------------------:\n"); Sleep(200);
    printf(":.```  `//////-                                             `-:--:...```-::://++oooooooooymdhhhhdhyhmmdhdhyshhyyyyyhyyyyyyhssyyhyhyo++//:/+osssyyhyhysyyhhhhhyyysyyhddhhdhddhhmdmmmNmmNNmNNMNNmmhyyyysosyyhhy+:-------------------------:----:::::-::::::/\n"); Sleep(200);
    printf(":.``` ```::---+/`                                          `.::---...```-::///++soosssosmNmhhdhyyyyssshyssssosyhyyyysssyyysoyhhhhyyo+ssssoosssyyyyyyhyhhhddddddddddhhdmmmmmNmNmNNNNNNmmmNNNNNNMMMMNNNmdhhhhyhhs+:-................`.......``....``........\n"); Sleep(200);
    printf(":.```````.::..-+/`                                        `.-::---..```.:::///+sssyysydmmdddhddhhysyydddhhyyyssssyhyyssyyyyyyhyhhdddmddddmmmmmmmmmdmmmmmmdmmmNNNNNNNNNNNNNmmNNmmmmmmmmNNNNNNNNNMMNMMMMNNNmmmhyysso/:--........````````..``````````````````\n"); Sleep(200);
    printf(":.`  ``.``-:-..:+/                                     ```-::::---...``.:::///oyhhhhdmmmddhhhdmmmddddhhhddddhhhyyssossssssoooo+oosyyyhhhddmmmNNNNNNNMMMMMNMMNNNMNNNNmmmNNmmmmmmmmmmmmmmNNNNmmmNNNNNNNNMNNNNNmddhhyso/:.```````````````````````````````````\n"); Sleep(200);
    printf(":-    ````.::-.-++-         ````````````````````````````.://:/:--...```.:::///osddhhhdhhyyhddmmmmmmmNNNNNNmmdhhhyyysssoosyyyhysyssoossooyyhyhddmNNmmNNMMMMNNNNNNNmmNmmmmdddddddddmmmmmmmmmNmNNNNMMNNNNNNNNNNNNNmmdhdyo/-.````````````````````````.````....\n"); Sleep(200);
    printf("::.` `````.:::..:/+`       ```````````````````````````.-:/o+::---..````.:::///ohyhdmmmhdmdddmNNmmdmmmmmdNNNmmNNNmmmmmddhyyyyhyyhhyhyyhdddmmNNNNNNNNNNNNNmmmdddddddddddmmdddhdddddddmddmmmmmmNNNNNNNMMMMNNNMNNNNNNNmmddhs+:....--.-------------------------\n"); Sleep(200);
    printf(":::.```````-::..-/+/      ````........................-:+ss+::---..````-:::///ohmmdddmddmNNNmhmmmmdddhhhdddmmmmmmmmmmddmmmmmmmdmdmNmNNNNNNNMNNNNNmmdddddddddddhhhhhhhhhhdhdddddhhhhhhhhhdddmmmmmNNNNNNNMMMMNNNNNNNNNNmddhs/:---://///////////+////++++++++\n"); Sleep(200);
    printf("::-````````-::-..:+o`    ```.--:::::::::::::::::::--.-:+oso+::--..````.:::////odmmmNNmmmmmNNNmmNmNNmmmmdmddmmdddddmmmmmmmNmmNNNNNNNNNNNNNmmmmddhhyyyyyyssssossossssssyyyyyyyyyhhhhhhhhhhhhhhdhhdmdmNmNNNNNNNNNNNNNNNNNNNmdys+::/++///+o+o+oooo++ooosoosoos\n"); Sleep(200);
    printf(":::````````-::-...:+:    ``..-/+o+ooo+++o++o+++++/:--+oooso+::--..````-:::////omNNmmNNNNmddmNNNmmmmdddhddmmmmmmmmmmmmdmmddddmmmNNNNmdddhyyssoo+//::::---------::::://++++ooooooooosssyyyyyhhhhhyhdddmmNNNNNNNNNNNNmNNmNNNNmdho/::/+++++oooooo+oosoossososs\n"); Sleep(200);
    printf("::-````````::::-..-/o`   ``..:/osssssssssossso+++/:-+ssooss/:---..```.::::////sNNNNNNNmmdddddddmmmmmmmmmmNNmmmmmNNNNNNmmmmmmdmddhyss+//:---...........`..........-----:::///++++////++++ooosssssssyyhhhmNNNNNNNNNNNNNNNNNmmmmhs/:/ooooooooo++ososossssssss\n"); Sleep(200);
    printf("::-````````::::-.../o:   ``..:+osssssssssssssooo+/-/oo+osso::---.````.::::////omNNNNNNNNmmmmmmmmmmNNNNmNNNNNNmmNmNNmmdhyyyyyso+/::--...```````````````````............----::::////////////+++o+ooossssyhddmmNMMNNmNNmNNmmNmmdhys/:/++osossoosssssssyssyysy\n"); Sleep(200);
    printf(":::.```````-::::...:+o   ``..:+ossssssysssysssoo/::os++sys+::--..````.::::////odNNNNNNNNNNNNNNNNNNmmNNNNNNNmmmmddhhyyssooo+/:---...``````````````````````````..............-----::::::::////////+++++oosyyhdmNMMMMNNMNNNmmmmmdys+//+//+oooossossoossssssss\n"); Sleep(200);
    printf("/::-``````.-::::....+s.  ```.-/ssyssssssssyssso+::+ssooyys+::--..````.::::///+smNNNNNNNMMNNNNNNNmNNNNNNNNNmddyyysoooo+//::--....````````````````````````````.....................-------:::::::////+++ooosyyhmNMMMMMMNNmmmNNmmdhs+/+++++++++oooooossssssss\n"); Sleep(200);
    printf("/:::-````..-::::-.../++  ```.-/ossossssssssoso+:-/osssyhhs/::--..````.::::////yNNNNNMMNMMNNNNNNNmNNNNNNmmdhyysoo+++/:::--.........```````````````````````.............................------:::::////++++ossyhdNMMMMMNNNNNNNmmmmys+/+//+++o++++++ooooooooo\n"); Sleep(200);
    printf("/:::-``````-///::...:+o  ```.-/oooooooooooooo+::++sysyhdh+-:---..````.:::////+hNNNNMMMNNNNNNNmmmNNNNNNmhysoo++//:::----...........`````````````````````....................................------:::///++++ossydNMMMMMNNNNmmdmmmdso++://+++++++++++++++++o\n"); Sleep(200);
    printf("::::-``````.://::...-+o   ``.-/++oooo+++oo+o+//osshyyydms/-:---.`````.:::////+hNNNNNNNNNNNNNNmmNNNNmdhyo++///::------............````````````````````.......................................-------:::///++++osydNMMMMNNNmmmmmmdhooo/::/+++///++/++++++/++\n"); Sleep(200);
    printf("::::-``````.-/:::....+o   ``.-:/+++++++++///:/+ossyyhhdd+----:-.`````.:::////odMNNNNNNNNNNNNNNNNNmdhs+//::::--------..............`````...........`............................................-------::///+++oosdNMMMMMNNNNmdhy+/++/::///////////////////\n"); Sleep(200);
    printf("::::.```````./:::..../o   ``.-:/+++++++////::o+oysyyhdms:-:---..`````-::////+omMMMMNNNNNNNNNNNmmhso/::::::-------...............................................................................-------:::///++ooymMMMMNNddhyso+:::/:::///////////////////\n"); Sleep(200);
    printf("::::.```````-::::..../+   ```.-://///////:::+oossyhhddy/-:----..`````-::////+sNMMNNMMMNNNNNNNmhs++/::::-----..-..............................----...-------------.................-.--..-..---..---------:::///+osymMMMMMNds+/:/:::-:-:///////////////////\n"); Sleep(200);
    printf("::::````````-::::-.`./+     ``````.........:sossyyydmd+-.:---..`````.:://///+yNMNMMMMMMNNmNmdyo+//:::-----..................................--.....------------------.....--.------------------..----------::://++oyNMMMMNNmho/:------::::::::::----------\n"); Sleep(200);
    printf(":::-````````.:::::.`./+` `````````````````.+sosshydmNdo-::---..`````-:://///odMMMMMMMNNNNmdhs+/:::-----.................................--------------------------------------------------------------------::://++ohNMMMMNNmdh+-.......`````````` `    ` \n"); Sleep(200);
    printf(":::-.````````-:::-.`-++``````````````````.:osoyyyhdmNNdhs+:-..`````.:://///+sNMMMMMMNNmmdhs+/::::---.....................................-------------------------------------------------------------------:::://+osmMMMMNNNmdhs:...`````````            \n"); Sleep(200);
    printf(":::-.````````.:::-.`:+o..................-+syssyymmNNNNNNh/-.`````.-:::////+hMMMMMMNmmmdys+/:::----.----.--.................`..................---------:---------::-----::----------------------------------:::::/+ohNMMMMMNmmdhs/-...````````           \n"); Sleep(200);
    printf(":::-. ```````.-::-``:/s.................--+sysyyhmmNNNNNMmo-.`````.:::////+smMMMMNNmmdhyo+/:::------------................``..`................-----------------:::--::::::-----------------------------------:::://+smMMMMMNNNmho/::...``````````````````\n"); Sleep(200);
    printf("::::.` ``````.-::-``/+/```````````````...-:sshhhmNNNMMNMMNh+-`````.-::////odMMMMNmmddhs+//::-----------.................`````````..`.............-------------------------:------------------------------------::::/+ohNMMMMNNNNmy++/:--..``.`````````````\n"); Sleep(200);
    printf("-::-.  ``````.-::.`./+:   ````.....```....:oydyhdmNNNNMMMNNms:-....-::///+hNMMNNmmdhyo+//::----------................`..``````````````````...........--------------------------------------------:-:-----------:::://+smMMMMMNNNNdooo+::--............````\n"); Sleep(200);
    printf(":---` ```````.---.`./+-    ```......`````.:oyhymdmNNMNMMNMNNNmysso+//://+yNMMNmmddhso///::--------...............`....``````````````````````...................-.----------------------------------:------------::::/+sdNMMMMMMNNNds+//::.................\n"); Sleep(200);
    printf("---.  ```````.---.`./o.     ``......`````./shhhmmmNNMMMMMNNNNMNNNNmyo/++ymMMNmddhyo+//::-:---------..............```````````````````````....................................-------------------:--:::----------:::::/+ohNNMNMMMMNNmhs++/:-.....`..........\n"); Sleep(200);
    printf("---`  ```````.---.`./o. `````.......`````./smNmNmNNNNNMMMMNMMMNNMMMMNdhdNMNNmdhyso//::------------...........-...........``````````````.......................................---------------------::::------:::::::/+shmNNMNMMNNNNdhs///-.............---\n"); Sleep(200);
    printf(":-.   ```````----``-/s.````....-----..```./ymmmNNNNNNNMMMMMMNNNMMMMMMMNNMNNmhyso+/:::------------........------:----............................................................------------------:::::--::---::::::++shNMMMMMNNMNmmmds++/-..--.....------\n"); Sleep(200);
    printf("--`   ```````.--.``:/y``````...---::--..../hdmNNNMNNNMMMMMMMMNMMMMMMMMMMNmdhso+//::------------......-.-:::::::/:::::------------.........----..--..............................--------------------:::::::--::::::/+osdNMMMMNMNNNNNmmhoo+-....-........--\n"); Sleep(200);
    printf("--`   ```````.--.``//o`   ````.-----...``.+yhNNNMMMMNMMMMMNMNNMMMMMMMMMNdhys+//::---------...-..-.----::://////////++///++++//::::---------------------.--......................--...----------------::::::::::::::/+oydNNMMMMMMMNNNNdhyso/-...--.........\n"); Sleep(200);
    printf("--`   ````````--.`.//o     ````......`````-/hNMNNNMMMMMMMMMMMMMMMMMMMMNdhs+/::-------........-...---::/+++/++++oooosssyyhhhhyyyso+/:::-----::::------------------..--.-.---......----.----------------:::::::::::::/+sydNMMMMMMMMNNNNmhhhso:..............\n"); Sleep(200);
    printf("--.    ```````.-.`.//o     ````.....`````.:omNMNmNNMMNMMMMMNMMMMMMMMMMmho/::-----............------:://+++ooooosyyyhhddddmmmmmmmdyso+///::::::::::::--------------------------------------------------:--::::::::://+shmNMMMMMMMMMNNNmhhhso/-.........`..`\n"); Sleep(200);
    printf("--.`   ```````.--`.//o     ````.....```.:/oymNNmdhmMMMMMMMMMMMMMMMMMMNds+::---...........--..---::::/++++///++osssossshhhddddmmmmmdhsso+o/++//::/::::::::::-----------------------------------------------:::::::::/osdNNMMMMMMMMMNNNmdddys+-..`........``\n"); Sleep(200);
    printf("---.    ``````.--.`:/o     ````.....``.:+oosdNmysshNMMMMMMMMMMMMMNmmddhs+/:--..............----::://////////////++++++oossyyhhhdddddhyyssoo++//////:/::::::::::::::::::::-:-::-:---------------------:-----:::::::/+oydNMMMMMMMMMMNNNmmddhyo:.......`.````\n"); Sleep(200);
    printf("----`   ``````.--.`-/o`     ```....``.-/+oooyhys++smMMMNNMMMMMMMMNmdhyssooo++/:--.......-----:::::///:::///:::::/::::///++oossyyyhhdhhyhysso+o+++////////:::::::::::::::::::::::::::::::-------------------:-::::/+osydNMMMMMMMMMMMNNmmddyoo/-``.`..``````\n"); Sleep(200);
    printf("-----`   ``````---`./o.     ```....`.-/+++++ooo++++yNNNNNNMMMMMMNmmNhyssssossssoo+++/:/+++/:::::-::::///////::::::::://////++oossyyhhhhyyysssooooo+//::--:::://////////////::://////////:/:::::::::::------:::::://+ohmNMMMMMMMMMMMNNNmdhs/o:-...``.``````\n"); Sleep(200);
    printf("-:---.   ``````.--../+-     ````..``.:/+/////://+ooosmNNNNNMMMMNmmmo/:/+oosssssssyhhsoyNNNNNNNmmdddhyysooo++///:::::://///++++oooossyyyyyyyyyyssso++//:::::://///+/+++++++++ooososssoooooo+++++++//++/::::::::::://+oymNMMMMMMMMMMMNNNmdds/::-.```````````\n"); Sleep(200);
    printf("-----.    ``````---`://     ````.``.-///:::::-://+oo+ymmmNNMMMNNmh+--..--:+osssshmmsoomNNMMMMds++/++oossyyhhhddddhhysso+++++++ooooossssssyyyyyyssso++/////////++oooooooosssyyhhdhddmddddhhyysyssssosso//::::::::://+oymNMMMMMMMMMNNNNNmmdy/--..```````````\n"); Sleep(200);
    printf("-----`    ``````---`:/+    ```````..:::::::---://+oo++hmmNNNNNNmy+/--...--://++osdhoohNNMMMNy:::::://+++++++++++++osyhddmddhyssssssosssssssyyyyyyso++/////++++oossyssyysyyyhhdmmmmNmNNNNNmmmddhyyyyssoo+::::::::::/+oymNMMMMMMMMMNNNmmmmdy/....```````````\n"); Sleep(200);
    printf("-----`     `````---.-/o`   ```````.--:-------::/+++++/shdmNmmNmho+:--....--::////+++omNMMMMh///++++osyhhdmmmmmNNmmmddhyysyyhddmmmdhyyssssssssyyysoo+++//+++++oossyyyyyyyyyhddddmmdmmmmmmddddmmmddysyyyss+::::::::://oymNMMMMMMMMNNNNmmmdds:.``````````````\n"); Sleep(200);
    printf("-----`     `````.--../+-   ``````...---------:///++++/+ydNmmmmdyo/----.....--:::::--:ohNMMN+-://osyhdddddddmmmNNNNNMMMNmhhhhyyyyyhddmmmhyyssssssoo++++//+++oosssyyyyyyyyyyhyyyhhyhhyyyssssssyyhdddhyyyyyo+/::::::::/oymNMMMMMMMNNNNNmmmdhs-```````````````\n"); Sleep(200);
    printf("----.`     `````.--.`:/+   ````.........----://+++oooo+syddmddhs+/:---.......--------.-:hMd:.----:/++++////+osyhdmNNMNmyssydmddhhyyyyyhhddmdysoo++/////+++++osssyyysssyssyyyyyyysssooooooosssyyyyhhhhhyyso+/:::::::/oymMMMMMMMMNNNNNNmmh+:.`  ````````````\n"); Sleep(200);
    printf(":----`     `````.--.`-/o.  ```............--:/++oosssysooyddhhyo/::--.........--------..:mo-..----::://:::::::///+ssyhyyyyhdmmNNdhhyyyyyyssydmho///:::///++oosssssssssyyyyyyyyyssoooo+o++ooossssssssyhhyyso/:::::::/+ymMMMMMNNMMNNNNNmds-````      ```````\n"); Sleep(200);
    printf("/:---`      ````.---``://  ````...........--/+ooossyyhho+syhdys+/::--.........-----------s/-..-.----::/++++++////++oooossssyhdmNNdhhyyyyso+++sNNds/::::://+++oosssyssyssyssssssooooooo+++++oooooosssoossos++/::::-::+yNMMMMMMMNNNNNNmds/-`           `````\n"); Sleep(200);
    printf("//---.`     `````.--.`./+- ````..-.......---/+ossyyyhhys+osyhyso//:---........---::::::-:y:----------:/+ossyyyyssssssssssyyyyyyyhhyhyyso+/////hMMMNmdddhyyssyssyhhdhhyyyyhhhyhhhhdhhhhyysssooooooooooooooo++/:::---:/yNMMMMMMNNNNNNNmh/.``            ````\n"); Sleep(200);
    printf("//:---`      `````.--.`-/+.````..-........--:+ossyyyyyys+++ssso+::----.......--:::::::--/s------------:://+ooosyyhyhhhhhhhhhhyyssssss+///::://hMNhsosyhdmNMMMNNNNmhhhhdhddhhhhhyyyyyyyyhhddddddddhyysooooo+//:::---:/hNMMMMMMNNNNNNNmo.`                ``\n"); Sleep(200);
    printf("//:----`      `````.--.`:/+````...........--/+osssssssoo+/:+o++/::---........-----------/o---.........-----:::://+oooossssssssssoo++//:::::/+sNd/-....--:+sdNMMNhyyyhhdddmNNNNNNNNmdhysooo++ossyyhhdmmmmddys+//:---:+mNMMMMMMNNNNNNNh:``               ```\n"); Sleep(200);
    printf("//:----.`      `````.--..:/+.``...........-:/+osso+/////::://+///:---.........---.-.....-o.....```````........-----:-:::://///////:::::--/yhymd+:-.`..---:+shMMhssyhhhmNNNNNMMMMMMNdyysyddhhsoo+++++++ossydmmmdhs+//sNNMMMMNmNNNNNNd+.                 ```\n"); Sleep(200);
    printf("//:-----.`      `````---::+s+```..........--:+ooo+/:://:-/:://::::---....................+:..````````````.........----------------------+mNhdd+/-.``.----:+oyNNysssyyhdddhyyyhhdmmmhyyyhdmNNNNdyo++++///////+oydNMNmmmyyNMNNmNNNNmd/``                 ```\n"); Sleep(200);
    printf("//:-----`        `````/o/-...```.`......-..--:/++++/++++::://:-------...................../:.`````````````.............-----------------/yyyso/-.```..---:/sdMNsoossyyyyhhhhyyssssssyyyyyhhhdmNmdyo++++++++++oyysmMMMNmsmNmmNNmmmd+.`                `````\n"); Sleep(200);
    printf("///----.```       ``.:/`   ````````......---..-:////++++/:::/:------.....................``-::-.`````````````.`........----------------::/sooo:-.```...--:/smMNys++oooosyhhhhhyyysssoo+++ooooydmmddyssoooo++ooydohMMMMdohyhdddddo/.`                ``````\n"); Sleep(200);
    printf("+/////++:-:-:-..--:--.      ````````...........`...-////:-:::::---.......................`.```.---.`````````...........----------------:+o+o+:--..`...--::/oymm+++++////++osyhhhyyyyyssoo+++oossyyyyyssoo+////+sodMMMNs+oosyyyhs-``                   ````\n"); Sleep(200);
    printf(".----.`      `...`          ````````...```````````..-://:::::---....................................---...............------::::::----:++++/:--..```.---//+sssd+/////::::///++ossyyhhhyhyssooooooooooo++//::::/o+NMMMm+/+oosyss/`                       ``\n"); Sleep(200);
    printf("                            `````````...``````````...-::::::----................................-----.----::::--------------:::::::::/+/+/:--..`````..-:/++so+h++//::/::::::::////++ooosssssso++o++++///::----++yMNNNh++ooosoo+-`                         \n"); Sleep(200);
    printf("                            ``````````................-.-:::---..................-----...---.-----::::::::::::::://+//+++++++++/+////////--...``````...-:/+os+ys///::::::::::::::::::::///+++++///+////::-----++mh+omdyo+++ooo+.                          \n"); Sleep(200);
    printf("                             ``````````.-.........--....--::---........----.---..-.-----------------:::::////+++/+////+++ooooo+//:::///--....```` ```..--:+osooh++///::::--------:-:-::::::://///////::::---.:/o/::ommyooooooo:`                          \n"); Sleep(200);
    printf("                             ```````   `...........`...-------........--------------------------::::::::///////+++ooooossyyyyyso+:::::-.....````````....--/ossosh+///:::::::----------------:::::::::::::----:+/--/hNmdso+ooo+-                           \n"); Sleep(200);
    printf("                                `       `.-...........-:-----........-----------------:-::--:::::::::::://////++ooossyyyyhhyo+::-...-...```````````......--/osoooyso//:::::::::::::--:-----------:::-::------+/--:ommmdso+ooo/.                           \n"); Sleep(200);
    printf("                                         `.--......--::/:---.......------::::::::::::::::::///::::::///////+++oosssyyyyyys+:-...````...````````````......---+sso++/+oso+/::::::::::::::::----------------:--/+---/ymmddso+ooo/`                           \n"); Sleep(200);
    printf("```                                        `.--::::://+/---........----:::::::::::::///////////////////++++ooosssyhhhyyyy+-...``````````````````...........--ossssoo++/+oooo++/:::::::----:----------------/+::-:+hdhyhyoooo+:`                           \n"); Sleep(200);
    printf("...````                                      `.-::///++/---........-----:::::://////////////////++++++++ooosssyyhhhhyssso:-.......``````..........---------../syhhyysoo++////+o+o++++//:::--------........:::::-:sdysyhsoooo+.                            \n"); Sleep(200);
    printf("/::--..`````                                     `.oydy---........-----:::::////////++++/+/+++++++o++oooossyhhddhhhysoooo/::--------.......--.------------------:+syyyso++///:::::::://+++++//////:::--:::--::::+dhysysooooo:`                            \n"); Sleep(200);
    printf("o+++/:--..``````                                  `+mNo...........-----::::::///++++++++/+++++++ooooossssyhhddhhyysoo++++oo+++++////:::::::---:::::::::::-----.....:oyssooo+++/////:::::::::::---------------:-:ohhsssooooo/.                             \n"); Sleep(200);
    printf("ssoo++//:--..``````                                -hm+.........--------::::://+++++++++++oooooosoossyyyhdhhhhyysoo+/////+syyyyyydddys++++//::///////::::/:::--.....-+yyyssoooo++++++/////::::::--------------::ssyssoooo+/.                              \n"); Sleep(200);
    printf("sssoooo++/::--..`````                              `-+-........----------:::////++++/++++ooooosssssyhhhhhhhyyyso++///::::/oyyhddhdddddhyoo++++++++++++///+///:-------:shhysooo++++///////////:::::::--:-----:::+syyoooooo/.                               \n"); Sleep(200);
    printf("yysssssooo+/::---..````                               `...-...----------::::://///////+++oooosssyyhhhhhhhhyyso+//:::::--:/+osyhhdddddddhhyooooo+oo++++++++++/////::::+syhdyssooo+//////////////::::::::::::::::shyo++oo+/.                                \n"); Sleep(200);
    printf("hyyyysyyyssso+/::--..```                              `..------------::::::::://///////++ooosssyyhhhhhyyhyss+//:::---...-::/+ssyhhhdddddddhoooooooo++ooosyyhyysoo+//oyyhhddhssoo++///////////////::/::::::-:::+yyo/+oo+:`                                 \n"); Sleep(200);
    printf("dhhhhhyyyyyyyss++/::-..```                   ````    `..---------------::::://////:///+++ooosssyhhyyyyyysso+//:::--..-.---::/++syhhhddddmmmdhhhysssyyhdddddhhhhysosssyyyhhddhsso++++++++/////////////:::::::::oso+++++-`                                  \n"); Sleep(200);
    printf("mmmmdddhhhhhyyyso/--::-.```                  ````    `..----------::--::::::///::::////++ooooosyhhyyyyyyso++///:------------://+ossyhhdhdddhdddmdddddddddhhhyyyyssssssyyyhhddhssoo+++++++//////////////:::::::osooo+/-`                                   \n"); Sleep(200);
    printf("NNNNNmmdmddhhyyys/:-:::-.``                   `    ```.----------::::-:::::::/::::::///+++++++syhysssyysso+////:::--------::::://++oyyyhhddddddddddddhhhhhhhyyyssssssssssyyhhhyssoooo++++++++////////:::/::::+oso++:.`                                    \n"); Sleep(200);
    printf("NNNNNNNmmmmdhhhyyo/:--::-.``                      ```...---------::::::::::::::/:::://///////+ossoossysssoooo+o+++++++/////+++++++oooosssyyhhhddddddhhhyyhyyyyyyssssssooossyhhhysssso+++o++++++///////////:::+oo+/-`        ``      ``````                \n"); Sleep(200);
    printf("MMMMMNNNNNmmdhhhhs/----...``                ```..--....---------:::::::::::::::::::::/://////++ooo+ossyysyyyyhhyyhyyyysssssssssssssssssssysssyyyyyhyyyyyyyysssssssssoooooossyhhhysssooo++++++++///////////::/+++-.`     ```````  ` ```````                \n"); Sleep(200);
    printf("MMMMMMMNNNmmmddddy+/----.``               ``.--:/+/-...------:::::::::::::::::::::::::::://///+++ooosyhhhdmNNNNNmmdddhyhhyyyyyyyyysyyyyyyyyysyyyyyyyyyyyyssssoooooooo+ooooossyyhyysssoooooo++++/++////////::/+:.`      ``````````` ```````                \n"); Sleep(200);
    printf("NNMMMMMMNNNNmmmmmdy/---:--..``            `.:/+oso/-...----:::::::::::::::::::::::::::::::://///++oosyyhmNMMMMNNmhhddyosyhhhhyyyyhyhyyyyyyyyyyyyyhyyyyyyysssooo+oo+o+++oooooosyyhyyysoooooo++++//////////::::.`      `````````````` `````                 \n"); Sleep(200);
    printf("hdmNNMMMMMNNNNNNNmds+:-::::::--..`        `.+ssyys:-...----:::::::::::::::::::::::::::::::::////++oosooshNMMMMNNdssyhs//+syo+/+oyhhhyyyhhyyyyyyyyyyyyyyyyyyssoooo++++++++ooosssyyyyssooooo+oo+++//////////:.`        ``````````  ```````                  \n"); Sleep(200);
    printf("+syhdmNNNNMMNNNNNNNmyo/-::::://:-`         `:yhhyo:--------::::::::::///:::::::::::::::::::::///+++++++/+oydNMNNdssss/::///:::::+yysossyhhyyyyyyyyyyyyyyyyyyssssooo+++++++oosssyyysssooo+++++o+++///+////:-`            ````````    ``                    \n"); Sleep(200);
    printf("`.:osyhmNNNMMMNNNNNNmho:--::::::`           `/yys/:---------::::::::::///::::::::::::::::::://///++//:::///+oymNmyyhs::::/------:o+///+oyso+++osyhyssyyyyyhyyyyysssoo+++oooosssyyssosooo++++oo+++////////:.                                               \n"); Sleep(200);
    printf(" `./++oyhmNNMNNNNNNNNmh+:-::::-`            `.+so/:----------:::::::://////:::::::::::::::::////////:::::::///+oyhddy//+oo:-----:///////o+/::::/ss+//+sysshhhddddhyssoooooosssyysooooooo++++o+++++//////:-`                                               \n"); Sleep(200);
    printf(" .-:://+oydmNNNNNNNNNmho/::::-`              `.+o+/---------::::::::////////:://::::::://::///////::::----:::::/://++/os+///o++oo///////+:::::::++/::/oo++ssdNMMMNNdhyyyssssssysso+++++++++++++/////////:`                                                \n"); Sleep(200);
    printf("`---:::/+oyhmNNNNNNNNmds+:::.`                `-oo/:---------::::::::////////://::/:/:/:::://////::::--------:::://::://///+o++///+++osyho++//:/+////++++syhNMMMMMMMNdhhyysosssoo+++++++++++++++/+/////:.                                                 \n"); Sleep(200);
    printf(".-----::/+oyhmNNNNNNmdho/-.`                  ``/s+::--------:::::::://///////:/:://///::/:::///::::-----------:://///::---::::///++++sssyyssoosyoo++soshdmNMMMMMMMMNmhhhysooooo+++++++++++++////+////:-`                                                 \n"); Sleep(200);
    printf("------:::/+oydNNNNNNmho-.```                   `.o+:-:-:::--::::::::://////////////////::::::::/::--------------:::////::::-----:://++oooooossyyyysoosydmNMMMMMNNNmmdhyyyysooo+++++++++++++/+/////////-`                                                  \n"); Sleep(200);
    printf("::::::::://+shmNNNmdo:...``                     `-o/::::::::::::::::::////++//////////::/:::::::::--------------:::////////////://////++++++oosssssyyyhdddmdddddhhyyssssssoo+++/////++//++//+/+/////:.                                                    \n"); Sleep(200);
    printf("//::::::::/++sdmdy+-``.`````                     `:+:::::::::::::::::::///++++/////////::::::::-:::-----------::::::/://++++++++++++++++++++++++oo+o++ooossssyysssooo+oossoo+++//+/+///////////////:.                                                     \n"); Sleep(200);
    printf("/////::::::/+oo+-.```````````                     `:/:::::::/::::::::::////++/++/++/////::::::::-::-----------:::::////+oo++++++oooooooo+ooo++o++o+++o++ooooooooo++++++oooo++////+//+/////////////:`                                                      \n"); Sleep(200);
    printf("::::::::::://-.``````  ``````                      `:/::///////::::::::::://+++++++//////:/:///::-::------------::::///++oooooooo+ooooooosoossssoooooooooooo+++++++++/+++++++///////////////////:-`                                                       \n"); Sleep(200);
    printf("-::::::::::-.```````   ```````                      `:/::////////////:::::///+++++++++//////::::------:-----------:::://+++osssssssssssoooooososssssooo+++++/+//+++//++++++++/////++///////////:.                                                         \n"); Sleep(200);
    printf("::::::----.````````     ```````                     `.//:/++++++////////:::://+++++++++/+///::::-----:----------------::://+ooossyyyysyysssssssssoooo++++///+////++//++++++++///+/+/+/////////:`                                                          \n"); Sleep(200);
    printf("::--...---`````````     ````````                     `./+//+++++++////////:::///++++++++++///::::----------...........----::://++++oossssysysssssssoooo++++/+///++///++++++///+++++++///////:.`                                                           \n"); Sleep(200);
    printf("--::/:///:.````.```      ```````                      `.++//++++++++++//+///::///++o+++++++///:::---------..................----:::://////++++ooooo++++++++++////++/++++/////+++++++//+///:-`                                                             \n"); Sleep(200);
    printf("///++oyhh+.````````       ```````                      `.++///+oo++++++++++////////+++++++++////:::-----.......................---:-::-:::://///////+////+/+///+///+++////++++++++/+/////:.                                                               \n"); Sleep(200);
    printf("syhhhysso:.````````        ```````                      `./o++//oooooo++++++++//////++++++++++////::-------.................-------------::::::://///////////++//////////+++++++/++////:.`                                                                \n"); Sleep(200);
    printf("hyooooooo-`````````         ```````                      `./o+///+oooooooo+++++++////++++++++++/////:::-----------...-.....------::--:::::::::::::///://////////////////+++++++/+++///-.``                                                                \n"); Sleep(200);
    printf("+o+ooooo+:.````````         ```````                       `.:o++//+ooooooooooo+++++///+++++oo++++++////:::::::------:------------:::::::::::::::::::::://///++/////////++++++++++/+/-.````                                                                \n"); Sleep(200);
    printf("o+ooooooo:.`````````         ```````                       ``:o++/+/+ooooooooooooooo++//+++++++++++/++////////:::::::/:::::::::::::::::///:::://:::::::://////://////++++++++/+//:....````                                                                \n"); Sleep(200);
    printf("o+oooosos/.`````````-`        ```````                       ``-+o+++++ooooososooooooooo++/++++++o+++++o++++++++///////////////////////////////////////////:::://///++++++++++/:.```...````                                                                \n"); Sleep(200);
    printf("oosssssss/.```.`````/+`        ```````                 `     ``./ooo++++ossssssssooooooooo++/+++o+o++o+oooooooo++++o++++//+++++++//++////////++//////////////////+++++++++/-.``````......`                                                                \n"); Sleep(200);
    printf("osssssssso-```...```-m+`        ```````                   `  ````:ooooo++ossssssssossssssoooo+++++ooo+oooossossssoooosoo++++ooo+++++++++++++++++++/++++++///////+++++++/:.`   ``````.....`                  ```                                           \n"); Sleep(200);
    printf("ssssssssys:.```..```.yNs-        ``````                  ```   ```-+ssoooooosyssssssssssssssssoo+++oooooooossssssssssssssosoooooosoooooooooooooo+o++++++++++//++++o++::-.``   ``````.....``                ``.````                                        \n"); Sleep(200);
    printf("ssssssssyy/.````````./NNd/`      ```````                   ````````.:osssooooosssssssssssssssssssoo+ooooosssossssssssssosssssssossssssooosoooooooooooooo+++++++++//::---.``     `````.....`               `.-..``````                                     \n"); Sleep(200);
    printf("syyysysyys+-`````````.dNNms-`     ```````                ````````````-+sssosooosssysssssssssssssssssssoooooosssssssssyssssssssssssssssosssssooosoooooooo+++//:--:::::---..``    `````.....``             `.-.````...`                                     \n"); Sleep(200);
    printf("syysyyyyyys:.`.``````.oNNNNh+.     ```````                ````````````.:ossssssssssyyssssssssssssssssssyssosssssssssssyssyyysssssysysssyyssssssssssoo+o+/:.`   `:::::----..``   ``````....``            `.-..````--.``                                    \n"); Sleep(200);
    printf("syyyyyhhhyy/.`````..`.:mNNNNmy:`    ```````                 ````````````-/ssssssssssssyssssssssssssssssssssssssssssssssssssssssssyssyysssssssssssoo++//:-.`    `::::::----..```  `````..--.`            `--..```.::-.``                                   \n"); Sleep(200);
    printf("syyyyhhhhyys:.`.`...`..hNNmmmNms:`   ```.```                 ````````````.:oyysysyysssyyyyysssssssssssssssssssssssssssssssssssssssssssssossooooo++/////::-.`   `::::::-----..``   `````.--.``          `.--.....-//:-.`                                   \n"); Sleep(200);
    printf("yyyhhhhyhhhy/..........+mNmmdmNNmo-` ```..``                 ``````````````./syyyysyyyyyyyyyyysssssssssssssssssssssssssssssssossssossooooooo++++//:/++//:--.`   -::::::----..``   `````.---.`         `.----....://-.``                                   \n"); Sleep(200);
    printf("yyhyyhhhhyhho-......`..-dmmmmmmNMNd+.` ```..`                 ``````````````.-+yyyyyyyyyyyyyyyyssssssssssssssssssssosossssssssosoooooooo++++++//::/+o+//:--.`   ./:::::----..``    ````..--.``        `----....-:/-.`                                     \n"); Sleep(200);
    printf("yhhhhhdhdhhdy/..`..``...omNNmddmNMMNy/.` ``.``                  ``````````````.:syhyyyyyyyyyysyysssssssssosssssssssooosoooooooooooooooo+++++////:/oso++/::-..`  `::::::----..``    ````..--..`       `.----....-:-.`                                      \n"); Sleep(200);
    printf("yyhhhhhhdhhhyo-.........:dmNNmmdmNMMMms-`` ````                 ```````````````.-+yyyyyyysyysssyysssssssssssssossssssooooooooooooooo+++++//////:/syso++/::--.``  ./:::::----..`     ````..--.``      `-----...-::.`                                       \n"); Sleep(200);
    printf("yhhhhhhhhhddhy/..........ymNNNmdmNNMMMNd+-``````                  ```````````````.-oyyyyyyyyyyyssssssssssssssooosoossooooooooooo++++++++////////shyso+//::--..`   ::::::::--..``    ````...--.``     .----....-:-.`                                       \n"); Sleep(200);
    printf("hhhhdhhhhddhhho-.........+mmNNmmdmNNMMMMNy/-````                   ````````````````./syhyhyyyysyyyyssssssssssssossssooooooooooooo+++++++//////+sdhyso+//::--..``  `::::::::--..``  ``````..---..``  `.----...-::-``                                       \n"); Sleep(200);
    printf("yhhhhdddhdddddy/.........-ymmNmmmmmNNMMMMMmo:.``                     ```````````````.-+yyyyyyyyyyssssysssssssssoossoooooooooooooo++++////////+smmhyso+///:---..`   .::::::::--..``  ``````..---...```----....-::.`                                        \n"); Sleep(200);
    printf("yhhhhhddhhhhhdho-.........+dmNNmmmmmNMMMMMMNh+-.`                     ````````````````.-oyyyyyyyyssssyssssssssoooosooooooo+++++++++++/+++++/+sNNmhys++//::---..``   `-:://:::--..``  ``````..--..```.----....-:-.`                                        \n"); Sleep(200);
    printf("hdhhhddddhdhdddy/.........-hdmNNmmmmmNMMMMMMMms:-.`                   `````````````````..:syyyyyyyyyyyysssssssssooooooooooo++++++++//+++++/+smMMmhso+//:::---..``    `.-::/::---..``````````..``   `.:--.....-:-``                                        \n"); Sleep(200);
    printf("hhdhddddddddddddo-.........+dmNNNmmmmNNNMMMMMMNd+:.`                   ``````````````````.-/syyyysyyyyysyysssssosooooooooo+o+++++++++++++++odMMMmhso+//:::---...``  `  `.-::::--..````````````     `----....-::-``                                        \n"); Sleep(200);
    printf("dddddhddddddmdddy/.........-hdmNNmmmmmNNNMMMMMMMNs:-.                 ````````````````````..-+syyyyyysssyssysssssssoooooo++++++++++++++++osdMMMMmyo+//::::---...`` ```   `.-----..`````````        `---.....-::-``                                        \n"); Sleep(200);
    printf("hhdddddddddddddddo-.........+dmmNNNmmmmNNNMMMMMMMNd+-.`               ` ````````````````````..-+syyyyyyysssssssssssoooo++++++++++++++++ooymMMMMMdso+//:::---....````````  `-/::--.`                .---.....-/:-`                                         \n"); Sleep(200);
    printf("ddddddddmdddddhddy/.........-ddmNNNmmmmmNNNMMMMMMMMmy/.`                `````````````````````...-/syyyyyyysssssssssooo++++++++o+++++oooshmMMMMMNho+///:::---....`````````` ``:oo+/-.`             `.---....-:/:.`                                         \n"); Sleep(200);
    printf("ddddddddddddmdddddo-.........+mmmNNNNNNmmmNNMMMMMMMMMd+-`               ```````````````````````...-+syyyyyyyssssssssoooooooo+oooooooooydNMMMMMMNso+///::---....``````..```````/syso+/-``          `----....-:/:.`                                         \n"); Sleep(200);
    printf("ddddddddddddddddddy/.........-hmmmNNNNNmmmNNNMMMMMMMMMNy/.``          ` ``````````````````````.``..../osyysyssssssoooooooooooooooossshmNMMMMMMmdy+///:::--......`````...```````-shyyso+/-``       `---.....-:/-.`                                         \n"); Sleep(200);
    printf("dddddmdddddddddddddo-.........+mmmNNNNNNNNNNNNNMMMMMMMMMms:.```     ``````````````````````````````.....-:://///////+ooooooooooosssyhdNMMMMMMms/::::/:::--........`````...```````-yhhyysso/:.`     .--......-:/-.`                                         \n"); Sleep(200);
    printf("ddddddmddddddddddhdy/.........-dmmmNNNNNNNNNNNNNMMMMMMMMMNmo-...`   `     ````````````````````....----..............-sssssosssssyhdmMMMMMMNh+/::---:----.........``````....``````.+hdhhyssso/-.` `.--......-/:-``                                         \n"); Sleep(200);
    printf("mmdddddddddddhdhhdddo-.........+mmdmNNNNNNNNNNNNMMMMMMMMMMMMds/:.`    `   ``````````````..----:------...............-sssssssysyhhmNMMMMMMNy/::-----........----...``` ``...````````/hddhhhysso+:-..--......-//-``                                         \n"); Sleep(200);
    printf("mmmddddddddddhhhhhhdy/-........-hmdmmNNNNNNNNNNNNMMMMMMMMMMMMMms:.`  `````````````.-:/syy++//::--------............./ysssssyyyhdNNMMMMMMms//::-----...`./syyyhhhs+:.`  ```...```````:ddddhhhyyss+/-...``...:/:.``                                         \n"); Sleep(200);
    printf("mmmmmmmmdddddhhhhhdhdo:.........+mmmmNNNNNNNNNNNNNMMMMMMMMMMMMMMms/-.```...--/+oydmNMMMMm+//::-------:::::--........oysyyyyyhdmNMMMMMMMdo///::-----...``.oddhhhddhy/.`  ```...```````:dddddddhhyys+:-```..-:/:.`                                          \n"); Sleep(200);
    printf("Nmmmmmmdmdmddddhhhdddd+-.........dmmmmNNNNNNNNNNNNNMMMMMMMMMMMMMMMMNNmmmmNNNMMMMMMMMMMMMN+:/::-----/ymNNNdo:-.......oyyyhhhdmNNMMMMMMNy///::-----......``.+hhyyyhhhy/.`````.......--:oddmdddddhhhyyo+:.`..-//-.`                                          \n"); Sleep(200);
    printf("NNNNmmmmmmmddddhhhhhdds:-........ommmmNNNNNNNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy:::::---/dMMMMMMNy-.......ohyyhddmNNMMMMNdss++:--.............-:ohyysssyhhhysoo++ossyyyhdddmmmmddddddhhhyyyo/-.-://-.``                                         \n"); Sleep(200);
    printf("NNNNmmNNNmmmdddhdhhddddo-........-dmmmmNNNNNNNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:--:::::yMMMMMMMMh-.......+hhhdmmNNMMMNy+/::--....--:::/++syssmNNmhhyhyyhhddmmmmmmmmmmmmmmmmmmmdmmdddddddhhyyo/--:/-.``                                         \n"); Sleep(200);
    printf("NNNNNNNmmNmmmddhddhddddh/---......oNmmmmmNNNNNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMN+----:::sMMMMMMMNo......../dddmmNNMMMNy/::-....+ymNNNmmdmmdhssNMNNmmddddddmdmmmNNNmmmmmmmNNmmmmmmmmdddmddddhhhs+:-:-.``   ``````````````````````````````````````\n"); Sleep(200);
    printf("NNNNNNNNNmmmmmdhhddmddmms:----....-mmmmdmNNNNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMy-----:::smNMNNdo.........:ddmmNNMMMNd/-.....-sNMMMMNmmmmddy+hMMMNNNNNNmmmmmmNNNmmmmmmmmmmNmmNNmmmmmmdmmmmddhhhs+:--..``````````````````````````````````````````\n"); Sleep(200);
    printf("NNNNNNNNNNNmmdmdddmmmmmmd+----..-..yNNmmmNNNNNNNNNNNMNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:-------::/++:-..........-hmmNNMMMMd+-......oNMMMMMmdddddyooNMMMNMNNNNNNmNNNNNNmmmmmmmmmmmNNmNmmmmmmmmmmmmmmddhho:...````````````````.`.````.``````..``......``\n"); Sleep(200);
    printf("NNNNNNNNNNNmmdddmmmmmmmmmy/---.-:../NmmmmmmNNNNNNNNNNNNMMMMMMMNMMMMMMMMMMMMMMMMMMMMMMMMMMMNs----------..............-yNNNMMMMN+.```...:mMMMMMNdhdddyo+dMMMNNNMMMMMNNNNNNNNmmmmmmmmmNmNNNmmmmmmmmmmmmmmmmddhh+:..........................................--\n"); Sleep(200);
    printf("NNNNNNNNNNNmmmmmmNmNmmmmmdo--:::-...dNmmmmmNNNNNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd:....------.............-oNNNNNMNh-.```...oMMMMMNdhhhhys+sNMMMNNMMMMMNNNNNNNNNmmmmmmmmNNNNNNNmmmmmmmmmmmmmmmmddhyo:..-:::::::-------::::::::::::::::::::/::::/\n"); Sleep(200);
    printf("MNNNNNNNNNNNmmmmmNNNNNmmmmy:.-::-:..sNmmmmmmmNNNNNNNNNNNMMMMNMMNNNNMMMMMMMMMMMMMMMMMMMMMMMNNo-.....-----............-/NNNNNMNs.`````..hMMMMNdyyyyys++mMNNMNNMMMMMNNNNNNNmmmmmmmmmmmNNNmNNNmmmmmmmmmNmmmmddddhho:-:/++++++///:::/++ooo++++o+oo+o+oooooooo+o\n"); Sleep(200);
    printf("NNNNNNNNNNmmmmmNNNNNNNmmmmmo--:---..:mNmmmmmmmmmNNNNNNNNNMMMMNMNNNNNNMNMMMMMMMMMMMMMMMMMMMMNd/.......---............-:mNNNNNd/.`````.:mMMMNdyyyysso/yNMMMMNNMMMNNNNNNNmNmmmmmmmmmNmNNNNmNmmmmmmmmmmmNmmmmdddddyo///oooooo+//////osoooooosssooosossssooosso\n"); Sleep(200);
    printf("NNNNNNNNNmmmmmmNNNNNNmmmmmmh/-:::-...hNmNmmmmmmmmNNNNNNNNNMMMMNNMNNNNNNNNMMMMMMMMMMMMMMMMMMMNh/-.......-............-:dNNNNNs-.`````.+NMMMdsssssoo/+mMNMMMMNMMNMNNNNNNNNmmmmmmNNNNNNNNmmmmmmmmmmmmmmmmmmmmdhddhyo++/+oooo////::/oooooooooooooooooooooooooo\n"); Sleep(200);
    printf("NMNNNNNNNmmmmNNNNNNNNmmmmmNm+--:-.-..+NNNNmmmmmmmmNNNNNNNNNMMMNMNNNNNNNNNNMMMMMMMMMMMMMMMMMMMNmo-........-..........--yNNNNd/.``````.yMMMmyoooooo+/hNMMNMMNNMMNNNNNNNmmmmmmmmNNNNNNNNmmmmmmmmmmmdmmmmNNmmmdhhmmhyoo//++++///:::/+oooo++ooooo+oo+o+o+++o+++\n"); Sleep(200);
    printf("NNNNNNNNmmmmNNNNNMNNNNmmmmmmy:-:---..-mNNmmmmmmmmmmNNNNNNNNNNNNNMNNNNNNNNNNNNMMMMMMMMMMMMMMMMMNmo-.................---sNNNNs.``````.:NMMNyooooo++/+NNNMMMMMNNNNNNNNNNmmmmmmmmmNNNNNNmmmmmmmmmmmmmmmmmmNmmmdhhmmdyso/:/+++//:::::++++++++++++++o+++o+++o+++\n"); Sleep(200);
    printf("MNNNNNNmmmNNNNNNMNNNNNmmmmNNd/-:::--..sNNmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMMMMMmy:................---/NNNm/.``````.yMMMhooo++++//dNMMMMMMMNNNNNNNNNmmmmdmmmmmNNNNNNmNmmmmmmmmmmmmmmNmmNmmmddmmmhyso:/+++//:::::++++++++++++++++++++++++++\n"); Sleep(200);
    printf("MNNNNNmNmNNNNNMMNNNNNNNNNNNmmo-:::::-.:NNNmNmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMMMMNNh/.`........-....---:mNNs.``````.+NMMdo++++++//sNMMMMMMMMNNNNNNNmmmmmmmmmmmNNNNNNNmmmmmmmmmmmmmmmmmmmmNmmddmmmdhys+:+++/::::::++++++++++++++++++++++++++\n"); Sleep(200);
    printf("NNNNNNmNNNNNNNMMNNNNNNmNNNmmmy/:++/--..hNNNNNmmmdmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMMNMNd/.``........------:dNd:```````-dMMmo+++++///+mMMMMMMMNMMNNNNNNmmmmmmmmmmNNNNNNNNNmmmmmmmmmmmdmmmmmmmmmmddmNmmdhyo:/+//:::--:/+++++++++++++++++++++++++\n"); Sleep(200);
    printf("NNNNNmmmNNNNNMMNNNNNNNNmmmdmmds::os/:-.oNNNNmmmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMMMMNd+.```...---------:yNs.``````.yMMmo/////////hMMMMMMMNMNNNNNNNmNmmmmmmmmNNNNNNNNmmmmmmmmmmmmmdmmmmNNNmmmddmNNmmdhs::///::---:/++++++//++/+//////+//++++\n"); Sleep(200);
    printf("NNNNNNNNNNNNNMNNNNNNNmmmddddmmh/::://---NNNNNNNmmmmmmmmmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMNNNd+.```..----------+d:``````.+NMms/////////oNMMMMMMMMNNNNNNNNNNNNmmmmNNNNNNNNNNmNmmmmmmmmmmmdmmmmNmmmmmddmNNmmdds:-//:::----:///////////////://///////\n"); Sleep(200);
    printf("NNNNNNNNNNNMNNNNNNNmmmmdddmmmmms::s+/--.hNNNNNNNNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMNd/.```..---------/o.``````:dMNy//////////mMMMMMMMNMNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmmmmmmmmmmmmmmNmmmmmddNNmmmdds-.--.................................\n"); Sleep(200);
    printf("NNNNNNNNNNMMNNNNNNmmmmddddmmmmNd+:///:--oNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMNd/.```..--------:-``````.oNNh+/////////yMMMMMMMMMNNNNNNNNNNNNNNNNNNNNNNNNNNmmmNmmmmmmmmmmmmmmmNNmmmmddNNmmmdd+.`````` ``````````````````````````` `\n"); Sleep(200);
    printf("NNNNNNNNNNNNNNNNmmmdddddddmmmNNNs::oo/--:mNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMMMNh:```...------:-.`````..sMd+/////////oNMMMMMMMMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmmmmmmmmmmmmmmmmmmmddNNmmmdh:`                                    \n"); Sleep(200);
    printf("NNNNNNNNNNNNNNmmmmmmddmddmmmNNNNm+:+++:--hMNNNNNNMNNMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMNy-````..-----:-``````..ymo//////////dMMMMMMMMMMNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmmNNmNmmmmmmmmmmmmmdddNNmmmdy.`                                    \n"); Sleep(200);
    printf("NNNNNMNNNNNNNmmmmmdddddddmmNNNNNNy:/yo/--oMNNNNMMNNNNMNNNNNNNNNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNMMMMMMMMMMMNo.```...-----.````...-oy/////////:yMMMMMMMNNMNNNMNNNMMNNNNNNNNNNNNNNNmNNmmmmNmNNmmmmmmmmmmmmNmmdmdmNNmmmdo.                                     \n"); Sleep(200);
    printf("NNNNNNNNNNNNNmmmddddddddmmNNNNNNNmo:/::--/NNMNNNNMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMNMd:````..--::-`````...-/////:////:oNMMMMMMMMNNNNMNNNMMNNMMNNNNNNNNNNNNNmmmmmmmNNNNmmmmmmmmmmmmmmmddmNNmmmmo`                                     \n"); Sleep(200);
    printf("NMNNNNNNNNmmmmddddddddmmNNNNMMMNNNh/::::--NMMMNNNNNNNNNNNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMMMMMMNy.````..-::.````...--:/::/::////mMMMMMMMNNNNNNNNNNMMMMMNNNNNNNNNmmmmmmmdmmmmmNNNNNmmmmmmmmmmmmmddmNNmmdd+`                                     \n"); Sleep(200);
    printf("MNNNNNNNNmmmmddddddddmmNNMMMMMMNNNms:/:/:.hMMMNNNNNNNNNmmmmmmmmmNNNNmmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMNNNMNNm/`````..--````...--:/::::::::/hMMMMMMNNNNNNNNNNNMMMMMMMNNNNNNmmmmdmmmmdmmNNmmNNNmmmmmmmmmmNNmmddNNmmmdd+`                                     \n"); Sleep(200);
    printf("NNNNNNNmmmdddddddddmmNNNMMMMMMNNNNNd++s/:-oMMNNNNNNmNmmmmdmmmmmmmNNNmNNNNNNNNNNNNNNNNNNNNNNNNNNNNNMNNMMMMNNNs.````....```..---:/:::::::::sNMMMMMMNNNNNNNNNMMMMMMMNMNNNNNNmmdddmdmmmmNNNNNNNNNmmmmmmmmmmmmmddmNmmddh+`                                     \n"); Sleep(200);
    printf("NNNNNNmmmdddddhdddmNNNNMMMMMNNNNNNNNy//::-/NMNNNNmmmmmmmmmmmmmmmmNNNmNNNNNNNNNNNNNNNNNNNNNNMMNMNNNMMMMMMMNMNy.```....````.::::/:::::::::+NMMMMMMMNNNNNNNNMMMMMMMMMMNNNNNmmmdmddmmmmNNNNNNNNmNmmmmmmmmmmmmdhdNmmmmdh+`                                     \n"); Sleep(200);
    printf("NNNNNmddddddddddmmmNNMMMMMMNNNNNNNNNmo///--mNNNmmmmmmmmmmmmNmmmNNNNNNNNNNNNNNNNNNNNNNNMNNNNNNNMMMMMMMMMMMMMMh-``.....````.o///:::::::::/mMMMMMMMNNNNNMNNNMMMMMMMMNNNNNNmmmmdmmmmmmNNNNNNNNNNNmmmmmmmNNmmmdddNNmmddyo.                                     \n"); Sleep(200);
    printf("NNNNmddddddhddmmmNNNMMMMMMNNNNNNNNNMNh/o+-.yNmmmmmmmmmmNNmNNNNNNNNNNNMMNNNNMMMNMNNNNMMNMMMMMMMMMMMMMMMMMMMMMd-```...`````.hs/::::::::::dMMMMMMMNNNNNNNNMMMMMMMMMNNNNNNmmmmmmmmmNNNNNNNNNNNNNNNmmmmmNNNmmmdddmNmdddyo.                                     \n"); Sleep(200);
    printf("NmmmdddhddddmmmNNNMMMMMMMNNNNNNNNNNNMmo/+:.+NmmmmmmmmNNNNNNNNNMNNMMMMMMMMMMMMMMMMMMMMMMMMMNMMMMMMMMMMMMMMMMMd-``.....````.hy::::::::::yMMMMMMMMNNNNNNNMMMMMMMMMNNNNNNNmNNNNNNNNNNNNNNNNNNNNNNNNmmmmmmmmmmdhdmNmmmdyo.                                     \n"); Sleep(200);
    printf("mddddddmdmddmNNNNMMMMMMNNNNNNNNNNNNNNNh++:-:NNNNmmNNNNNNNMNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm:````````````+/-------::sNMMMMMMMNNNNNNMNMMMMMMMMMNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNmmmmmmNmmdddmNNmmmdyo.                                     \n"); Sleep(200);
    printf("mddmmmmmmmmmNNNNMMMMMMNNNNNNNNNNNNNmNNms/:--mNNNNNNNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNMNN+````````````--:------:+NMMMMMMMMNNNNNMMMMMMMMMMMMNNNNNNNNNNNNNNNNNNNMNNNNNNNNNmNNNmmNmmNmmddhmNmmmmdho.                                     \n"); Sleep(200);
}

void outputfile(struct contact out[100],int *numuser){
    int i,j;
    FILE *userdata;
    userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","w");
    fprintf(userdata,"%d,\n",*numuser);
    for(i=0;i<*numuser;i++){
        fprintf(userdata,"\n");
        fprintf(userdata,"%s,",out[i].id);
        fprintf(userdata,"%s,",out[i].first);
        fprintf(userdata,"%s,",out[i].last);
        fprintf(userdata,"%s,",out[i].phone);
        fprintf(userdata,"%s,",out[i].email);
        fprintf(userdata,"%s,",out[i].pwd);
        fprintf(userdata,"%d,",i);
    }
    printf("[SYSTEM] Updated!\n");
    fclose(userdata);
}

void readfile(struct contact read[100],int *numuser){
    FILE *userdata;
    int i;
    if ((userdata = fopen("D:\\Repositories\\Fundamental-Of-Programming-Lab\\Project\\udata.txt","r")) != NULL){
        printf("[SYSTEM] File ok!\n");
    }
    fscanf(userdata,"%d,\n",numuser);
    for(i=0;i<*numuser;i++){
        fscanf(userdata,"\n%8[^,],",read[i].id);
        fscanf(userdata,"%50[^,],",read[i].first);
        fscanf(userdata,"%50[^,],",read[i].last);
        fscanf(userdata,"%11[^,],",read[i].phone);
        fscanf(userdata,"%50[^,],",read[i].email);
        fscanf(userdata,"%30[^,],",read[i].pwd);
        fscanf(userdata,"%d,",&read[i].idx);
    }
    printf("[SYSTEM] loaded %d user(s)!\n",*numuser);
    fclose(userdata);
}

void listdata (struct contact read[100],int *numuser){
    int i;
    printf("\t\tTABLE OF USERS\n");
    printf("IDX |  Student ID |\t\tNAME\t\t|     PHONE  \t|\t    E-MAIL\t\t|\n");
    printf("-----------------------------------------------------");
    printf("--------------------------------------------\n");
    for(i=0;i<*numuser;i++){
        printf("%2d  |",read[i].idx);
        printf("   %7s   |",read[i].id);
        printf(" %s",read[i].first);
        printf(" %-15s\t|",read[i].last);
        printf("   %10s\t|",read[i].phone);
        printf("  %-25s\t|",read[i].email);
        printf("\n");
    }
}

void showdata(struct contact muict[100],int *position){
    printf("%2d  |"     ,muict[*position].idx);
    printf("   %7s   |" ,muict[*position].id);
    printf(" %s"        ,muict[*position].first);
    printf(" %-15s\t|"  ,muict[*position].last);
    printf("   %10s\t|" ,muict[*position].phone);
    printf("  %-25s\t|" ,muict[*position].email);
    printf("\n");
}

void showinfo(struct contact info,char pwdconf[30],int pwdlen){
    printf("ID: %7s             \n" ,info.id);
    printf("Name: %s %s         \n" ,info.first,info.last);
    printf("Phone Number: %s    \n" ,info.phone);
    printf("Email: %s           \n" ,info.email);
    printf("Password: ");
    printf("\n");
}

int input_id(char id[8],char newu){
    int inpos = 0;
    char key_in;
    int setnull = 7;
    do{id[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        newu == 'N' ? printf("Enter your ID: ") : printf("ID: ");
        printf("%s",id);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 7) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            id[--inpos] = '\0';
            if(inpos <=0) inpos = 0; 
        }
        else if(isdigit(key_in) && inpos < 7)   id[inpos++] = key_in;
    }while(1);
}

int input_firstlast(struct contact newdata, char name[50],char FL){
    int inpos = 0,iscap = 1,isnoncap = 1,noncap_pos = 99,i;
    char key_in;
    int setnull = 49;
    do{name[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        
        //printf("%s",name);
        showdata(newdata,key_in,0);
        key_in = getch();
        printf("\n");
        //printf("\t\t\t\tPOS:%d\tiscap:%d\tisnoncap:%d\tnoncap_pos:%d\n",inpos,iscap,isnoncap,noncap_pos);
        if(key_in == 13 && inpos >= 3 && iscap && isnoncap ) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            name[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
            if(isnoncap == 0 && inpos <= noncap_pos) {isnoncap = 1; noncap_pos = 99;}
        }
        else if(isalpha(key_in) && inpos < 49){
            name[inpos++] = key_in;
            if(islower(name[0])) iscap = 0;else iscap = 1;
            if(inpos > 1 && isupper(key_in)){
                isnoncap = 0;
                noncap_pos = inpos-1;
            }
        }
    }while(1);
}

int input_phone(char phone[11]){
    int inpos = 0, iszero = 1;
    char key_in;
    int setnull = 10;
    do{phone[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        printf("Enter your Phone number: ");
        printf("%s",phone);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos == 10 && iszero) return 1;
        if(key_in == 27) return 99;
        if(phone[0] == '0') iszero = 1; else iszero = 0;
        if(key_in == 8){
            phone[--inpos] = '\0';
            if(inpos <=0) inpos = 0;
        }
        else if(isdigit(key_in) && inpos < 10)   phone[inpos++] = key_in;
    }while(1);
}

int input_email(char email[50]){
    int inpos = 0, isconta = 0,a_pos = 99,iscontd = 0,d_pos = 99;
    char key_in;
    int setnull = 49;
    do{email[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        printf("Enter your Email: ");
        printf("%s",email);
        if(isconta == 0 || iscontd == 0) printf("\n[WARNING] Invalid Email");
        //printf("\t\t\t\tPOS:%d\tconta:%d\ta_pos%d\tcontd:%d\td_pos:%d\n",inpos,isconta,a_pos,iscontd,d_pos);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 7 && isconta && iscontd) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            email[--inpos] = '\0';
            if(iscontd && inpos <= d_pos){iscontd = 0;d_pos = 99;}
            if(isconta && inpos <= a_pos){isconta = 0;a_pos = 99;}
            if(inpos <=0) inpos = 0;
        }
        else if(isalnum(key_in) || key_in == '@' || key_in == '.'){
            if(inpos < 50) {
                if(key_in == '@'){isconta = 1; a_pos = inpos;}
                if(isconta == 1 && key_in == '.'){
                    if(a_pos+1 != inpos) {iscontd = 1; d_pos = inpos;}
                }
                email[inpos++] = key_in;
            }
        }  
    }while(1);
}

int input_pwd(char pwd[30]){
    char pwdchk[30];
    int inpos = 0,inpos2 = 0;
    char key_in,retry;
    int setnull = 29;
    do{pwd[setnull] = '\0'; pwdchk[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        printf("Enter your Password: ");
        printf("%s",pwd);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 8) break;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwd[--inpos] = '\0';
            if(inpos <=0) inpos = 0; 
        }
        else if(isalnum(key_in) && inpos < 30)   pwd[inpos++] = key_in;
    }while(1);

    do{
        printf("Confirm Password: ");
        printf("%s",pwdchk);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos2 >= 8) break;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwdchk[--inpos2] = '\0';
            if(inpos2 <=0) inpos2 = 0; 
        }
        else if(isalnum(key_in) && inpos2 < 30)   pwdchk[inpos2++] = key_in;
    }while(1);

    if(strcmp(pwd,pwdchk) != 0){
        printf("RETRY? (Y/N)");
        do{retry = getch(); if(retry == 'Y' || retry == 'N')break;}while(1);
        if (retry == 'Y') input_pwd(pwd);
        else return 99;
    }
    else return 1;
}

int input_finalize(struct contact muict[100],struct contact newdata,int *numuser,int *position,char mode){
    if(mode == 'N'){
        strcpy(muict[*numuser].id    , newdata.id);
        strcpy(muict[*numuser].first , newdata.first);
        strcpy(muict[*numuser].last  , newdata.last);
        strcpy(muict[*numuser].phone , newdata.phone);
        strcpy(muict[*numuser].email , newdata.email);
        strcpy(muict[*numuser].pwd   , newdata.pwd);
        *numuser = *numuser + 1;
        listdata(muict,numuser);
        outputfile(muict,numuser);
    }
    else if(mode == 'U'){
        strcpy(muict[*position].id    , newdata.id);
        strcpy(muict[*position].first , newdata.first);
        strcpy(muict[*position].last  , newdata.last);
        strcpy(muict[*position].phone , newdata.phone);
        strcpy(muict[*position].email , newdata.email);
        strcpy(muict[*position].pwd   , newdata.pwd);
        listdata(muict,numuser);
        outputfile(muict,numuser);
    }
    return 1;
}

int duplicatecheck(struct contact muict[100],struct contact newdata,int *numuser){
    int ispresent = -1;
    int i;
    for(i=0;i<*numuser;i++){
        if(strcmp(muict[i].id,newdata.id) == 0) return i;
    }
    return ispresent;
}

void Registeration(struct contact muict[100],int *numuser){
    struct contact newdata;
    int step = 0,pwdlen=0,pwd2len=0;
    do{
        switch(step){
            case 0: step += input_id(newdata,newdata.id,'N');                       break;
            case 1: step += input_firstlast(newdata,newdata.first,'F');         break;
            case 2: step += input_firstlast(newdata,newdata.last,'L');          break;
            case 3: step += input_phone(newdata,newdata.phone);                 break;
            case 4: step += input_email(newdata,newdata.email);                 break;
            case 5: step += input_pwd(newdata,newdata.pwd);                     break;
            case 6: if(duplicatecheck(muict,newdata,numuser) == -1)         step += input_finalize(muict,newdata,numuser,numuser,'N');  
                    else {printf("Error Duplicated Data"); Redirecting(4);  step++;}
                    break;
        }
    }while(step <= 6);
}

void tableprint(){
    printf("\t\tTABLE OF USERS\n");
    printf("IDX |  Student ID |\t\tNAME\t\t|     PHONE  \t|\t    E-MAIL\t\t|\n");
    printf("-----------------------------------------------------");
    printf("--------------------------------------------\n");
    printf("\n");
}

void searchidphone(struct contact muict[100],char search[11],int *numuser, char mode){
    int setnull = 7,results = 0,inpos = 0,i;
    char key_in;
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        results = 0;
        mode == 'P' ? printf("Search Phone: ") :printf("Search ID: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(strstr(muict[i].id,search) != NULL && mode != 'P') {results++; showdata(muict,&i);}
            else if(strstr(muict[i].phone,search) != NULL && mode == 'P')  {results++; showdata(muict,&i);}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 || key_in == 27) break;
        if(key_in == 8){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(isdigit(key_in) && inpos < 7 && mode != 'P')   search[inpos++] = key_in;
        else if(isdigit(key_in) && inpos < 9 && mode == 'P')   search[inpos++] = key_in;
    }while(1);
}

void searchnamemail(struct contact muict[100],char search[50], int *numuser, char mode){
    int setnull = 49,results = 0,inpos = 0,i;
    char key_in;
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        results = 0;
        mode == 'N' ? printf("Search Name: ") : printf("Search Email: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(mode == 'N'){if(strstr(muict[i].first,search) != NULL || strstr(muict[i].last,search) != NULL) {results++; showdata(muict,&i);}}
            else{if(strstr(muict[i].email,search) != NULL) {results++; showdata(muict,&i);}}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 || key_in == 27) break;
        if(key_in == 8){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(isalpha(key_in) && inpos < 49)   search[inpos++] = key_in;
        else if(key_in == '@' || key_in == '.' && inpos < 49) search[inpos++] = key_in;
    }while(1);
}

void advancesearch(struct contact muict[100],int *numuser){
    struct contact search;
    int searchptr = 1;
    char searchptr_temp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS Advance Search System\n");
        searchptr == 1 ? printf("-->\t[1] Search by ID\n")             : printf("\t[1] Search by ID\n");
        searchptr == 2 ? printf("-->\t[2] Search by Name\n")           : printf("\t[2] Search by Name\n");  
        searchptr == 3 ? printf("-->\t[3] Search by Phone number\n")   : printf("\t[3] Search by Phone number\n"); 
        searchptr == 4 ? printf("-->\t[4] Search by Email\n")          : printf("\t[4] Search by Email\n"); 
        searchptr == 0 ? printf("-->\t[0] Back\n")                     : printf("\t[0] Back\n");
        while(!kbhit());
        searchptr_temp = getch();
        if(searchptr_temp == 13) break;
        if(searchptr_temp >= '0' && searchptr_temp <= '4'){
            searchptr = (int) searchptr_temp - 48;
        }
    }while(1);
    switch(searchptr){
        case 1: searchidphone(muict,search.id,numuser,'I');         break;
        case 2: searchnamemail(muict,search.first,numuser,'N');     break;
        case 3: searchidphone(muict,search.id,numuser,'P');         break;
        case 4: searchnamemail(muict,search.email,numuser,'M');     break;
    }
    if(searchptr != 0) advancesearch(muict,numuser);
}

void editinfo_home(struct contact muict[100],int *numuser,int *userindex){
    struct contact me;
    int editmeptr = 1;
    int step = 0;
    char editmeptr_temp;
    do{
        system("cls");
        printf("My profile\n");
        printf("---------------------------------------------------------------------------------------------\n");
        editmeptr == 1 ? printf("-->\t[1] Edit ID\n")             : printf("\t [1] Edit ID\n");
        editmeptr == 2 ? printf("-->\t[2] Edit First name\n")     : printf("\t [2] Edit First name\n"); 
        editmeptr == 3 ? printf("-->\t[3] Edit Last name\n")      : printf("\t [3] Edit Last name\n"); 
        editmeptr == 4 ? printf("-->\t[4] Edit Phone number\n")   : printf("\t [4] Edit Phone number\n"); 
        editmeptr == 5 ? printf("-->\t[5] Edit Email\n")          : printf("\t [5] Edit Email\n"); 
        editmeptr == 6 ? printf("-->\t[6] Edit Password\n")       : printf("\t [6] Edit Password\n"); 
        editmeptr == 0 ? printf("-->\t[0] Back\n")                : printf("\t [0] Back\n");
        while(!kbhit());
        editmeptr_temp = getch();
        if(editmeptr_temp == 13) break;
        if(editmeptr_temp >= '0' && editmeptr_temp <= '6'){
            editmeptr = (int) editmeptr_temp - 48;
        }
    }while(1);
    if(editmeptr == 0) step = 99; else step = 0;
    do{
        switch(step){
            case 0: 
                    strcpy(me.id    ,   muict[*userindex].id);
                    strcpy(me.first ,   muict[*userindex].first);
                    strcpy(me.last  ,   muict[*userindex].last);
                    strcpy(me.phone ,   muict[*userindex].phone);
                    strcpy(me.email ,   muict[*userindex].email);
                    strcpy(me.pwd   ,   muict[*userindex].pwd);        step = editmeptr;                break;
            case 1: step += input_id(me.id,'N');                    if(step == 2) step = 8;             break;
            case 2: step += input_firstlast(me.first,'F');          if(step == 3) step = 8;             break;
            case 3: step += input_firstlast(me.first,'L');          if(step == 4) step = 8;             break;
            case 4: step += input_phone(me.phone);                  if(step == 5) step = 8;             break;
            case 5: step += input_email(me.email);                  if(step == 6) step = 8;             break;
            case 6: step += input_pwd(me.pwd);                      if(step == 7) step = 8;             break;
            case 7: break; //update id stack
            case 8: step += input_finalize(muict,me,numuser,userindex,'U');
        }
    }while(step<9);
    if(editmeptr != 0) editinfo_home(muict,numuser,userindex);
}

void deleteu(struct contact muict[100],int *numuser,int *userindex){
    char confirm,i;
    do{
        printf("Confirm delete (Y/N)");
        confirm = getch();
        if(confirm == 'Y' || confirm == 'N') break;
    }while(1);
    if(confirm == 'Y'){
        for(i=*userindex;i<*numuser;i++){
             muict[i] = muict[i+1];
        }
        *numuser = *numuser-1;
        outputfile(muict,numuser);
    }
}

void edituserinfo(struct contact muict[100],int *numuser,char mode){
    int setnull = 7,results = 0,inpos = 0,i,resultpos;
    char key_in,search[8];
    do{search[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        results = 0;
        printf("Enter ID: ");
        printf("%s\n",search);
        tableprint();
        for(i=0;i<*numuser;i++){
            if(strstr(muict[i].id,search) != NULL) {results++; showdata(muict,&i); resultpos = i;}
        }
        printf("RESULTS: %d\n",results);
        key_in = getch();
        if(key_in == 13 && inpos == 7) break;
        if(key_in == 27){   resultpos = -1; break;}
        if(key_in == 8 ){   search[--inpos] = '\0';  if(inpos <=0) inpos = 0;}
        else if(isdigit(key_in) && inpos < 7)   search[inpos++] = key_in;
    }while(1);
    if(resultpos != -1 && results != 0 && mode == 'E'){
        editinfo_home(muict,numuser,&resultpos);
    }
    else if(resultpos != -1 && results != 0 && mode == 'D'){
        deleteu(muict,numuser,&resultpos);
    }
    else if(resultpos != -1 && results != 0 && mode == 'G'){
        struct contact admin;
        int step;
            strcpy(admin.id    ,   muict[resultpos].id);
            strcpy(admin.first ,   muict[resultpos].first);
            strcpy(admin.last  ,   muict[resultpos].last);
            strcpy(admin.phone ,   muict[resultpos].phone);
            strcpy(admin.email ,   muict[resultpos].email);
            strcpy(admin.pwd   ,   muict[resultpos].pwd);
            admin.id[0] = '0'; admin.id[1] = '0';
            if(duplicatecheck(muict,admin,numuser) == -1)         step = input_finalize(muict,admin,numuser,numuser,'N');  
                    else {printf("Error Duplicated Data"); Redirecting(4);}
    }
}

void admin_home(struct contact muict[100],int *numuser,int *userindex){
    int admptr = 1;
    char admptr_temp;
    do{
        system("cls");
        printf("WELCOME ADMIN %s %s\n",muict[*userindex].first,muict[*userindex].last);
        admptr == 1 ? printf("-->\t[1] Edit User's Contact\n")    : printf("\t [1] Edit User's Contact\n");
        admptr == 2 ? printf("-->\t[2] Show all contact\n")       : printf("\t [2] Show all contact\n"); 
        admptr == 3 ? printf("-->\t[3] Search for a contact\n")   : printf("\t [3] Search for a contact\n"); 
        admptr == 4 ? printf("-->\t[4] Delete user's contact\n")  : printf("\t [4] Delete user's contact\n");
        admptr == 5 ? printf("-->\t[5] Give Admin privilege\n")   : printf("\t [5] Give Admin privilege\n"); 
        if(*userindex == 0){admptr == 6 ? printf("-->\t[6] About this system\n")  : printf("\t [6] About this system\n");}
        admptr == 0 ? printf("-->\t[0] exit\n")                   : printf("\t [0] exit\n");
        while(!kbhit());
        admptr_temp = getch();
        if(admptr_temp == 13) break;
        if(*userindex == 0){    if(admptr_temp >= '0' && admptr_temp <= '6'){admptr = (int) admptr_temp - 48;}}
        else {                  if(admptr_temp >= '0' && admptr_temp <= '5'){admptr = (int) admptr_temp - 48;}}
    }while(1);
    switch(admptr){
        case 1: edituserinfo(muict,numuser,'E');                            break;
        case 2: listdata(muict,numuser);         while(getch() == 27);      break;
        case 3: advancesearch(muict,numuser);                               break;
        case 4: edituserinfo(muict,numuser,'D');                            break;
        case 5: edituserinfo(muict,numuser,'G');                            break;
        case 6: credit();                                                   break;
    }
    if(admptr != 0) admin_home(muict,numuser,userindex);
}

void user_home(struct contact muict[100],int *numuser,int *userindex){
    int userptr = 1;
    char userptr_temp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS %s %s\n",muict[*userindex].first,muict[*userindex].last);
        userptr == 1 ? printf("-->\t[1] Edit my Contact\n")         : printf("\t[1] Edit my Contact\n");
        userptr == 2 ? printf("-->\t[2] Show all contact\n")        : printf("\t[2] Show all contact\n"); 
        userptr == 3 ? printf("-->\t[3] Search for a contact\n")    : printf("\t[3] Search for a contact\n"); 
        userptr == 0 ? printf("-->\t[0] exit\n")                    : printf("\t[0] exit\n");
        while(!kbhit());
        userptr_temp = getch();
        if(userptr_temp == 13) break;
        if(userptr_temp >= '0' && userptr_temp <= '3'){
            userptr = (int) userptr_temp - 48;
        }
    }while(1);
    switch(userptr){
        case 1: editinfo_home(muict,numuser,userindex);         break;
        case 2: listdata(muict,numuser);   while(!kbhit());     break;
        case 3: advancesearch(muict,numuser);                   break;
    }
    if(userptr != 0) user_home(muict,numuser,userindex);
}

int login_pwd(char pwd[30]){
    int inpos = 0;
    int setnull = 29;
    char key_in,pwdchk[30];
    do{pwd[setnull] = '\0'; pwdchk[setnull] = '\0';}while(setnull--);
    do{
        system("cls");
        printf("Password: ");
        printf("%s",pwd);
        key_in = getch();
        printf("\n");
        if(key_in == 13 && inpos >= 8) return 1;
        if(key_in == 27) return 99;
        if(key_in == 8){
            pwd[--inpos] = '\0';
            if(inpos <=0) inpos = 0; 
        }
        else if(isalnum(key_in) && inpos < 30)   pwd[inpos++] = key_in;
    }while(1);
}

int login_check(struct contact muict[100],struct contact indata,int *numuser,char *roles){
    int isfound = 0,i;
    for(i=0;i<*numuser;i++){
        printf("|%s| |%s|\n",muict[i].id,indata.id);
        printf("|%s| |%s|\n\n",muict[i].pwd,indata.pwd);
        if(strcmp(muict[i].id,indata.id) == 0) {
            if(strcmp(muict[i].pwd,indata.pwd) == 0) {
                isfound = 1;
                if(muict[i].id[0] == '0' && muict[i].id[1] == '0') *roles = 'A';
                else *roles = 'U';
                return i;
            }
        }
    }
    if(isfound == 0) return -1;
}

void Login(struct contact muict[100],int *numuser){
    struct contact indata;
    char retry;
    int step = 0;
    int useridx;
    char roles;
    do{
        switch(step){
            case 0: step += input_id(indata.id,'L'); break;
            case 1: step += login_pwd(indata.pwd);  break;
            case 2: 
                step ++; 
                useridx = login_check(muict,indata,numuser,&roles);
                break;
            case 3: 
                if(useridx == -1){
                    printf("[ERROR] wrong Username or Password");
                    printf("Retry? (Y/N)");
                    do{retry = getch(); if(retry == 'Y' || retry == 'N')break;}while(1);
                    if(retry == 'Y') step = 0; else break;
                }
                else step++;
        }
    }while(step<4);
    if (useridx != -1){
        roles == 'A' ? admin_home(muict,numuser,&useridx): user_home(muict,numuser,&useridx);
    }
}

void home(struct contact muict[100],int *numuser){
    int homecursor = 1;
    char homecursor_tmp;
    do{
        system("cls");
        printf("WELCOME to ICT-CMS\n");
        homecursor == 1 ? printf("-->\t[1] Registeration\n")   : printf("\t [1] Registeration\n");
        homecursor == 2 ? printf("-->\t[2] Login\n")           : printf("\t [2] Login\n");
        homecursor == 0 ? printf("-->\t[0] Exit\n")            : printf("\t [0] Exit\n");
        while(!kbhit());
        homecursor_tmp = getch();
        if(homecursor_tmp == 13) break;
        if(homecursor_tmp >= '0' && homecursor_tmp <= '2'){
            homecursor = (int) homecursor_tmp - 48;
        }
    }while(1);
    if(homecursor == 1) {
        Registeration(muict,numuser);
        home(muict,numuser);
    }
    else if(homecursor == 2) {
        Login(muict,numuser);
        home(muict,numuser);
    }    
}

int main()
{
    struct contact muict[100];
    int numuser;
    readfile(muict,&numuser);
    listdata(muict,&numuser);
    home(muict,&numuser);
}