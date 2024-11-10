#include <stdio.h>
struct Point {
    int x, y;
};
int main() {
    struct Point p = {1, 2};
    struct Point *ptr = &p;
    printf("Dot operator: x=%d, y=%d\n", p.x, p.y);
    printf("Arrow operator: x=%d, y=%d\n", ptr->x, ptr->y);
    return 0;
}