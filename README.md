# Arrays in C

## Array Assignments

We will practice using arrays in two different ways. First, you will edit the intarray.c file to accept user input for all five of the array elements. The second exercise will be to create a character array to output a string, and then prompt the user for their name and store it in a second character array.

### intarray.c

For this exercise, delete the lines that set values for each array element, and then prompt the user for each value. Use `scanf` to store the user's input.

```c
int arr[5];

printf("Enter your first number: ");
scanf("%i", &arr[0]);

// copy and paste the above two lines but change the prompt and which array element to store the user's input

printf("%i %i %i %i %i\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
```

### chararray.c

In this exercise, you will create a new character array for the user's name. The chararray.c file already has one character array created to store your name. Edit the string to have your name in it. Then, create a new character array with enough elements to store a user supplied name. Prompt the user to enter their name, then output out a message like "Hello *user name*. It is nice to meet you. My name is *your name*".

The `printf` and `scanf` functions use the `%s` format specifier for character arrays, usually called *strings*.

```c
char name[] = "First Last"; // edit this line
char user[N];               // create this line and replace N with however many elements you think is necessary

...

printf("Hello %s. It is nice to meet you. My name is %s\n", ...);
```

In C, character arrays are treated somewhat specially. So when using `scanf`, we do not say *which* element to fill, since we intend to fill the entire array. An example `scanf` statement should look something like `scanf("%s", &chararray);

## Array Notes

Arrays in c allow a programmer to create a variable that can contain multiple of the same data type. For instance, if you want to create variables to store all the grades of a student, it may be better to use an array.

```c
char grade1 = 'a';
char grade2 = 'b';
char grade3 = 'a';
char grade4 = 'c';
char grade5 = 'b';
char grade6 = 'a';
char grade7 = 'f';
```

Doing this with an array can be accomplished using just one "variable".

```c
char grades[7];
grades[0] = 'a';
grades[1] = 'b';
grades[2] = 'a';
grades[3] = 'c';
grades[4] = 'b';
grades[5] = 'a';
grades[6] = 'f';
```

Arrays have a special notation to assign or access a specific *element*. We create an array by putting how many elements we want in the array in between square brackets. `int temperatures[8]` has *8* elements in the array. However, when we want to *access* those elements, we start counting at *0*. This means that when we access element #N, we use *N-1* in the array notation. When creating an array to be filled later, you must specify how many elements you want for your array.

```c
char grades[7];
grades[0] = 'a'; // 1st element
grades[1] = 'b'; // 2nd element
grades[2] = 'a'; // 3rd element
grades[3] = 'c'; // 4th element
grades[4] = 'b'; // 5th element
grades[5] = 'a'; // 6th element
grades[6] = 'f'; // 7th element
```

### Assigning arrays using curly brace notation

An easier way to create and fill the elements of an array is by using a special curly brace notation. Here, we can create and fill our array in one line. You do not need to specify how large the array will be. The C compiler will infer from your array definition how long the array is.

```c
float temps[] = {83.3, 90.1, 76.8, 85.0};
```

Again, in order to access the different elements of the array, we have to use the *N-1* notation.

```c
temps[0]; // 1st element of the array = 83.3
temps[1]; // 2nd element of the array = 90.1
temps[2]; // 3rd element of the array = 76.8
temps[3]; // The last element of the array = 85.0
```

### Creating strings using character arrays
