#include<stdio.h>
void hienthicaua()
{
    printf("---------------- \n");
    printf("*CHAO MUNG DEN VOI CUOC THI C-BATTLE*\n");
    printf("Ban da san sang \n");
    printf("1 - San sang \n");
    printf("0 - Chua san sang \n");
}
void hienthicaub(char name[100], int mssv, char mail[100], char where[100], int e )
{
printf("Ho ten : ");
printf("%s", name)
printf("\n MSSV: ");
printf("%d",mssv);
printf("\n Mail: ");
printf("%s",mail)
printf("\n Nhung dia diem ban da den trong vong 14 ngay truoc: ");
printf("%s",where)
printf("Hay nho luon su dung khau trang va rua tay thuong xuyen ban nhe \n");
printf("---------------- \n");
printf("*XAC NHAN LUU THONG TIN*\n");
printf("1 - Xac nhan \n");
printf("0 - Chinh sua \n");
}
int main()
{
    int a=0,b,mssv;
    char name[100], mail[100], where[100];
    scanf("%d",&a)
    if(a==0)
    hienthicaua();
    if(a==1)
    {
    gets(name);
    scanf("%d",mssv);
    gets(mail);
    gets(where);
    hienthicaub(name,mssv,mail,where);
    scanf("%d",b);
    if(b==0)
    {
    hienthicaub(name,mssv,mail,where);    
    }
    }    
}