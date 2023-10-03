#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct motorbike_st {
    char name[20];
    char manufacturer[10];
    char madein[12];
    long int price;
} motorbike;

motorbike motorbikeList[3];

void showMenu() {
    printf("\n1. Input data of motorbike");
    printf("\n2. Sort, display details information, and statistics of all motorbikes");
    printf("\n3. Find the motorbike of a manufacturer");
    printf("\n4. Save to text file motorbike.txt");
    printf("\n5. Exit");
    printf("\n\nChoose an option: ");
}

void inputData() {
	int i;
    for ( i = 0; i < 3; i++) {
        printf("\nEnter data of motorbike %d:", i + 1);
        printf("\nName: ");
        scanf("%s", motorbikeList[i].name);
        printf("Manufacturer: ");
        scanf("%s", motorbikeList[i].manufacturer);
        printf("Made In: ");
        scanf("%s", motorbikeList[i].madein);
        printf("Price: ");
        scanf("%ld", &motorbikeList[i].price);
    }
}

void displayMotorbikes() {
	int i;
    printf("\nNo || Name || Manufacturer || Made In || Price");
    for ( i = 0; i < 3; i++) {
        printf("\n%3d || %s || %s || %s || %ld",
               i + 1,
               motorbikeList[i].name,
               motorbikeList[i].manufacturer,
               motorbikeList[i].madein,
               motorbikeList[i].price);
    }
}

void displayStatistics() {
    int count[3] = {0};
    int i,j;
    printf("\n\nManufacturer statistics:");
    for ( i = 0; i < 3; i++) {
        count[i]++;
        for ( j = i + 1; j < 3; j++) {
            if (strcmp(motorbikeList[i].manufacturer, motorbikeList[j].manufacturer) == 0) {
                count[i]++;
                count[j] = 0;
            }
        }
    }
    for ( i = 0; i < 3; i++) {
        if (count[i] != 0) {
            printf("\n%s has %d motorbike(s)", motorbikeList[i].manufacturer, count[i]);
        }
    }
}

void sortByManufacturer() {
    motorbike temp;
    int i,j;
    for ( i = 0; i < 2; i++) {
        for ( j = i + 1; j < 3; j++) {
            if (strcmp(motorbikeList[i].manufacturer, motorbikeList[j].manufacturer) < 0) {
                temp = motorbikeList[i];
                motorbikeList[i] = motorbikeList[j];
                motorbikeList[j] = temp;
            }
        }
    }
}

void searchByManufacturer() {
    char manufacturer[10];
    int i;
    printf("\nEnter the manufacturer for search: ");
    scanf("%s", manufacturer);
    int found = 0;
    printf("\nNo || Name || Manufacturer || Made In || Price");
    for ( i = 0; i < 3; i++) {
        if (strcmp(motorbikeList[i].manufacturer, manufacturer) == 0) {
            printf("\n%03d || %s || %s || %s || %ld",
                   i + 1,
                   motorbikeList[i].name,
                   motorbikeList[i].manufacturer,
                   motorbikeList[i].madein,
                   motorbikeList[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("\nThere are no motorbikes of this manufacturer");
    }
}

void saveToFile() {
	int i;
    FILE *file = fopen("motorbike.txt", "w");
    if (file == NULL) {
        printf("\nError opening file");
        return;
    }
    fprintf(file, "No || Name || Manufacturer || Made In || Price\n");
    for ( i = 0; i < 3; i++) {
        fprintf(file, "%03d || %s || %s || %s || %ld\n",
                i + 1,
                motorbikeList[i].name,
                motorbikeList[i].manufacturer,
                motorbikeList[i].madein,
                motorbikeList[i].price);
    }
    fclose(file);
    printf("\nData saved to motorbike.txt");
}

int main() {
    int choice;
    do {
        showMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                inputData();
                break;
            case 2:
                sortByManufacturer();
                displayMotorbikes();
                               displayStatistics();
                break;
            case 3:
                searchByManufacturer();
                break;
            case 4:
                saveToFile();
                break;
            case 5:
                printf("\nExiting program...");
                break;
            default:
                printf("\nInvalid choice. Please try again.");
        }
    } while (choice != 5);

    return 0;
}
