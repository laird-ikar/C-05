/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:11:20 by bguyot            #+#    #+#             */
/*   Updated: 2021/11/22 07:18:06 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void);

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	*board;
	int	trash_or_else_it_gueule;

	board = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	count = 0;
	trash_or_else_it_gueule = recur_queen(board, 0, &count);
	return (count);
}

int	recur_queen(int *board, int queen, int *count)
{
	while (i < 10)
	{
		if (placeable(board, queen, i))
		{
			board[queen] = i;
			if (queen < 9)
				return (recur_queen(board, queen + 1));
			print_queens(board);
			(*count)++;
			return (1);
		i++;
		}
	}
	return (0);
}

int	placeable(int *board, queen, pos)
{
	int	x_queen;

	x_queen = 0;
	while (x_queen < queen)
	{
		if (pos == board[j]
			|| pos + (queen - x_queen) == board[x_queen]
			|| pos - (queen - x_queen) == board[x_queen])
			return (0);
		x_queen++;
	}
	return (1);
}

void	print_queens(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < 10)
	{
		c = 9 - board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}
