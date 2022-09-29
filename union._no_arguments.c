/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:12:35 by ygunay            #+#    #+#             */
/*   Updated: 2022/09/29 15:37:22 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_repeat(char *str, char c, int n)
{
	int i;

	i  =0;
	while (i < n)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
	
}

void ft_strjoin(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while(s1[i])
		i++;
	while(s2[j])
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
}

int main(void)
{
	char s1[]="ddf6vewg64f";
	char s2[]="gtwthgdwthdwfteewhrtag6h4ffdhsd";

	int i;
	
	i = 0;
	ft_strjoin(s1,s2);
	while(s1[i])
	{
		if(check_repeat(s1, s1[i],i))
			write(1,&s1[i],1);
		i++;
	}
	return(0);
}