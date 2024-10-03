// passenger.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "passenger.h"

void generatePassengerFile(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (!file) {
        perror("Ошибка открытия файла");
        return;
    }

    Passenger passengers[] = {
        {"Иванов", "И.И.", 2, 30.5, "Москва", "12:30", 0, 1},
        {"Петров", "П.П.", 1, 15.0, "Санкт-Петербург", "14:00", 1, 0},
        {"Сидоров", "С.С.", 3, 45.0, "Екатеринбург", "16:15", 0, 2},
        {"Кузнецов", "К.К.", 0, 0.0, "Казань", "18:45", 1, 1},
        {"Смирнов", "С.С.", 4, 60.0, "Новосибирск", "20:00", 0, 0},
        {"Александров", "А.А.", 2, 25.0, "Тюмень", "10:00", 0, 3},
        {"Федоров", "Ф.Ф.", 1, 20.0, "Челябинск", "11:30", 1, 0},
        {"Морозов", "М.М.", 5, 70.0, "Воронеж", "13:15", 0, 2},
        {"Николаев", "Н.Н.", 3, 40.0, "Рязань", "15:00", 1, 1},
        {"Григорьев", "Г.Г.", 2, 35.0, "Сочи", "17:30", 0, 0}
    };

    size_t count = sizeof(passengers) / sizeof(passengers[0]);
    fwrite(passengers, sizeof(Passenger), count, file);
    fclose(file);
}

void printPassengerFile(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Ошибка открытия файла");
        return;
    }

    Passenger passenger;
    printf("%-20s %-5s %-15s %-15s %-20s %-10s %-10s\n",
           "Фамилия", "Инициалы", "Количество вещей", "Общий вес",
           "Пункт назначения", "Время вылета", "Пересадки");
    
    while (fread(&passenger, sizeof(Passenger), 1, file)) {
        printf("%-20s %-5s %-15d %-15.2f %-20s %-10s %-10d\n",
               passenger.lastName,
               passenger.initials,
               passenger.luggageCount,
               passenger.totalWeight,
               passenger.destination,
               passenger.departureTime,
               passenger.hasTransfers);
    }
    
    fclose(file);
}

void findPassengersByLuggageCount(const char *filename, int maxLuggageCount) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Ошибка открытия файла");
        return;
    }

    Passenger passenger;
    printf("\nПассажиры с количеством вещей не больше %d:\n", maxLuggageCount);
    
    while (fread(&passenger, sizeof(Passenger), 1, file)) {
        if (passenger.luggageCount <= maxLuggageCount) {
            printf("%-20s %-5s %-15d %-15.2f %-20s %-10s %-10d\n",
                   passenger.lastName,
                   passenger.initials,
                   passenger.luggageCount,
                   passenger.totalWeight,
                   passenger.destination,
                   passenger.departureTime,
                   passenger.hasTransfers);
        }
    }
    
    fclose(file);
}
