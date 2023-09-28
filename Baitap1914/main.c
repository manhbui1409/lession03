#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CINEMAS 4

struct Cinema {
    char Name[25];
    char Address[35];
    int Seats;
};

void inputCinemaData(struct Cinema *cinemaList, int index) {
    printf("Nhap ten rap chieu phim thu %d: ", index + 1);
    scanf("%s", cinemaList[index].Name);

    printf("Nhap dia chi rap: ");
    scanf("%s", cinemaList[index].Address);

    printf("Nhap so luong ghe: ");
    scanf("%d", &cinemaList[index].Seats);
}

void displayCinemasByName(struct Cinema *cinemaList, int numCinemas) {
    // Sort cinemas by name in alphabetical order
    int i, j;
    for (i = 0; i < numCinemas - 1; i++) {
        for (j = 0; j < numCinemas - i - 1; j++) {
            if (strcmp(cinemaList[j].Name, cinemaList[j + 1].Name) > 0) {
                struct Cinema temp = cinemaList[j];
                cinemaList[j] = cinemaList[j + 1];
                cinemaList[j + 1] = temp;
            }
        }
    }

    // Display cinema details
    for (i = 0; i < numCinemas; i++) {
        printf("Name: %s\n", cinemaList[i].Name);
        printf("Address: %s\n", cinemaList[i].Address);
        printf("Seats: %d\n\n", cinemaList[i].Seats);
    }
}

void findCinemasByMinSeats(struct Cinema *cinemaList, int numCinemas, int minSeats) {
    int found = 0;
    int i;
    for (i = 0; i < numCinemas; i++) {
        if (cinemaList[i].Seats >= minSeats) {
            printf("Name: %s\n", cinemaList[i].Name);
            printf("Address: %s\n", cinemaList[i].Address);
            printf("Seats: %d\n\n", cinemaList[i].Seats);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong co rap nao phu hop.\n");
    }
}

void saveCinemaDataToFile(struct Cinema *cinemaList, int numCinemas) {
    FILE *file = fopen("cinema.dat", "wb");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return;
    }

    fwrite(cinemaList, sizeof(struct Cinema), numCinemas, file);
    fclose(file);
}

void readCinemaDataFromFile(struct Cinema *cinemaList, int numCinemas) {
    FILE *file = fopen("cinema.dat", "rb");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return;
    }

    fread(cinemaList, sizeof(struct Cinema), numCinemas, file);
    fclose(file);
}

int main() {
    struct Cinema cinemaList[MAX_CINEMAS];
    int choice, numCinemas = 0;

    do {
        printf("\nMenu:\n");
        printf("1. Nhap du lieu quan ly danh sach rap chieu phim.\n");
        printf("2. Hien thi danh sach rap ra man hinh.\n");
        printf("3. Tim rap theo so ghe toi thieu.\n");
        printf("4. Luu du lieu ra tep cinema.dat.\n");
        printf("5. Doc du lieu tu tep cinema.dat.\n");
        printf("0. Exit.\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numCinemas < MAX_CINEMAS) {
                    inputCinemaData(cinemaList, numCinemas);
                    numCinemas++;
                } else {
                    printf("Danh sach da day.\n");
                }
                break;
            case 2:
                if (numCinemas > 0) {
                    displayCinemasByName(cinemaList, numCinemas);
                } else {
                    printf("Danh sach rong.\n");
                }
                break;
            case 3:
                if (numCinemas > 0) {
                    int minSeats;
                    printf("Nhap so ghe toi thieu: ");
                    scanf("%d", &minSeats);
                    findCinemasByMinSeats(cinemaList, numCinemas, minSeats);
                } else {
                    printf("Danh sach rong.\n");
                }
                break;
            case 4:
                if (numCinemas > 0) {
                    saveCinemaDataToFile(cinemaList, numCinemas);
                    printf("Du lieu da duoc luu vao tep cinema.dat.\n");
                } else {
                    printf("Danh sach rong. Khong co gi de luu.\n");
                }
                break;
            case 5:
                readCinemaDataFromFile(cinemaList, MAX_CINEMAS);
                numCinemas = MAX_CINEMAS; // Set the number of cinemas to the maximum allowed
                printf("Du lieu da duoc doc tu tep cinema.dat.\n");
                break;
            case 0:
                printf("Ket thuc chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 0);

    return 0;
}

