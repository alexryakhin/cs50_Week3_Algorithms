#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Linear search
// New type defining

typedef struct {
    string name;
    string phone;
} person;

int main(void) {
    person people[2];

    people[0].name = "Xander";
    people[0].phone = "+7-999-555-2277";

    people[1].name = "Jack";
    people[1].phone = "+1-999-888-7777";

    for (int i = 0; i < 2; i++) {
        if (strcmp(people[i].name, "Jack") == 0) {
            printf("Found! %s\n", people[i].phone);
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}
