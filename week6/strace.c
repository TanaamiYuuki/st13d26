execve("./a.out", ["./a.out"], [/* 43 vars */]) = 0
brk(0)                                  = 0x17e1000
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901eb10000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=72415, ...}) = 0
mmap(NULL, 72415, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f901eafe000
close(3)                                = 0
access("/etc/ld.so.nohwcap", F_OK)      = -1 ENOENT (No such file or directory)
open("/lib/x86_64-linux-gnu/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\0\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\200\30\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=1815224, ...}) = 0
mmap(NULL, 3929304, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f901e530000
mprotect(0x7f901e6e5000, 2097152, PROT_NONE) = 0
mmap(0x7f901e8e5000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1b5000) = 0x7f901e8e5000
mmap(0x7f901e8eb000, 17624, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f901e8eb000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901eafd000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901eafc000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901eafb000
arch_prctl(ARCH_SET_FS, 0x7f901eafc700) = 0
mprotect(0x7f901e8e5000, 16384, PROT_READ) = 0
mprotect(0x600000, 4096, PROT_READ)     = 0
mprotect(0x7f901eb12000, 4096, PROT_READ) = 0
munmap(0x7f901eafe000, 72415)           = 0
brk(0)                                  = 0x17e1000
brk(0x1802000)                          = 0x1802000
open("sample1.c", O_RDONLY)             = 3
open("sample2.c", O_WRONLY|O_CREAT|O_TRUNC, 0666) = 4
fstat(3, {st_mode=S_IFREG|0644, st_size=25, ...}) = 0
mmap(NULL, 1048576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901e9fb000
read(3, "ieofhgheiuowpahgiewpghei\n", 1048576) = 25
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 1), ...}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901eb0f000
fstat(4, {st_mode=S_IFREG|0644, st_size=0, ...}) = 0
mmap(NULL, 1048576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f901e430000
write(1, "ieofhgheiuowpahgiewpghei\n", 25ieofhgheiuowpahgiewpghei
) = 25
read(3, "", 1048576)                    = 0
write(1, "\n", 1
)                       = 1
close(3)                                = 0
munmap(0x7f901e9fb000, 1048576)         = 0
write(4, "ieofhgheiuowpahgiewpghei\n", 25) = 25
close(4)                                = 0
munmap(0x7f901e430000, 1048576)         = 0
exit_group(0)                           = ?

