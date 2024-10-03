// passenger.h
#ifndef PASSENGER_H
#define PASSENGER_H

#define MAX_NAME_LENGTH 50
#define MAX_DESTINATION_LENGTH 50
#define MAX_CHILDREN 5

typedef struct {
    char lastName[MAX_NAME_LENGTH];
    char initials[3]; // Инициалы (например, "И.И.")
    int luggageCount; // Количество вещей
    float totalWeight; // Общий вес вещей
    char destination[MAX_DESTINATION_LENGTH]; // Пункт назначения
    char departureTime[6]; // Время вылета (HH:MM)
    int hasTransfers; // Наличие пересадок (0 - нет, 1 - да)
    int childrenCount; // Количество детей
} Passenger;

void generatePassengerFile(const char *filename);
void printPassengerFile(const char *filename);
void findPassengersByLuggageCount(const char *filename, int maxLuggageCount);

#endif // PASSENGER_H