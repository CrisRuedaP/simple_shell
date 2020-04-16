/**
* *_strcat - concatenates two strings
* @src: string to be appended
* @dest: string appended
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
        int src_length = 0;
        int dest_length = 0;
        int length = 0;
        int count = 0;
        char *src_i = src, *dest_i = dest;

                for (; *src != '\0'; src_length++)
                {
                        src++;
                }
                src = src_i;
                for (; *dest != '\0'; dest_length++)
                {
                        dest++;
                }
                dest = dest_i;
                length = src_length + dest_length;
                count = dest_length;
                for (; count < length; count++)
                {
                        dest[count] = src[count - dest_length];
                }
dest[length] = '\0';
return (dest);
}