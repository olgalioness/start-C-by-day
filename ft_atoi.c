переводит строку str в число, если возможно. Число из строки извлекается с учётом следующих правил:
Перед числом в строке допускаются пробельные символы. (Строка " 52" эквивалентна числу 52).
После числа допускаются любые другие символы. (Строка "688ft32" эквивалентна числу 688).


	Функция atoi преобразует строку string в целое значение типа int.				 */|
|/*	Анализируя строку string, atoi интерпретирует её содержание, как целое число,	 */|
|/*	которое возвращается как int. Функция сначала отбрасывает символы пробелов		 */|
|/*	до тех пор, пока не будет найден символ отличный от нуля.						 */|
|/*	Затем, начиная с этого символа, функция принимает необязательный начальный знак  */|
|/*	плюс или минус. После чего, следует  последовательность цифр, которая			 */|
|/*	интерпретируется в числовое значение.											 */|
|/*	Строка может содержать другие символы после считанного целого числа,			 */|
|/*	эти символы игнорируются и никак не влияют на поведение этой функции.			 */|
|/*	Если первая последовательность не-пробельных символов в строке string			 */|
|/*	не является целым числом, или, если string пустая  или содержит					 */
|/*	только пробельные символы, преобразование не выполняется.

#include "libft.h"

static int	ft_get_length(const char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result++;
		str++;
	}
	return (result);
}

static int	ft_get_mul(int digits)			10 возводим в степень чтобы складывать кусками
{
	int	result;

	result = 1;
	while (digits > 0)
	{
		result *= 10;
		digits--;
	}
	return (result);
}

static int	ft_get_spaces(const char *s)
{
	int	result;

	result = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
	*s == '\v' || *s == '\r' || *s == '\f')
	{
		result++;
		s++;
	}
	return (result);
}

int			ft_atoi(const char *str)
{
	int	res;
	int length;
	int curr;
	int sign;

	str += ft_get_spaces(str);
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	length = ft_get_length(str);
	if (length > 19 && sign == -1)				19 разрядов больше них не считать
		return (0);
	else if (length > 19 && sign == 1)
		return (-1);
	res = 0;
	curr = -1;							сократить одну строчк
	while (++curr < length)
		res += (str[curr] - 48) * sign * ft_get_mul(length - curr - 1);
	return (res);
}


пропускае пробелы, смотрит знак
