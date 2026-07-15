#include<stdio.h>

enum week{mon,tue,wed,thus,fri,sat,sun};
void main()
{
    enum week w;

    w=tue;

    printf("%d",w);
}
