#include <stdio.h>


/* int main(){
    printf("hello world");
//////////////////////////////////////////////////////////////

    short a = 12, b = 100, c = -50;
    printf("%dを左に1ビットシフト---%d\n",c,c<<1);
    printf("%dを右に1ビットシフト---%d\n",c,c>>1);
//////////////////////////////////////////////////////////////

    int kazu;
    printf("整数を入力：");
    scanf("%d", &kazu);
    printf("%d", kazu);
//////////////////////////////////////////////////////////////

    int age;
    scanf("%d",&age);
    if(age<6){
        printf("無料");
    }else{
        printf("1000円");
    }
//////////////////////////////////////////////////////////////

    int c;
    int end = 0;
    
    while(1){
        printf("****MENU****\n");
        printf("A:ゲーム\n");
        printf("B:ミュージック\n");
        printf("C:計算\n");
        printf("X:終了\n");
        printf("************\n");

        while(1){
            c=getchar();
            if(c != '\n'){
                break;
            }
        }

        switch(c){
            case 'A':
            case 'a':
                printf("ゲームを始めます\n");
                break;
            case 'B':
            case 'b':
                printf("音楽を流します\n");
                break;
            case 'C':
            case 'c':
                printf("計算を始めます\n");
                break;
            case 'X':
            case 'x':
                end = 1;
                break;
            default:
                printf("不正な入力です\n");
                break;
        }
        if (end == 1){
            break;
        }
    }
    printf("終了します\n");
//////////////////////////////////////////////////////


int i;
for (i=1; i<10; i++){
    printf("%d回目の繰り返しです\n", i);
}
//////////////////////////////////////////////////////


    int i, j;
    for (i=1; i<10; i++){
        for (j=1; j<10; j++){
            if (i>j){
                continue;
            }
            printf("%d * %d = %2d\n", i, j, i*j);
        }
        printf("---------------\n");
    }
    ////////////////////////////////////////////////////////////


    int a,sum=0;
    for (a=1; a<=100; a++){
        sum=sum+a;
    }
    printf("%d", sum);
    ////////////////////////////////////////////////////////


    return 0;
} */
////////////////////////////////////////////////


/* int add(int);

int main(){
    int sum;

    sum = add(10);
    printf("sum = %d\n", sum);

    sum = add(20);
    printf("sum = %d\n", sum);

    sum = add(100);
    printf("sum = %d\n", sum);


    return 0;
}

int add(int x){
    static int gokei = 0;
    gokei += x;
    return gokei;
} */
//////////////////////////////////////////////


/* int men(int x){
    return x * x * 3.14;
}

int main(){
    int han;
    printf("半径を入力してください：");
    scanf("%d", &han);
    printf("円の面積は%dです\n", men(han));

    return 0;
} */
////////////////////////////////////////////////


/* int main(){
    char c;
    int i;
    double d, e;

    printf("変数cのアドレスは%pです\n", &c);
    printf("変数iのアドレスは%pです\n", &i);
    printf("変数dのアドレスは%pです\n", &d);
    printf("変数eのアドレスは%pです\n", &e);

    return 0;
} */
/////////////////////////////////////////////////////


/* int main(){
    int a[4] = {1,2,3,4},i;

    for(i=0;i<4;i++){
        printf("&a[%d]=%p\n",i,&a[i]);
    }
    printf("\na = %p\n",a);
    return 0;
} */
////////////////////////////////////////////////


/* int main(){
    char str[32];

    printf("文字列を入力してください：");
    scanf("%S", str);
    printf("%S",str);
    
    return 0;
} */
///////////////////////////////////////////////


/* #define STUDENTNO 5
#define SUBJECTNO 3

int drawline(void);

struct Seiseki{
    char name[32];
    int kokugo;
    int sugaku;
    int eigo;
};

int main(){
    struct Seiseki myclass[STUDENTNO] = {
        {"田中", 80, 80, 55},
        {"佐藤", 75, 90, 70},
        {"太田", 50, 45, 30},
        {"鈴木", 100, 55, 90},
        {"加藤", 60, 85, 35},
    };

    int i, sum0 = 0,sum1[SUBJECTNO], sum2[STUDENTNO];

    for(i=0;i<SUBJECTNO;i++){
        sum1[i]=0;
    }
    for(i=0;i<STUDENTNO;i++){
        sum2[i]=0;
    }

    for(i=0;i<STUDENTNO;i++){
        sum1[0]+=myclass[i].kokugo;
        sum1[1]+=myclass[i].sugaku;
        sum1[2]+=myclass[i].eigo;
    }

    for(i=0;i<STUDENTNO;i++){
        sum2[i]=myclass[i].kokugo+myclass[i].sugaku+myclass[i].eigo;
    }

    for(i=0;i<STUDENTNO;i++){
        sum0+=sum2[i];
    }

    printf("**** 成績 ****\n\n");
    printf("%6s %6s %6s %6s %6s\n","氏名","国語","数学","英語","合計");
    drawline();

    for(i=0;i<STUDENTNO;i++){
        printf("%6s %6d %6d %6d %6d\n",
        myclass[i].name,myclass[i].kokugo,myclass[i].sugaku,myclass[i].eigo,sum2[i]);
    }

    drawline();
    printf("%6s %6.1f %6.1f %6.1f %6.1f\n",
    "平均",(double)sum1[0]/STUDENTNO,(double)sum1[1]/STUDENTNO,
    (double)sum1[2]/STUDENTNO,(double)sum0/STUDENTNO);

    return 0;

}

int drawline(void){
    int i;
    for(i=0;i<35;i++){
        printf("-");
    }
    printf("\n");

    return 0;
} */
//////////////////////////////////////////////////////////////////



//gcc -fexec-charset=CP932 -o study study.c
//.\study