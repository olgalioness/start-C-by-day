Добавляет новый элемент в список(Если список не пустой) в его

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new) 			адрес указателя головы листа, а new новый лист
{
	if (*lst != NULL)				если головы нет
	{
		new->next = *lst;
		*lst = new;
	}
	else
	{
		new->next = NULL;						new -новая голова
		*lst = new;
	}
}
надо свдигать указатель на большой первый элемент


если головы нет то мы new next   делаем нул если не равно

а если ее нет - то просто записываем в это адрес new
добавили вначало и перезаписали голову
