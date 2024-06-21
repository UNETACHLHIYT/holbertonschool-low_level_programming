#include "main.h"
/**
 * jack_bauer - starting from 00:00 to 23:59.
 * @hout @minute @time0 @time1 @time2 @time3 @time4 - :charactere checked
 * Return: 0
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	char time0, time1, time2, time3, time4;

	for (hour = 0; hour < 24; hour++)
	{
	for (minute = 0; minute < 60; minute++)
	{
		time0 = hour / 10 + '0';
		time1 = hour % 10 + '0';
		time2 = ':';
		time3 = minute / 10 + '0';
		time4 = minute % 10 + '0';
		_putchar(time0);
		_putchar(time1);
		_putchar(time2);
		_putchar(time3);
		_putchar(time4);
			_putchar('\n');
	}

	}

}
