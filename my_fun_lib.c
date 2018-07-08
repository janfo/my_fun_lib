
int find_element_i(int element, int tab[], int n)
{
    int pos=0;
    while( (pos<n) && ( tab[pos]!= element )) pos++;
    return  pos<n?pos:-1;
}

int find_element_f(float element, float tab[], int n)
{
    int pos=0;
    while( (pos<n) && ( tab[pos]!= element )) pos++;
    return  pos<n?pos:-1;
}


void swap_array(void *tab[],int n1,int n2)
{
    void *tmp;
    tmp=tab[n1];
    tab[n1]=tab[n2];
    tab[n2]=tmp;

}
