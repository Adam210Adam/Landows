#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <enums.h>
typedef enum {FINE, DIAGNOSTICS} ComputerState;
typedef enum {LANDOWS, PHEONIX_OS, RHEONIX_OS, DATA_GARM} OS_S;
int main() {
    const ComputerState state = FINE;
    Permission current_permission;
    double IBSBversion = 1.2537;
    printf("[1]: AMD64\n");
    printf("[2]: ARM ASSEMBLY\n");
    printf("Please enter a choice [number of choice]: ");
    int choice;
    scanf("%d", &choice);
    switch (state)
    {
    case FINE:
        switch (choice)
        {
        case 1:
            printf("Running on AMD64 CPU\n");
            break;
        case 2:
            printf("Running on ARM assembly\nWarning: You are using a arm assembly machine learn more at hf");
            current_permission = USER_NORMAL;
            break;
        
        default:
            printf("Unknown cpu type shutting down");
            break;
        }
        break;
    case DIAGNOSTICS:
        printf("IBS Version: %9.4lf");
        printf("Diagnoising");
    default:

        MessageBeep(1);
        printf("Error: Unknown computer state please fix immeadiently. ");
        MessageBeep(1);
        printf("Shutting Down");
        break;
}}