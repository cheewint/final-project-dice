#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
	int a, b, t[3], i, c;
	static d, e, f = 2000, g = 2000;
	printf("\n\t\t�R�j�R�p�R����\n\t\t�C������:\n\t\t�z�Y�R���j�Ϊ̶R���p����!\n\t\t�q���N�߱z�U�`�����ƪ��������A!\n\t\t�z�Y�R��������!\n\t\t����q���N�߱z�U�`�����ƪ�50�����z!\n\t\t�̪�n��:�z�M�q�����O2000��:\n");
	do
	{
		c = 0;
		printf("\n0.�h�X\n1.�R�j\n2.�R�p\n3.�R���ڡI\n");
		printf("\n�ФU�`:");
		scanf_s("%d", &a);
		if (a <= f)
		{
			printf("\n�п�ܶR�j�R�p�Ϊ̶R����\n0.�h�X�C��1.�R�j2.�R�p3.�R���ڡI\n�п��:");
			scanf_s("%d", &b);
			if (b == 0)
				break;
			switch (b)
			{
			case 1:
				printf("\n�ڶR�j�I\n");
				break;
			case 2:
				printf("\n�ڶR�p�I\n");
				break;
			case 3:
				printf("\n�ڶR���ڡI\n");
				break;
			default:
				printf("\n�п��0~3��������\n");
			}
			if (b > &b <= 3)
			{
				srand((unsigned)time(NULL));
				printf("\n�q���X:");
				for (i = 0; i < 3; i++)
				{
					t[i] = rand() % 6 + 1;
					printf("%d ", t[i]);
					c += t[i];

				}
				if (t[0] == t[1] && t[0] == t[2])
					printf("\n\n�}���ڡI\n");
				if (c >= 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n�}�j\n");
				if (c < 10 && (t[0] != t[1] || t[0] != t[2]))
					printf("\n\n�}�p\n");
				if (b == 1 && c >= 10 || b == 2 && c < 10 || b == 3 && (t[0] == t[1] && t[0] == t[2]))
				{
					d++;
					printf("\n�z�`�@Ĺ�F%d��!��F%d��!", d, e);
					if (t[0] == t[1] && t[0] == t[2])
					{
						f += 50 * a; g -= 50 * a;
						printf("\n\n�z���n����:%d �q�����n����:%d\n", f, g);
					}
					else
					{
						f += 2 * a; g -= 2 * a;
						printf("\n\n�z���n����:%d �q�����n����:%d\n", f, g);
					}

				}
				if (b == 1 && c < 10 || b == 2 && c >= 10 || b == 3 && (t[0] != t[1] || t[0] != t[2]))
				{
					e++;
					printf("\n�z�`�@Ĺ�F%d��!��F%d��!", d, e);
					f -= a; g += a;
					printf("\n\n�z���n����:%d �q�����n����:%d\n", f, g);
				}

			}


		}
		else
			printf("\n�藍�_!\n�z�U�`�����Ƥ���W�L�z���n��!\n�Э��s�U�`!\n");
		if (f <= 10)
		{
			printf("\n\n�藍�_!\n�z��F!\n886!\n");
			break;

		}
		if (g <= 10)
		{
			printf("\n\n�z��!\n�z�n�ή@!\n�zĹ�F!\n�z�{�b���`����:%d\n", f);
			break;

		}


	} while (b != 0);


}