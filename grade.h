#ifndef SHOWGRADE_H_INCLUDED
#define SHOWGRADE_H_INCLUDED
void showLetterGrade(float);

void showLetterGrade(float score)
{
    if (score >= 94.0F)
    {
        printf("A");
    }
    else if (score >= 80.0F && score < 93.9F)
    {
        printf("B");
    }
    else if (score >= 70.0F && score < 79.9F)
    {
        printf("C");
    }
    else if (score >= 60.0F && score < 69.9F)
    {
        printf("D");
    }
    else if (score >= 0.0F && score < 59.9F)
    {
        printf("F");
    }
}

#endif // SHOWGRADE_H_INCLUDED
