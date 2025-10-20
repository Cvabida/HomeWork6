#include <stdio.h>
#include <time.h>

int main() 
{
    int birth_year, current_year, age;
    current_year = 2025;
    
    printf("Введите год рождения: ");
    scanf("%d", &birth_year);
    
    {

    age = current_year - birth_year;
    

    printf("Результат: %d ", age);
    
    if (age % 10 == 1 && age % 100 != 11) {
        printf("год\n");
    } else if (age % 10 >= 2 && age % 10 <= 4 && 
               (age % 100 < 10 || age % 100 >= 20)) {
        printf("года\n");
    } else printf("лет\n");
    }
    
    return 0;
}