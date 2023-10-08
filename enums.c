#include <stdio.h>
#include <stdlib.h>

typedef enum {
    APP=10,
    ANTIVIRUS=30,
    CODE_APP=100,
    SYSTEM=200,
    HARDWARE=829633
} NixType;
typedef enum {
    TRUSTED_INSTALLER=10,
    RUNTIME=8,
    CLOSETIME=6,
    ADMINSTATOR=4,
    LAXN=2,
    USER_NORMAL=0

} Permission;
int main() {
    NixType typea = HARDWARE;
    printf("%d%% Access", typea);
}