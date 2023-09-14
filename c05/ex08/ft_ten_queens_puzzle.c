/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujeong <yujeong@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 10:37:05 by yujeong           #+#    #+#             */
/*   Updated: 2022/02/24 10:37:07 by yujeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void);

#include <unistd.h>
// #include <stdio.h> printf 사용하여 테스트케이스 이용하기 위해서는 추가해줘야함.

int	ft_abs(int a)
{
	if (a < 0)
		return (-a);
	else
        	return (a);
}


void print_queen(int *arr){
    int i;
    char q;
    i = 0;

    while(i < 10){
        q = arr[i] + '0';
        write(1, 'i', 1);
        i++;
    } 
    write(1, "\n", 1);
}

void check(int col, int *arr){
    int j = 0;
    while(j < col){
        if(arr[j] == arr[col])
            return(1);
        if(ft_abs(j-col) == ft_abs(arr[j]- arr[col]))
            return(1);
        j++;
    }
    return(0);
}

void	dfs(int col, int *arr, int *answer)
{
	int i; // 나중에 42 서울에서는 스페이스바 인식 안되니까 만약에 vscode 사용 할거면 tap으로 바꿔서 사용할 것

	i = 0;
	if (col == 10)
	{
		print_chess(arr);
		*answer = *answer + 1;
		return ;
	}
	else
	{
		while (i < 10)
		{
			arr[col] = i;
			if (check(col, arr) == 0)
				dfs(col + 1, arr, answer);
			i++;
		}
	}
}

int ft_ten_queens_puzzle(void){
    int arr[10];
    int i;
    int count;
    int *answer; // answer에는  배열 값을 저장해야 하나 ? 아마 그럴듯

    i = 0;
    answer = &count;
    count = 0;
    dfs(0, arr, answer);
    return(*answer);
}

#include <stdio.h>

int main(){
    printf("%d", ft_ten_queens_puzzle); // #include <stdio.h> 안넣었으니까 unistd는 write 함수를 사용
}

