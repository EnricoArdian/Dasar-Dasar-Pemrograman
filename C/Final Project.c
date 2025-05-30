#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void go(int t, int r);
void login();
void registerlog();
void start_animation();

int main()
{
	system("color 5");
	start_animation();
	system("cls");
	login();
	registerlog();
	menu();
	getch();
}

 void menu()
{
    int menu;
    do
  {
        system("cls");//layar menjadi kosong
        go(40,8);printf("=========================================\n");
        go(40,9);printf("=           T R  B U D R E G            =\n");
        go(40,10);printf("=========================================\n");
        go(40,11);printf("=  Menu :                               =\n");
        go(40,12);printf("=  1. Rumah Pola                        =\n");
        go(40,13);printf("=  2. Toko                              =\n");
        go(40,14);printf("=  3. Bendera                           =\n");
        go(40,15);printf("=  4. Author                           =\n");
        go(40,16);printf("=  5. Exit                              =\n");
        go(40,17);printf("=========================================\n");
        go(40,19);printf("Pilihan : "); scanf("%d",&menu);

        switch(menu)
    {
        case 1:
        system("cls");
        rumah();
        getch();
        break;
        case 2:
        system("cls");
        toko();
        getch();
        break;
        case 3:
        system("cls");
        bendera();
        getch();
        break;
        case 4:
        system("cls");
        author();
        getch();
        break;
        case 5:
        system("cls");
        terserah();
        exit(0);
        getch();
        break;
      }
    } while(menu !=5);
}

void author()
{
printf("\n\n\n\n\n\n\n                                            Dibuat Oleh :\n\n\n");
printf("\t\t\t\t\t");printf("N");Sleep(100);printf("A");Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("E");Sleep(100);printf("N");Sleep(100);printf("R");Sleep(100);printf("I");Sleep(100);printf("C");Sleep(100);printf("O");printf(" ");
Sleep(100);printf("A");Sleep(100);printf("R");Sleep(100);printf("D");Sleep(100);printf("I");Sleep(100);printf("A");Sleep(100);printf("N");;printf("\n");
printf("\t\t\t\t\t");printf("N");Sleep(100);printf("I");Sleep(100);printf("M");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);printf("6");
Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("2");
Sleep(100);printf("3");Sleep(100);printf("8");Sleep(100);printf("\n\n");

printf("\t\t\t\t\t");printf("N");Sleep(100);printf("A");Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("Y");Sleep(100);printf("O");Sleep(100);printf("V");Sleep(100);printf("I");Sleep(100);printf("E");Sleep(100);
Sleep(100);printf(" ");Sleep(100);printf("A");Sleep(100);printf("P");Sleep(100);printf("R");Sleep(100);printf("I");Sleep(100);printf("N");Sleep(100);printf("D");Sleep(100);printf("O");Sleep(100);printf(" ");Sleep(100);printf("T.");printf("\n");
printf("\t\t\t\t\t");printf("N");Sleep(100);printf("I");Sleep(100);printf("M");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);printf("6");
Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("2");
Sleep(100);printf("2");Sleep(100);printf("9");Sleep(100);printf("\n\n");

printf("\t\t\t\t\t");printf("N");Sleep(100);printf("A");Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf(":");Sleep(100);printf(" ");
Sleep(100);printf("D");Sleep(100);printf("I");Sleep(100);printf("M");Sleep(100);printf("A");Sleep(100);printf("S");Sleep(100);
Sleep(100);printf(" ");Sleep(100);printf("I");Sleep(100);printf("R");Sleep(100);printf("S");Sleep(100);printf("A");Sleep(100);printf("D");Sleep(100);printf(" ");Sleep(100);printf("B.");printf("\n");
printf("\t\t\t\t\t");printf("N");Sleep(100);printf("I");Sleep(100);printf("M");Sleep(100);printf(":");Sleep(100);printf(" ");Sleep(100);printf("6");
Sleep(100);printf("7");Sleep(100);printf("2");Sleep(100);printf("0");Sleep(100);printf("2");Sleep(100);printf("2");Sleep(100);printf("3");
Sleep(100);printf("2");Sleep(100);printf("4");Sleep(100);printf("\n\n");
printf("\n\n");
}

