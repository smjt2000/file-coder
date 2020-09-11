# file-coder
a file coder in C language.
this program will encrypt you files with a code.
it works perfectly on Linux.
to use the program just do this :

--- clone the repository
--- write this commands in terminal:

1:
--- gcc file-coder.c -o {your-output-fileName}
--- ./{your-output-fileName} {file-to-encrypt} {destination-file} {your-code}

to decrypt the file you can do this:
--- ./{your-ouptput-fileName} {encrypted-file} {destination-file} {your-code}

2:
--- gcc file-coder.c
--- ./a.out {file-to-encrypt} {destination-file} {your-code}
to decrypt the file you can do this:
--- ./a.out {encrypted-file} {destination-file} {your-code}


#you need to enter the same code that you entered when used to encrypt the file otherwise you can't access your file!!

example:
1:
gcc file-coder.c -o coder
./coder image.jpg encryptedFile.jpg 25
./coder encryptedFile.jpg decryptedFile.jpg 25   <-- this line will decrypt the file -->

2:
gcc file-coder.c
./a.out image.jpg encryptedFile.jpg 25
./a.out encryptedFile.jpg decryptedFile.jpg 25   <-- this line will decrypt the file -->
