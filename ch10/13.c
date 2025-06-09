#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

struct POINT {
    int x;
    int y;
};

struct RECT {
    struct POINT left_bottom;
    struct POINT right_top;
};

void print_rect(struct RECT r) {
    printf("���簢�� ���ϴ�: (%d, %d)\n", r.left_bottom.x, r.left_bottom.y);
    printf("���簢�� ����: (%d, %d)\n", r.right_top.x, r.right_top.y);

    int width = r.right_top.x - r.left_bottom.x;
    int height = r.right_top.y - r.left_bottom.y;
    printf("�ʺ�: %d, ����: %d, ����: %d\n", width, height, width * height);
}

int main() {
    struct RECT rect;

    printf("���ϴ� x y? ");
    if (scanf_s("%d %d", &rect.left_bottom.x, &rect.left_bottom.y) != 2) return 1;

    printf("���� x y? ");
    if (scanf_s("%d %d", &rect.right_top.x, &rect.right_top.y) != 2) return 1;

    print_rect(rect);
    return 0;
}
