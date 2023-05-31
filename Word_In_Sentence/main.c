#include <stdio.h>
#include <string.h>

int word_search(char* sentence, char* word);

int main()
{
    char sentence[100];
    char word[20];
    printf("Enter text: ");fgets(sentence,100,stdin);
    printf("Enter word: ");scanf("%s",word);
    int index=word_search(sentence,word);
    if(index==1){
        printf("The sentence does not include the word.");
        return 0;
    }
    printf("The word searched starts of index %d",index);

    return 0;
}

int word_search(char* sentence, char* word){
    int size1,size2;
    size1=strlen(sentence);
    size2=strlen(word);
    int i,j,k;
    i=0,j=0,k=0;
    int result=-1;
    while(i<(size1-size2)){
        k=i;
        j=0;
        result=1;
        while(j<size2){
            if(sentence[k]!=word[j]){
                result=0;
                break;
            }
            j++;
            k++;
        }
        if(result==1){
            return i;
        }
        i++;
    }
    return -1;
}
