/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastagn <dcastagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 15:45:05 by dcastagn          #+#    #+#             */
/*   Updated: 2023/04/14 15:47:53 by dcastagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

// thread_routine is the function the thread invokes right after its
// creation. The thread ends at the end of this function.
void	*thread_routine(void *data)
{
	pthread_t	tid;

	tid = pthread_self();
	printf("%sThread [%ld]: The heaviest burden is to exist without living.%s\n",
		YELLOW, tid, NC);
	return (NULL);
}

int	main(void)
{
	pthread_t	tid1;
	pthread_t	tid2;

	pthread_create(&tid1, NULL, thread_routine, NULL);
	printf("Main: Created first thread [%ld]\n", tid1);
	pthread_create(&tid2, NULL, thread_routine, NULL);
	printf("Main: Created second thread [%ld]\n", tid2);
	pthread_join(tid1, NULL);
	printf("Main: Joining first thread [%ld]\n", tid1);
	pthread_join(tid2, NULL);
	printf("Main: Joining second thread [%ld]\n", tid2);
	return (0);
}
