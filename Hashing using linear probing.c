
// Implement hashing using linear probing //
# include<stdio.h>
#include<stdlib.h>
int tsize,hash[10],count=0;

int cal_hash(int key){
    return key%tsize;
}

int cal_rehash(int key){
    return (key +1)%tsize;
}

void insert(int key){
    int index;
    if(count!=tsize){
        index=cal_hash(key);
        while(hash[index]!=-1){
            index=cal_rehash(index);
        }
        hash[index]=key;
        count++;
    }
    else{
        printf("\nTable is full");
    }
}

int search(int key){
    int i,index,loc=-1;
    index=cal_hash(key);
    for(i=0;i<tsize;i++){
        loc=(index+i)%tsize;
        if(hash[loc]==key){
            return loc;
        }
    }
    return -1;
}

void delete(int key){
    int loc;
    if(count==0){
        printf("\nHash table empty. can't delete");
    }
    else{
        loc=search(key);
        if(loc!=-1){
            hash[loc]=-1;
            count--;
            printf("Key deleted\n");
        }
        else{
            printf("Key not deleted\n");
        }
    }
}

void display(){
    int i;
    printf("\nThe elements in the hash table are:\n");
    for(i=0;i<tsize;i++){
        printf("Element at position %d: %d\n",i,hash[i]);
    }
}

int main(){
    int key,i,ch,loc;
    printf("Enter the size of the hash table: ");
    scanf("%d",&tsize);
    for(i=0;i<tsize;i++){
        hash[i]=-1;
    }
    while(1){
        printf("\n1.Insert\n2.Search\n3.Delete\n4.Display\n5.Exit\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:{
                printf("Enter key to insert: ");
                scanf("%d",&key);
                insert(key);
                break;
            }
            case 2:{
                printf("Enter key to search: ");
                scanf("%d",&key);
                loc=search(key);
                if(loc!=-1){
                    printf("Key found at index %d\n",loc);
                }
                else{
                    printf("Key not found\n");
                }
                break;
            }
            case 3:{
                printf("Enter key to delete: ");
                scanf("%d",&key);
                delete(key);
                break;
            }
            case 4:{
                display();
                break;
            }
            case 5:{
                exit(0);
            }
            default:{
                printf("\nInvalid choice...!!\n");
            }
        }
    }
    return 0;
}