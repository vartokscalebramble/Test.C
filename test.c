#include <stdio.h>
#include <x86intrin.h>
#include <stdint.h>
#include <locale.h>

#define NUM_WORDS sizeof(words) / sizeof(char*)
char *words[]={
"God", "Man", "Love", "Hate",
"Pope", "Obama", "Terry", "Dianna", "Dog",
"Dance", "Run", "Smart", "Dumb", "Silly",
"Run", "Buy", "Sell", "Money", "Rich",
"Physics", "Girl", "Beer",
"Sing", "Mountain", "Street", "Car", "Jump",
"Who?", "What?", "Quit-it!", "Yes", "No",
"Swim", "Ocean", "Tree", "Heaven", "Hell",
"Money", "Computer", "Temple", "Church", "Election",
"Linux", "Windows", "TempleOS", "Programming", "Virus",
"Cop", "FBI", "CIA",
"Priest", "Drink", "Dance", "House", "Rent",
"Kill", "Soldier", "ISIS", "F35", "Russia",
"China", "USA", "Mexico", "Wall", "Immigrant",
"Hymn", "Poem", "Comic", "Doctor",
"Job", "Newspaper", "Site", "Web", "CPU",
"Programmer", "Engineer", "Operating System", "Task", "Math",
"Genius", "Engine", "Airplane", "PayPal",
"Initiative", "Voice", "War", "Peace", "Bummer"
};

int main(void)
{
    setlocale(LC_NUMERIC, "");
    uint64_t i;
    while (1)
    {
        getchar();
        
        i = __rdtsc();
        printf("%'ld:%s \n",i,words[i%NUM_WORDS]);
    }
    return 0;
}
