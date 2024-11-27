# NslookupTool_(C++)

This project is a C++ DNS Lookup Tool that resolves domain names to their respective IP addresses using the Winsock API for DNS resolution. It also supports logging the results and handling domain input through command-line arguments.

## Table of Contents

- [Requirements](#requirements)
- [Setup](#setup)
- [Usage](#usage)
- [Screenshot](#screenshot)

## Requirements

Before compiling and running the program, ensure the following are installed on your Windows machine:

- **g++ (MinGW)**: You can download MinGW from [here](https://osdn.net/projects/mingw/releases/).
- **Winsock2 library**: This is required for DNS resolution using the `getaddrinfo` function.

## Setup

1. **Clone the repository**:
   Open your command line (CMD or PowerShell) and run the following command to clone the repository:
   
   ```bash
   git clone https://github.com/suraj-d-sun/NslookupTool_C_plus_plus.git
   cd NslookupTool_C_plus_plus

2. **Navigate to the source folder**: 
    Change the directory to where the source files (.cpp and .h files) are located:
    ```bash
    cd src

3. **Compile the .cpp files**: Run the following commands to compile the .cpp files into object files:
    ```bash
    g++ -c ConfigManager.cpp -I ..\include -o ConfigManager.o
    g++ -c DNSResolver.cpp -I ..\include -o DNSResolver.o
    g++ -c Logger.cpp -I ..\include -o Logger.o

4. **Create the static library**: After compiling the object files, run this command to create the static library file:
    ```bash
    ar rcs lib.lib *.o

5. **Move the lib file to the lib directory**: Move the generated lib.lib file to the lib directory:
    ```bash
    move lib.lib ..\lib

6. **Compile the main program**: Now, compile the main.cpp file along with the static library and the Winsock library:
    ```bash
    g++ main.cpp -I .\include -L .\lib -llib -o main.exe -lws2_32


## Usage
1. **Run the Program**: Once the executable (main.exe) is created, you can run the program from the command line.
    ```bash
    main domain=www.youtube.com
The program will resolve the domain www.youtube.com and display its associated IP addresses.

2. **Output Example**: After running the command, you should see output like this:
    ```bash
    [INFO.] Results for www.youtube.com:
    [INFO.] 142.250.195.238
    [INFO.] 142.250.196.14
    [INFO.] 142.250.196.46
    [INFO.] 142.250.196.78
    [INFO.] 142.250.196.174
    [INFO.] 172.217.163.174
    [INFO.] 172.217.163.206

# Screenshot
Below is a example screenshots showing the command-line output of the program when resolving the domains.

![{87433C3A-8DD0-41C2-B6CD-C5A7885A9EFF}](https://github.com/user-attachments/assets/e9ef7f4c-92c5-4a30-b2ee-a1807e98293a)

![{4A963BD0-CCB4-488F-BF0E-2FDF1D703A9D}](https://github.com/user-attachments/assets/bee23224-f12c-4827-983a-e6a59d4f6b9f)

![{3F6169A8-4674-4FFC-899C-830B5950A307}](https://github.com/user-attachments/assets/3bacee68-5d77-41db-9659-b03fd9509b7e)

![{EB2C340B-D450-4189-89CF-B4C7AF5DE751}](https://github.com/user-attachments/assets/8af6c239-0371-4b02-b8a7-ea9efb247622)


