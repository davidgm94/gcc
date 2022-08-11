#undef GCC_I386_RNU
#define GCC_I386_RNU 1

#define GNU_USER_LINK_EMULATION32 "elf_i386"
#define GNU_USER_LINK_EMULATION64 "elf_x86_64"
#define GNU_USER_LINK_EMULATIONX32 "elf32_x86_64"

#define GNU_USER_DYNAMIC_LINKER32 "/lib/i386-rnu/ld.so"
#define GNU_USER_DYNAMIC_LINKER64 "/lib/x86_64-rnu/ld.so"
#define GNU_USER_DYNAMIC_LINKERX32 "/lib/x86_64-rnu-x32/ld.so"