void bendera()
{
  int i,j,k;
  int x=200;
  char y=x;
  printf("\n===========================");
  printf("\n=                         =");
  printf("\n=     Masukkan Angka      =");
  printf("\n=                         =");
  printf("\n===========================");
  printf("\n");
  scanf("%d",&k);
    for(i=1;i<=k;i++)
  {
    printf("\n");
    for(j=0;j<=k;j++)
    {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),4);
    Sleep(30);printf("%c",y);
    }
     for(j=0;j<=k;j++)
    {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),7);
    Sleep(30); printf("%c",y);
    }
    for(j=1;j<=k+1;j++)
    {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),2);
    Sleep(30); printf("%c",y);
    }
  }
    for(i=0;i<=k;i++)
        getch();
}

void toko()
{
    char Berapa_Jenis_barang_yang_akan_Anda_beli[35],bln[10];
    int harga,tgl,thn, barang, jml, total;

    printf("                Selamat Datang di Toko Kelontong Budreg! Selamat Berbelanja \n");

    printf("=========================================================================================================================\n");
    printf("|  No  |  Daftar Menu       |        Harga      |\n");
    printf("|------|--------------------|-------------------|\n");
    printf("|  1.  |  Indomie           | Rp.   2500.00     |\n");
    printf("|  2.  |  Wafer             | Rp.   3000.00     |\n");
    printf("|  3.  |  Chitato           | Rp.   5500.00     |\n");
    printf("|  4.  |  Sprite            | Rp.   4000.00     |\n");
    printf("|  5.  |  Sunlight          | Rp.   7500.00     |\n");
    printf("|  6.  |  Es krim           | Rp.   3000.00     |\n");
    printf("|  7.  |  Rexona            | Rp.  12500.00     |\n");
    printf("|  8.  |  Susu              | Rp.   7500.00     |\n");
    printf("|  9.  |  Minyak goreng     | Rp.  15000.00     |\n");
    printf("|  10. |  Beras             | Rp.  56000.00     |\n");
    printf("=========================================================================================================================\n");
    printf("Berapa Jenis barang yang akan Anda beli= "); scanf("%s", &Berapa_Jenis_barang_yang_akan_Anda_beli);
    printf("Silahkan pilih barang = ");scanf("%d", &barang);

    switch(barang)
    {
        case 1:
            {
                printf("Barang Yang Akan Di Pilih = Indomie\n");
                printf("Masukkan Jumlah Pesanan Indomie\t: ");
                scanf("%d",&jml);
                harga=2500;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
        case 2:
            {
                printf("barang Yang Di Pilih = Wafer\n");
                printf("Masukkan Jumlah Pesanan Wafer\t: ");
                scanf("%d",&jml);
                harga=3000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
        case 3:
            {
                printf("Barang Yang Di Pilih = Chitato\n");
                printf("Masukkan Jumlah Pesanan Chitato\t: ");
                scanf("%d",&jml);
                harga=5500;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
        case 4:
            {
                printf("Barang yang dipilih = Sprite\n");
                printf("Masukkan Jumlah Pesanan Sprite\t: ");
                scanf("%d",&jml);
                harga=4000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
        case 5:
            {
                printf("Barang Yang Di Pilih = Sunlight\n");
                printf("Masukkan Jumlah Pesanan Sunlight\t: ");
                scanf("%d",&jml);
                harga=7500;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
            case 6:
            {
                printf("Barang Yang Di Pilih = Es krim\n");
                printf("Masukkan Jumlah Pesanan Kabel Es krim\t: ");
                scanf("%d",&jml);
                harga=3000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
             case 7:
            {
                printf("Barang Yang Di Pilih = Rexona\n");
                printf("Masukkan Jumlah Pesanan Rexona\t: ");
                scanf("%d",&jml);
                harga=12500;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
            case 8:
            {
                printf("Barang Yang Di Pilih = Susu\n");
                printf("Masukkan Jumlah Pesanan Susu\t: ");
                scanf("%d",&jml);
                harga=7500;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
             case 9:
            {
                printf("Barang Yang Di Pilih = Minyak goreng\n");
                printf("Masukkan Jumlah Pesanan Minyak goreng\t: ");
                scanf("%d",&jml);
                harga=15000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
              case 10:
            {
                printf("Barang Yang Di Pilih = Beras\n");
                printf("Masukkan Jumlah Pesanan Beras\t: ");
                scanf("%d",&jml);
                harga=56000;
                total=harga*jml;
                printf("==>Total Pembayaran\t: Rp. %d",total);
                printf("\n==========================================\n");

                printf("Terima Kasih sudah membeli Barang di toko kelontong Budreg\n");
            }break;
        default:
        {
            printf("Menu Pilihan Kamu Tidak Ada !!!");
        }
    }
}

void rumah()
{
    printf("\n\n\n");
    printf("\t=====================================\n");
    printf("\t=         POLA RUMAH BUDREG         =\n");
    printf("\t=====================================\n");
    int j,k,l,m,n,delay=20;
        char material;
    printf("\t Masukkan tinggi rumah : ");
    scanf("%d",&n);
    printf("\t Masukkan bahan rumah  : ");
    scanf("%c%c",&material,&material);
    printf("\n\n");
        for(j=0;j<n;j++)
        {
            printf("\t");
            for(k=0;k<n;k++)
            {
            printf(" ");
        }
            for(l=0;l<n;l++)
        {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
            Sleep(delay);
            printf("%c",material);
            }
            printf("\n");
        }
        for(j=0;j<n;j++)
            {
            printf("\t");
            for(k=1;k<n-j;k++)
            {
            printf(" ");
            }
            for(l=0;l<(2*j)+1;l++)
            {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
            Sleep(delay);
            printf("%c",material);
            }
            for(m=0;m<n*4;m++)
            {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),6);
            Sleep(delay);
            printf("%c",material);
            }
            printf("\n");
        }
        for(j=0;j<n;j++)
            {
            printf("\t");
            for(k=0;k<(2*n)-1;k++)
            {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
            Sleep(delay);
            printf("%c",material);
            }
            for(l=0;l<n*4;l++)
            {
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),5);
            Sleep(delay);
            printf("%c",material);
            }
            printf("\n");
        }
}


void go(int x, int y)
{
	HANDLE hConsoleOutput;
	COORD dwCursorPosition;
	dwCursorPosition.X = x;
	dwCursorPosition.Y = y;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void login(){
	int c,d;
	go(35,10);
	printf("%c",201);
	for(c=0;c<=40;c++){
		printf("%c",205);
		Sleep(20);
	}
	printf("%c\n",187);

	for(c=0;c<=8;c++){
		Sleep(30);go(35,11+c);
		printf("%c",186);
		for(d=0;d<=40;d++){
			printf(" ");
		}
		printf("%c\n",186);
	}
	go(35,19);
	printf("%c",200);
	for(c=0;c<=40;c++){
		Sleep(20);printf("%c",205);
	}
	printf("%c",188);
}

void registerlog()
{
	char user[100];
	char pass[100];
	char ch;
	int i, logpass,loguser;

	go(56,16);printf("              ");
	go(47,17);printf("              ");
	go(48,13);printf("SELAMAT BUDREG");
	go(44,15);printf("USERNAME\t: ");gets(user);
	go(44,16);printf("PASSWORD\t: ");

	for(i = 0;i < 100;i++)
	{
		ch = getch();
		if(ch == 13)
		break;
		pass[i] = ch;
		ch = '*' ;
		printf("%c", ch);
	}


	loguser = strcmp("Budreg",user);
	logpass = strcmp("yntkts",pass);

	getch();

	if(loguser==0){
		if(logpass==0){
			go(56,17);printf("Selamat Datang");

		}
		else{
			go(56,17);printf("Password salah Cuy");
			getch();
			registerlog();
		}
	}
	else{
		go(56,17);printf("Username salah Woe");
		getch();
		registerlog();
	}

}

void start_animation()
{
	int a,b,x;
	go(53,7);printf("TR BUDREG");
	for(a=0;a<=50;a++){
		Sleep(50);
		go(30+a,10);
		printf("%c",219);
		go(50,8);printf("Loading : %d %c",a*2,293);
	}
}
void terserah()
{
    system("color 5");
    printf("\n\n\n\n\n");
    printf("\t\t\t\t\t\t");
    printf("D");Sleep(125);
    printf("A");Sleep(125);
    printf("D");Sleep(125);
    printf("A");Sleep(125);
    printf("H");Sleep(125);
    printf(":");Sleep(125);
    printf("V\n\n");Sleep(125);
    printf("\t\t\t\t\t");
    printf("D");Sleep(125);
    printf("A");Sleep(125);
    printf("R");Sleep(125);
    printf("A");Sleep(125);
    printf("H ");Sleep(125);
    printf("B");Sleep(125);
    printf("I");Sleep(125);
    printf("R");Sleep(125);
    printf("U ");Sleep(125);
    printf("K");Sleep(125);
    printf("U ");Sleep(125);
    printf("U");Sleep(125);
    printf("N");Sleep(125);
    printf("T");Sleep(125);
    printf("U");Sleep(125);
    printf("K ");Sleep(125);
    printf("A");Sleep(125);
    printf("P");Sleep(125);
    printf("I ");Sleep(125);
    printf("B");Sleep(125);
    printf("I");Sleep(125);
    printf("R");Sleep(125);
    printf("U ");Sleep(125);
    printf("M");Sleep(125);
    printf("U");Sleep(125);
    printf("\t\t\t\t\t");
    printf("\n\n");Sleep(125);
    printf("\t\t\t\t\t");
    printf("C");Sleep(125);
    printf("R");Sleep(125);
    printf("E");Sleep(125);
    printf("A");Sleep(125);
    printf("T");Sleep(125);
    printf("O");Sleep(125);
    printf("R ");Sleep(125);
    printf("B");Sleep(125);
    printf("Y");Sleep(125);
    printf(":\n\n");Sleep(125);
    printf("\t\t\t\t\t");
    printf("E");Sleep(125);
    printf("N");Sleep(125);
    printf("R");Sleep(125);
    printf("C");Sleep(125);
    printf("O ");Sleep(125);
    printf("A");Sleep(125);
    printf("D");Sleep(125);
    printf("R");Sleep(125);
    printf("I");Sleep(125);
    printf("A");Sleep(125);
    printf("N ");Sleep(125);
    printf("\n");Sleep(125);
    printf("\t\t\t\t\t");
    printf("Y");Sleep(125);
    printf("O");Sleep(125);
    printf("V");Sleep(125);
    printf("I");Sleep(125);
    printf("E ");Sleep(125);
    printf("A");Sleep(125);
    printf("P");Sleep(125);
    printf("R");Sleep(125);
    printf("I");Sleep(125);
    printf("N");Sleep(125);
    printf("D");Sleep(125);
    printf("O ");Sleep(125);
    printf("T");Sleep(125);
    printf("\n");Sleep(125);
    printf("\t\t\t\t\t");
    printf("D");Sleep(125);
    printf("I");Sleep(125);
    printf("M");Sleep(125);
    printf("A");Sleep(125);
    printf("S ");Sleep(125);
    printf("I");Sleep(125);
    printf("R");Sleep(125);
    printf("S");Sleep(125);
    printf("A");Sleep(125);
    printf("D ");Sleep(125);
    printf("B");Sleep(125);
    printf("\n\n");Sleep(125);
    printf("\t\t\t\t\t\t\t");
    printf("F");Sleep(125);
    printf("T");Sleep(125);
    printf("I ");Sleep(125);
    printf("U");Sleep(125);
    printf("K");Sleep(125);
    printf("S");Sleep(125);
    printf("W ");Sleep(125);
    printf("2");Sleep(125);
    printf("0");Sleep(125);
    printf("2");Sleep(125);
    printf("2");Sleep(125);
    printf("\n\n");
}
