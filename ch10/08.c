#include <stdio.h>

struct PRODUCT {
    char name[20];
    int price;
    int stock;
};

void print_product(struct PRODUCT product);

void pa10_08() {
    struct PRODUCT product;

    printf("제품명? ");
    if (scanf_s("%19s", product.name, sizeof(product.name)) != 1) return;

    printf("가격? ");
    if (scanf_s("%d", &product.price) != 1) return;

    printf("재고? ");
    if (scanf_s("%d", &product.stock) != 1) return;

    print_product(product);
}

void print_product(struct PRODUCT product) {
    printf("[%s %d원 재고:%d]\n", product.name, product.price, product.stock);
}

int main() {
    pa10_08();
    return 0;
}
