#include <stdio.h>

int within_x_percent(int ref, int data, int x) {
    int lower_bound = ref - ref * x / 100;
    int upper_bound = ref + ref * x / 100;
    return data >= lower_bound && data <= upper_bound;
}

int main() {
    int observed_boiling_point;
    int substances[] = {100, 357, 1187, 2193, 2660};
    char substance_names[][10] = {"Water", "Mercury", "Copper", "Silver", "Gold"};
    int tolerance = 5;

    printf("Enter observed boiling point in °C: ");
    scanf("%d", &observed_boiling_point);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (within_x_percent(substances[i], observed_boiling_point, tolerance)) {
            printf("Substance: %s\n", substance_names[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Substance unknown\n");
    }

    return 0;
}