//
// Created by Akshansh Gusain on 13/01/21.
//
//Repetition Allowed
/*
 * For an input string of size n, there will be n^n permutations with repetition allowed.
 * The idea is to fix the first character at first index and recursively call for other
 * subsequent indexes. Once all permutations starting with the first character are printed,
 * fix the second character at first index. Continue these steps till last character.*/
#include <stdc++.h>
using namespace std;


/* Following function is used by
the library qsort() function
to sort an array of chars */
int compare (const void * a, const void * b);

/* The main function that recursively
prints all repeated permutations of
the given string. It uses data[] to store all
permutations one by one */
void allLexicographicRecur (char *str, char* data,
                            int last, int index)
{
    int i, len = strlen(str);

    // One by one fix all characters at
    // the given index and recur for
    // the/ subsequent indexes
    for ( i = 0; i < len; i++ )
    {
        // Fix the ith character at index
        // and if this is not the last
        // index then recursively call
        // for higher indexes
        data[index] = str[i] ;

        // If this is the last index then
        // print the string stored in
        // data[]
        if (index == last)
            cout << data << endl;
        else // Recur for higher indexes
            allLexicographicRecur (str, data, last, index+1);
    }
}

/* This function sorts input string,
allocate memory for data (needed
for allLexicographicRecur()) and
calls allLexicographicRecur() for
printing all permutations */
void allLexicographic(char *str)
{
    int len = strlen (str) ;

    // Create a temp array that will
    // be used by allLexicographicRecur()
    char *data = (char *) malloc (sizeof(char) * (len + 1)) ;
    data[len] = '\0';

    // Sort the input string so that
    // we get all output strings in
    // lexicographically sorted order
    qsort(str, len, sizeof(char), compare);

    // Now print all permutaions
    allLexicographicRecur (str, data, len-1, 0);

    // Free data to avoid memory leak
    free(data);
}

// Needed for library function qsort()
int compare (const void * a, const void * b)
{
    return ( *(char *)a - *(char *)b );
}

// Driver code
int main()
{
    char str[] = "AAB";
    cout << "All permutations with repetition of "<<
         str <<" are: "<<endl ;
    allLexicographic(str);
    return 0;
}

