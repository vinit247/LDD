
struct pcdev_platform_data {
    int size;
    int perm;
    const char *serial_number;
};

#define RDWR 0x01
#define RDONLY 0x11
#define WRONLY 0x10 
