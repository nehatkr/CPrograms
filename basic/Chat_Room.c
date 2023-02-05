#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    FILE *chat_file;
    FILE *count_file_read;  // variable for reading a file
    FILE *count_file_write; // variable for writing a file
    char count[10];         // for storing the user count
    char user_input[2000];
    time_t current_time;
    time(&current_time);

    // Read & update current value of user count
    count_file_read = fopen("user_no.txt", "r");
    fgets(count, 10, count_file_read);
    fclose(count_file_read);
    int current_count = atoi(count);
    current_count++;

    // Write updated value of user count to file
    count_file_write = fopen("user_no.txt", "w");
    fprintf(count_file_write, "%d", current_count);
    fclose(count_file_write);

    chat_file = fopen("chatfile.txt", "a");
    do
    {
        printf("User %d:\t ", current_count);
        gets(user_input);
        puts(user_input);
        if (!strcmp(user_input, "exit")) // for comparing two string
        {
            break;
        }
        else
        {
            char *t = ctime(&current_time); // for time and chat in a same line.
            if (t[strlen(t) - 1] == '\n')
            {
                t[strlen(t) - 1] = '\t';
            }
            fprintf(chat_file, "User %d\t%s%s\n", current_count, t, user_input);
        }

    } while (1);

    fclose(chat_file);
    return 0;
}
