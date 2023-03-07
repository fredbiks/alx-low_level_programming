/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search in.
 * @accept: bytes to be accepted in the prefix.
 *
 * Return: the number of bytes in the initial segment of s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j, count = 0;
        int match_found;

        for (i = 0; *(s + i); i++)
        {
                match_found = 0;
                for (j = 0; *(accept + j); j++)
                {
                        if (*(s + i) == *(accept + j))
                        {
                                match_found = 1;
                                count++;
                                break;
                        }
                }
                if (match_found == 0)
                {
                        break;
                }
        }

        return (count);
}

