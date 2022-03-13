# CString
Prosty wrapper na char* w C wykonanych w ramach zadania wstępnego na warsztaty Embedded C

Instalacja kompilatora (GCC) - Windows:

1. Udaj się na stronę winlibs -> https://winlibs.com
2. Odnajdź pliki pod napisem "GCC 11.2.0 + LLVM/Clang/LLD/LLDB 13.0.0 + MinGW-w64 9.0.0 (MSVCRT) - release 3", wybierz zgodnie ze sprzętem i pobierz.
3. Rozpakuj pobrany plik w dowolnym katalogu (np C:\mingw).
4. W pasku wyszukiwania windows (mała lupa obok ikonki Start) wpisz "Edytuj zmienne środowiskowe".
5. W zakładce "Zaawansowane" wybierz polecenie "Zmienne środowiskowe...".
6. Z listy zmiennych użytkownika wybierz zmienną "Path" i edytuj.
7. Dodaj nowy katalog z dopiskiem \bin -> tam gdzie rozpakowano pobrany plik w pkt 3. Np jeśli wybrano C:\mingw to pełna ścieżka będzie wyglądać tak: "C:\mingw\bin" (upewnij się, że we wskazanym folderze znajduje się folder bin).
8. Zamknij wszystkie pootwierane od pkt 5 okna (przyciski "Ok").
9. Wejdź w "Wiersz polecenia" (np. w taki sam sposób jak w pkt 4 -> wyszukaj program o nazwie "Wiersz polecenia").
10. Wpisz: gcc --version
11. Jeśli wszystko przebiegło pomyślnie to powinna być widoczna informacja o zainstalowanej wersji kompilatora.

Instalacja kompilatora (GCC/C99) - Linux (Ubuntu):

1. Otwórz Terminal.
2. Wpisz następujące komendy:

$ sudo apt update
$ sudo apt install build-essential
$ gcc --version 

3. Jeśli wszystko przebiegło pomyślnie to powinna być widoczna informacja o zainstalowanej wersji kompilatora.

Kompilacja programu

1. Ściągnij cały projekt (przycisk code -> download zip - jeśli go nie ma to do adresu strony dopisz /zipball/main).
2. Rozpakuj w dowolnym miejscu.
3. Linux -> kliknij prawym przyciskiem myszy wewnątrz rozpakowanego folderu i wybierz opcję otwarcia w teminalu. Windows -> udaj się do rozpakowanego folderu, kliknij w ścieżkę dostępu wyświetlaną obok ikonki odświeżania i wpisz "cmd". Alterntywnie włącz wiersz polecenia/ Terminal i udaj się ręcznie do wskazanych folderów komendą cd.
4. Linux -> w oknie Terminala wpisz:

$ gcc -g *.c -o program
$ ./program

lub (dla wersji C99)

$ c99 -g *.c -o program
$ ./program

Windows -> w oknie Wiersza polecenia wpisz:

gcc -g *.c -o program
program

lub (dla wersji C99)

gcc -std=c99 -g *.c -o program
program

Powyższe komendy zkompilują pliki z rozszerzeniem ".c" włącznie z ich linkowaniem. Alternatywnie można najpierw utworzyć pojedyncze pliki z rozszerzeniem ".o" za pomocą komendy (zadziała dowolna wariacja z poprzednich komend - gcc/gcc -std=c99/ c99):

gcc NAZWA_PLIKU.c -o NAZWA_PLIKU.o -c

,a następnie połączyć je ze sobą (reguła):

gcc -o NAZWA_PLIKU_WYJSCIOWEGO PLIK1.o PLIK2.o PLIK3.o ... PLIKN.o

Wpisanie:

NAZWA_PLIKU_WYJSCIOWEGO

uruchomi program.