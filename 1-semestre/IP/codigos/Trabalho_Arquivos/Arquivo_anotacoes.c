/** FOPEN()
 * FILE *arquivo = fopen(const char *filename, const char *mode);
 * const char *mode = "r" abrir para leitura
 * const char *mode = "w" sobrescrever
 * const char *mode = "a" escreve no final
 * const char *mode = "r+" leitura e escrita
 * const char *mode = "w+" leitura e escrita sobrescrito
 * const char *mode = "a+" leitura e escrita no final
 */

/** FGETC()
 * int fgetc(FILE *stream);
 * 
 * Exemplo
 * FILE *arquivo = fopen("example.txt", "r");
 * if (file == NULL)
 * {
 *      perror("Error opening file");
 *      return 1;
 * }
 * 
 * int ch;
 * while ((ch = fgetc(arquivo)) != EOF)
 * {
 *      putchar(ch);
 * }
 */