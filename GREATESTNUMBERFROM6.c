#include <stdio.h>
int main() 
{
    int a,b,c,d,e,f;
    printf("enter the numbers");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(a>b) 
    {
        //a c d e f
        if(a>c)
        {
            //a d e f
            if(a>d)
            {
                //a e f
                if(a>e)
                {
                    //a f
                    if(a>f)
                    {
                        printf("a is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
            else
            {
                //d e f
                if(d>e)
                {
                    //d f
                    if(d>f)
                    {
                        printf("d is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greatet");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
        }
        else
        {
            //b d e f
            if(b>d)
            {
                //b e f
                if(b>e)
                {
                    //b f
                    if(b>f)
                    {
                        printf("b is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
            else
            {
                //d e f
                if(d>e)
                {
                    //d f
                    if(d>f)
                    {
                        printf("d is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
        }
    }
    else
    {
        //b c d e f
        if(b>c)
        {
            //b d e f
            if(b>d)
            {
                //b e f
                if(b>e)
                {
                    //b f
                    if(b>f)
                    {
                        printf("b is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    printf("f is greater");
                }
            }
            else
            {
                //d e f
                if(d>e)
                {
                    //d f
                    if(d>f)
                    {
                        printf("d is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
        }
        else
        {
            //c d e f
            if(c>d)
            {
                //c e f
                if(c>e)
                {
                    //c f
                    if(c>f)
                    {
                        printf("c is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
            else
            {
                //d e f
                if(d>e)
                {
                    //d f
                    if(d>f)
                    {
                        printf("d is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
                else
                {
                    //e f
                    if(e>f)
                    {
                        printf("e is greater");
                    }
                    else
                    {
                        printf("f is greater");
                    }
                }
            }
        }
    }
}