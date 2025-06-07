# holbertonschool-shell - Permissions

This project contains shell scripts related to file and directory permission management in a Unix-like operating system. The goal is to practice using commands like `chmod`, `chown`, `chgrp`, and working with symbolic links and ownership.

## Tasks

### 0. iam_betty
Switches the current user to `betty`.

### 1. who_am_i
Prints the effective username of the current user.

### 2. groups
Displays all the groups the current user is part of.

### 3. new_owner
Changes the owner of the file `hello` to `betty`.

### 4. empty
Creates an empty file named `hello`.

### 5. execute
Adds execute permission to the owner of the file `hello`.

### 6. multiple_permissions
Adds execute permission to the owner, write permission to the group, and read permission to others for the file `hello`.

### 7. everybody
Adds execute permission to the owner, the group owner, and other users for the file `hello`.

### 8. James Bond
Sets permissions of the file `hello` so that only others have all permissions (read, write, execute), and the owner and group have none.

### 9. John Doe
Sets the mode of the file `hello` to `-rwxr-x-wx`.

### 10. mirror_permissions
Sets the permissions of the file `hello` to match those of the file `olleh`.

### 11. directories_permissions
Adds execute permission to all subdirectories of the current directory for the owner, the group owner, and all other users. Regular files are not affected.

### 12. directory_permissions
Creates a directory named `my_dir` with permissions `751`.

### 13. change_group
Changes the group owner of the file `hello` to `school`.

### 14. change_owner_and_group
Changes the owner to `vincent` and the group owner to `staff` for all files and directories in the current directory.

### 15. symbolic_link_permissions
Changes the owner and group owner of the symbolic link `_hello` to `vincent` and `staff`, respectively.

### 16. if_only
Changes the owner of the file `hello` to `vincent` only if it is currently owned by `guillaume`.

## Project Structure

##Tasks

### 0. hello_world
This script prints "Hello, World" followed by a new line to the standard output.

