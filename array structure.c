#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employee employees[2];
    for(int i=0;i<2;i++){
        printf("enter details for employee %d:\n",i+1);
        printf("name:");
        scanf("%s", employees [i],name);
        printf("ID");
        scanf("%d",& employees[i],id);
        printf("salary:");
        scanf("%f",& employees [i], salary);
   }
   printf("\nemployee details:\n");
   for (int i=0;i<2;i++){
       printdf"name:%s,ID:%d, salary:%.2f\n", employees [i].name, employees [i],id, employees[i], salary);
   }
   return 0;
}