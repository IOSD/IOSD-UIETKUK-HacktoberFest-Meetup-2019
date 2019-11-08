# Python Program - Merge Two Files

import shutil;
print("Enter 'x' for exit.");
filename1 = input("Enter first file name to merge: ");
if filename1 == 'x':
    exit();
else:
    filename2 = input("Enter second file name to merge: ");
    filename3 = input("Create a new file to merge content of two file inside this file: ");
    print();
    print("Merging the content of two file in",filename3);
    with open(filename3, "wb") as wfd:
        for f in [filename1, filename2]:
            with open(f, "rb") as fd:
                shutil.copyfileobj(fd, wfd, 1024*1024*10);
    print("\nContent merged successfully.!");
    print("Want to see ? (y/n): ");
    check = input();
    if check == 'n':
        exit();
    else:
        print();
        c = open(filename3, "r");
        print(c.read());
        c.close();
