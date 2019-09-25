#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED

long ClearingText(unsigned char* buffer, long lenght);
char* SearchText(int num_arg, char *poin_arg[], long* num_symb_name_file);
unsigned char* WordProcessing(long length, long* newlength, long* num_enter, FILE* file, FILE* clearfile);

long ItLength(FILE* file);
long HowEnter(unsigned char* buffer, long newlength);
void FillStruct(struct pointer_buffer *strings, unsigned char *buffer, long newlength, long num_enter);

//void QuickSort(struct pointer_buffer *strings, long left, long right, int (*cmp)(struct pointer_buffer left, struct pointer_buffer right));
void QuickSort(struct pointer_buffer *strings, long left, long right, int (*cmp)(void* first, void* second));

int Compar(void* first, void* second);
int ComparRev(void* first, void* second);

void Swap(struct pointer_buffer *strings, long left, long right);

int ConvertToMyChar (unsigned char in);
int IsNotLetter(unsigned char input);

unsigned char* Buffering(long length, FILE* file);
void Writing(FILE* sortfile, struct pointer_buffer *strings, long num_enter);

struct pointer_buffer {
    unsigned char* pointer;
    long length;
};

bool logs = 0;

#endif // MAIN_H_INCLUDED
