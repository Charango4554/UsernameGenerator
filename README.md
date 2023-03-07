# UsernameGenerator
This program generates a random pseudonym by combining a random adjective and a random noun, adding a random number at the end, and generating the annagram of the letters of the pseudonym.


This program uses two arrays of strings to create a random nickname. The first array, adjectives, contains adjectives that will be used to describe the name chosen in the second array, names.

The program uses the srand function to initialize the random number generator using the current time. Then it generates two random numbers to select an adjective and a random name from the arrays.

The pseudonym is created by concatenating the selected adjective and noun, and then adding a random number of random length at the end.

The program also generates the annagram of the pseudonym, which is a rearranged version of the letters of the pseudonym in lower case, without the added number.

The program displays the generated pseudonym, its annagram and the length of the added number at the end.

The purpose of this program is to provide a unique and fun nickname for use online or in games. Users can reuse the program to generate new random nicknames according to their needs.
