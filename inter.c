/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygunay <ygunay@student.s19.be>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:52:41 by ygunay            #+#    #+#             */
/*   Updated: 2022/09/29 14:00:01 by ygunay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_repeat(char *str, char c, int n )
{
	int i;
	
	i = 0;
	while(i < n)
	{
		if(str[i] == c)
			return (0);
		i++;
	}
	return (1);
	
}

int main()
{
	char s1[]="yassin";
	char s2[]="gunay";
	
    int i;
	int j;

	i = 0;
	while(s1[i])
	{
		j=0;
		while(s2[j])
		{
			if(s1[i]==s2[j] && check_repeat(s1,s1[i],i))
			{
				write(1,&s1[i],1);
				break;
			}
			j++;
		}
		i++;
	}



	return (0);
}