#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int a, b, t[3], i, c;
	static d, e, f = 2000, g = 2000;
	printf("\n\t\t�I���IС�I��\n\t\t�[���f��:\n\t\t�����I�д�����I��С��Ԓ!\n\t\t��X���r����ע�ķ֔����p���o��!\n\t\t�����I�й��Ԓ!\n\t\t���N��X���r����ע�ķ֔���50���o��!\n\t\t����e��:������X����2000��:\n");
	do
	{
		c = 0;
		printf("\n0.�˳�\n1.�I��\n2.�IС\n3.�I����\n");
		printf("\nՈ��ע:");
		scanf_s("%d", &a);
		if (a <= f)
		{
			printf("\nՈ�x���I���IС�����I��\n0.�˳��[��1.�I��2.�IС3.�I����\nՈ�x��:");
			scanf_s("%d", &b);
			if (b == 0)
				break;
			switch (b)
			{
			case 1:
				printf("\n���I��\n");
				break;
			case 2:
				printf("\n���IС��\n");
				break;
			case 3:
				printf("\n���I����\n");
				break;
			default:
				printf("\nՈ�x��0~3֮�g�Ĕ�\n");
			}
			if (b > &b <= 3)
			{
				srand((unsigned)time(NULL));
				printf("\n��X��:");
				for (i = 0; i < 3; i++)
				{
					t[i] = rand() % 6 + 1;
					printf("%d ", t[i]);
					c += t[i];

				}
				if (t[0] == t[1] && t[0] == t[2])
					printf("\n\n�_����\n");
				if (c >= 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n�_��\n");
				if (c < 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n�_С\n");
				if (b == 1 && c >= 10 || b == 2 && c < 10 || b == 3 && (t[0] == t[1] && t[0] == t[2]))
				{
					d++;
					printf("\n�������A��%d��!ݔ��%d��!", d, e);
					if (t[0] == t[1] && t[0] == t[2])
					{
						f += 50 * a; g -= 50 * a;
						printf("\n\n���ķe�֞�:%d ��X�ķe�֞�:%d\n", f, g);
					}
					else
					{
						f += 2 * a; g -= 2 * a;
						printf("\n\n���ķe�֞�:%d ��X�ķe�֞�:%d\n", f, g);
					}

				}
				if (b == 1 && c < 10 || b == 2 && c >= 10 || b == 3 && (t[0] != t[1] || t[0] != t[2]))
				{
					e++;
					printf("\n�������A��%d��!ݔ��%d��!", d, e);
					f -= a; g += a;
					printf("\n\n���ķe�֞�:%d ��X�ķe�֞�:%d\n", f, g);
				}

			}


		}
		else
			printf("\n������!\n����ע�ķ֔����ܳ��^���ķe��!\nՈ������ע!\n");
		if (f <= 10)
		{
			printf("\n\n������!\n��ݔ��!\n886!\n");
			break;

		}
		if (g <= 10)
		{
			printf("\n\n����!\n���ð�Ŷ!\n���A��!\n���F�ڵĿ��֞�:%d\n", f);
			break;

		}


	} while (b != 0);


}
