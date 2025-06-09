#define _CRT_SECURE_NO_WARNINGS  // 반드시 가장 위에 있어야 합니다!
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10
#define MAX_PLAYLIST 5

// 노래 구조체 정의
struct SONG {
    char title[50];
    char artist[50];
    int duration; // 초 단위
};

// 플레이리스트 출력 함수
void print_playlist(struct SONG playlist[], int count) {
    int total_duration = 0;

    printf("\n▶ 현재 플레이리스트:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s (%d초)\n", i + 1, playlist[i].artist, playlist[i].title, playlist[i].duration);
        total_duration += playlist[i].duration;
    }
    printf("총 재생 시간: %d분 %d초\n\n", total_duration / 60, total_duration % 60);
}

int main() {
    // 전체 곡 목록 초기화
    struct SONG all_songs[MAX_SONGS] = {
        {"Butter", "BTS", 165},
        {"Dynamite", "BTS", 199},
        {"Permission to Dance", "BTS", 189},
        {"Love Dive", "IVE", 170},
        {"Ditto", "NewJeans", 180},
        {"Hype Boy", "NewJeans", 178},
        {"Tomboy", "(G)I-DLE", 172},
        {"ANTIFRAGILE", "LE SSERAFIM", 175},
        {"Cupid", "FIFTY FIFTY", 174},
        {"I AM", "IVE", 171}
    };

    struct SONG playlist[MAX_PLAYLIST];
    int playlist_count = 0;
    int choice;

    while (playlist_count < MAX_PLAYLIST) {
        printf("\n전체 곡 목록:\n");
        for (int i = 0; i < MAX_SONGS; i++) {
            printf("%2d. %s - %s (%d초)\n", i + 1, all_songs[i].artist, all_songs[i].title, all_songs[i].duration);
        }

        printf("\n추가할 곡 번호를 입력하세요 (1~%d, 0 입력시 종료): ", MAX_SONGS);
        if (scanf("%d", &choice) != 1 || choice < 0 || choice > MAX_SONGS) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
            while (getchar() != '\n'); // 입력 버퍼 비우기
            continue;
        }

        if (choice == 0) {
            printf("입력을 종료합니다.\n");
            break;
        }

        playlist[playlist_count] = all_songs[choice - 1];
        playlist_count++;

        print_playlist(playlist, playlist_count);

        if (playlist_count == MAX_PLAYLIST) {
            printf("플레이리스트에 최대 5곡이 등록되었습니다.\n");
        }
    }

    return 0;
}
