#include <stdio.h>
int main()
{
    int *p = NULL;
    int i = 500000;
    while (1)
    {
        p = (int*)realloc(p, i * sizeof(int));/*put breakpoint here*/
        i += 500000;
    }
    return 0;
}
// نتیجه ای که می گیریم این است که اگر حافظه پس از اجرای برنامه خالی نشود
// پس از مدتی باعث می شود حافظه  کامپیوتر پر شود
// و برنامه ما از کار بیفتد
