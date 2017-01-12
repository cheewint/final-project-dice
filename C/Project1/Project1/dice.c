#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int a, b, t[3], i, c;
	static d, e, f = 2000, g = 2000;
	printf("\n\t\t買大買小買鬼啊\n\t\t遊戲說明:\n\t\t您若買中大或者買中小的話!\n\t\t電腦就賠您下注的分數的雙倍給你!\n\t\t您若買中鬼的話!\n\t\t那麼電腦就賠您下注的分數的50倍給您!\n\t\t最初積分:您和電腦都是2000分:\n");
	do
	{
		c = 0;
		printf("\n0.退出\n1.買大\n2.買小\n3.買鬼啊！\n");
		printf("\n請下注:");
		scanf_s("%d", &a);
		if (a <= f)
		{
			printf("\n請選擇買大買小或者買鬼啊\n0.退出遊戲1.買大2.買小3.買鬼啊！\n請選擇:");
			scanf_s("%d", &b);
			if (b == 0)
				break;
			switch (b)
			{
			case 1:
				printf("\n我買大！\n");
				break;
			case 2:
				printf("\n我買小！\n");
				break;
			case 3:
				printf("\n我買鬼啊！\n");
				break;
			default:
				printf("\n請選擇0~3之間的數\n");
			}
			if (b > &b <= 3)
			{
				srand((unsigned)time(NULL));
				printf("\n電腦出:");
				for (i = 0; i < 3; i++)
				{
					t[i] = rand() % 6 + 1;
					printf("%d ", t[i]);
					c += t[i];

				}
				if (t[0] == t[1] && t[0] == t[2])
					printf("\n\n開鬼啊！\n");
				if (c >= 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n開大\n");
				if (c < 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n開小\n");
				if (b == 1 && c >= 10 || b == 2 && c < 10 || b == 3 && (t[0] == t[1] && t[0] == t[2]))
				{
					d++;
					printf("\n您總共贏了%d局!輸了%d局!", d, e);
					if (t[0] == t[1] && t[0] == t[2])
					{
						f += 50 * a; g -= 50 * a;
						printf("\n\n您的積分為:%d 電腦的積分為:%d\n", f, g);
					}
					else
					{
						f += 2 * a; g -= 2 * a;
						printf("\n\n您的積分為:%d 電腦的積分為:%d\n", f, g);
					}

				}
				if (b == 1 && c < 10 || b == 2 && c >= 10 || b == 3 && (t[0] != t[1] || t[0] != t[2]))
				{
					e++;
					printf("\n您總共贏了%d局!輸了%d局!", d, e);
					f -= a; g += a;
					printf("\n\n您的積分為:%d 電腦的積分為:%d\n", f, g);
				}

			}


		}
		else
			printf("\n對不起!\n您下注的分數不能超過您的積分!\n請重新下注!\n");
		if (f <= 10)
		{
			printf("\n\n對不起!\n您輸了!\n886!\n");
			break;

		}
		if (g <= 10)
		{
			printf("\n\n哇塞!\n您好棒哦!\n您贏了!\n您現在的總分為:%d\n", f);
			break;

		}


	} while (b != 0);


}