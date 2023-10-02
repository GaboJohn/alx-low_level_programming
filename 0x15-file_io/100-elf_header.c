#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_ident);
void print_field(const char *field_name, const char *field_value);

/**
* check_elf - Checks if a file is an ELF file.
* @e_ident: A pointer to an array containing the ELF magic numbers.
*
* Description: If the file is not an ELF file - exit code 98.
*/
void check_elf(unsigned char *e_ident)
{
if (e_ident[EI_MAG0] != ELFMAG0 ||
e_ident[EI_MAG1] != ELFMAG1 ||
e_ident[EI_MAG2] != ELFMAG2 ||
e_ident[EI_MAG3] != ELFMAG3)
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
exit(98);
}
}

/**
* print_field - Prints a field name and its value.
* @field_name: The name of the field.
* @field_value: The value of the field.
*/
void print_field(const char *field_name, const char *field_value)
{
printf(" %-18s%s\n", field_name, field_value);
}
/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int argc, char *argv[])
{
	int fd, i;
	ssize_t bytes_read;
	Elf64_Ehdr elf_header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
exit(98);
}

bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));

if (bytes_read != sizeof(Elf64_Ehdr))
{
dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file\n");
close(fd);
exit(98);
}

check_elf(elf_header.e_ident);

printf("ELF Header:\n");
print_field("Magic:", " ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", elf_header.e_ident[i]);
}
printf("\n");
print_field("Class:", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
(elf_header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid"));
print_field("Data:", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
(elf_header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid"));
print_field("Version:", elf_header.e_ident[EI_VERSION] == EV_CURRENT ? "1 (current)" : "");
print_field("OS/ABI:", "");
print_field("ABI Version:", "");
print_field("Type:", "");
print_field("Entry point address:", "");

close(fd);
return (0);
}
