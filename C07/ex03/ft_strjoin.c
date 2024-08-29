/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 02:26:24 by tcosta-f          #+#    #+#             */
/*   Updated: 2024/01/04 02:35:27 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strcat(char *str, char *sep);
int		ft_strlen(char *str);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_size0(void);
char	*ft_concat_final(char *con, char **strs, char *sep, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*con;
	int		nchar;

	i = -1;
	nchar = 0;
	if (size == 0)
	{
		con = malloc(1);
		con[0] = '\0';
		return (con);
	}
	while (i++ < size - 1)
		nchar += ft_strlen(strs[i]);
	nchar += (ft_strlen(sep) * (size - 1)) + 1;
	con = (char *)malloc(nchar * sizeof(char));
	con[0] = '\0';
	con = ft_concat_final(con, strs, sep, size);
	return (con);
}

char	*ft_concat_final(char *con, char **strs, char *sep, int size)
{
	int	i;

	i = -1;
	while (i++ < size - 2)
	{
		con = ft_strcat(con, strs[i]);
		con = ft_strcat(con, sep);
	}
	con = ft_strcat(con, strs[i]);
	return (con);
}

char	*ft_strcat(char *str, char *sep)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
		i++;
	while (sep[j])
	{
		str[i] = sep[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}
/*
int main()
{   
    int size = 4;
    char **strs = malloc(size * sizeof(char *));
    char str1[] = "hello!";
    char str2[] = "this is 42!";
    char str3[] = "let's";
    char str4[] = "swim!!";
    char sep[] = "***";
    
    strs[0] = str1;
    strs[1] = str2;
    strs[2] = str3;
    strs[3] = str4;
    
    char *new_str = ft_strjoin(size, strs, sep);

    printf("%s", new_str);
    free(strs);
    return 0;
}*/
/*
int	main(int argc, char **argv)
{
	char	sep[] = "Ti";

	printf("%s", ft_strjoin(argc, argv, sep));
	return (0);
}*/
