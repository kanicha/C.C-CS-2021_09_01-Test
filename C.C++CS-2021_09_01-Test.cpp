// Sakamaki Daiki
#include <iostream>

int main()
{
	char str[10];

	do
	{
		int num1 = 0;
		int num2 = 0;
		int ans = 0;

		printf("値を2つ入力してください \n");
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);

		printf("終了するには end を入力してください。\n");
		scanf_s("%s", &str);

		if (num1 % 2 == 0)
		{
			ans = num1 - num2;
			printf("%d", ans);
		}
		else if (num1 % 2 == 1)
		{
			ans = num1 + num2;
			printf("%d", ans);
		}
	} while (str, "end");
}

/// <summary>
/// 数値を2つ入力し、
/// 1番目に入力された値が奇数なら足し算、
/// 1番目に入力された値が偶数なら引き算を行うプログラムを作成せよ。
/// </summary>
void Work6()
{
	int num1 = 0;
	int num2 = 0;
	int ans = 0;

	printf("値を2つ入力してください \n");
	scanf_s("%d", &num1);
	scanf_s("%d", &num2);

	if (num1 % 2 == 0)
	{
		ans = num1 - num2;
		printf("%d", ans);
	}
	else if (num1 % 2 == 1)
	{
		ans = num1 + num2;
		printf("%d", ans);
	}
}

/// <summary>
/// 第６問のプログラムをループで行うようにし、
/// endと入力された場合終了するようにしてください。
/// endの入力は1番目の値の場所でも、2番目の値の場所でも、
/// 別途endの入力を受け付けるようでもどれでもいいです。
/// どこか一か所でendと入力して終了していれば正解とします。
/// </summary>
void Work7()
{
	char str[10];

	do
	{
		int num1 = 0;
		int num2 = 0;
		int ans = 0;

		printf("値を2つ入力してください \n");
		scanf_s("%d", &num1);
		scanf_s("%d", &num2);

		printf("終了するには end を入力してください。\n");
		scanf_s("%s", &str);

		if (num1 % 2 == 0)
		{
			ans = num1 - num2;
			printf("%d", ans);
		}
		else if (num1 % 2 == 1)
		{
			ans = num1 + num2;
			printf("%d", ans);
		}
	} while (str, "end");
}

/// <summary>
/// 第８問(10点)
/// 以下のプログラムをエラーを解決し、コンパイルエラーがない状態にし、
/// 実行できるようにしてください。
/// 解答がエラー個所をコメントアウトして実行できるようにするのはNGです。
/// (途中確認のためにコメントアウトをする分はOKです。)
/// 間違えている個所は4か所です。
/// </summary>
void Work8()
{
	class Point
	{
	public:
		Point() { Clear(); }

		int Clear()
		{
			x = 0;
			y = 0;
			z = 0;
		}
	public:
		int x, y, z;
	};

	{
		Point point;
		Point nextPoint;
		
		nextPoint.x = 100;
		nextPoint.y = 30;

		while (1)
		{
			if (point.x < nextPoint.x)
			{
				point.x++;
			}
			else if (point.x > nextPoint.x)
			{
				point.x--;
			}

			if (point.y < nextPoint.y)
			{
				point.y++;
			}
			else if (point.y > nextPoint.y)
			{
				point.y--;
			}
			printf("pointX = %d\n", point.x);
			printf("pointY = %d\n", point.y);

			if (point.x == nextPoint.x &&
				point.y == nextPoint.y)
			{
				break;
			}
		}
	}

}