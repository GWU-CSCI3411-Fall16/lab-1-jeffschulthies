#include <stdio.h>

char* titles = {"Give You Up", "Stairway to Heaven"};
char* singers = {"Rick Astley", "Led Zeppelin"};

struct song_t {
    char* title;
    char* singer;
};

int main(int argc, char* argv[]) {
    struct song_t song;

    song.title = titles[0];
    song.singer = singers[0];
    return 0;
}
