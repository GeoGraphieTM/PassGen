# PassGen
Password Generator in Cpp

This program prompts the user to enter the desired password length and then generates a random password of that length using the C++11 random number generation facilities. The generate_password function takes an int argument which is the length of the password to generate. Inside the function, the string "characters" contains all the possible characters that can be used in the password. Then using a random number generator and a uniform distribution, it picks random characters from the "characters" string and append them to the password.

It's important to notice that this password generator is not very secure, and you should use a more robust method to generate secure password, like using a cryptographically secure random number generator, or using a library like bcrypt or scrypt to hash the password.
