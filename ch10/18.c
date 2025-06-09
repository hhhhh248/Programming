#define _CRT_SECURE_NO_WARNINGS  // �ݵ�� ���� ���� �־�� �մϴ�!
#include <stdio.h>
#include <string.h>

#define MAX_SONGS 10
#define MAX_PLAYLIST 5

// �뷡 ����ü ����
struct SONG {
    char title[50];
    char artist[50];
    int duration; // �� ����
};

// �÷��̸���Ʈ ��� �Լ�
void print_playlist(struct SONG playlist[], int count) {
    int total_duration = 0;

    printf("\n�� ���� �÷��̸���Ʈ:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s - %s (%d��)\n", i + 1, playlist[i].artist, playlist[i].title, playlist[i].duration);
        total_duration += playlist[i].duration;
    }
    printf("�� ��� �ð�: %d�� %d��\n\n", total_duration / 60, total_duration % 60);
}

int main() {
    // ��ü �� ��� �ʱ�ȭ
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
        printf("\n��ü �� ���:\n");
        for (int i = 0; i < MAX_SONGS; i++) {
            printf("%2d. %s - %s (%d��)\n", i + 1, all_songs[i].artist, all_songs[i].title, all_songs[i].duration);
        }

        printf("\n�߰��� �� ��ȣ�� �Է��ϼ��� (1~%d, 0 �Է½� ����): ", MAX_SONGS);
        if (scanf("%d", &choice) != 1 || choice < 0 || choice > MAX_SONGS) {
            printf("�߸��� �Է��Դϴ�. �ٽ� �Է��ϼ���.\n");
            while (getchar() != '\n'); // �Է� ���� ����
            continue;
        }

        if (choice == 0) {
            printf("�Է��� �����մϴ�.\n");
            break;
        }

        playlist[playlist_count] = all_songs[choice - 1];
        playlist_count++;

        print_playlist(playlist, playlist_count);

        if (playlist_count == MAX_PLAYLIST) {
            printf("�÷��̸���Ʈ�� �ִ� 5���� ��ϵǾ����ϴ�.\n");
        }
    }

    return 0;
}
