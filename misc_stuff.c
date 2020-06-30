static void
printer(const char * restrict buf, unsigned long len, const char * restrict msg)
{
    char lnb[8], chr[32], outp[64];

    if(msg) printf("%s:\n", msg);
    for(unsigned long i = 0, j; i < len;) {
        sprintf(lnb, "%.4X", (short)i);
        for(j = 0; j < 16 && i < len; ++j, ++i) {
            sprintf(outp + j * 3, "%.2hhX:", buf[i]);
            sprintf(chr + j, "%c", isalnum(buf[i]) ? buf[i] : '.');
        }
        outp[23] = outp[j * 3 - 1] = ' ';
        printf("%-4s | %-48s | %-16s |\n", lnb, outp, chr);
    }
}
