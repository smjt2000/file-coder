# file-coder
a file coder in C language.
this program will encrypt your files with a code.
it works perfectly on Linux.

to use the program just do this :
--- clone the repository
--- write this commands in terminal:

1:
--- gcc file-coder.c -o {your-output-fileName}
--- ./{your-output-fileName} {file-to-encrypt} {destination-file}
to decrypt the file you can do this:
--- ./{your-ouptput-fileName} {encrypted-file} {destination-file}

2:
--- gcc file-coder.c
--- ./a.out {file-to-encrypt} {destination-file}
to decrypt the file you can do this:
--- ./a.out {encrypted-file} {destination-file}

# you can Download the binary file instead (compiled in linux)

example:
1:
gcc file-coder.c -o coder
./coder image.jpg encryptedFile.jpg 
./coder encryptedFile.jpg decryptedFile.jpg    <-- this line will decrypt the file -->

2:
gcc file-coder.c
./a.out image.jpg encryptedFile.jpg
./a.out encryptedFile.jpg decryptedFile.jpg   <-- this line will decrypt the file -->
