#include <stdio.h>
/**
 * main - Program that prints all possible diff combo of two digits
 * Return: 0 (Success)
 */
int main(void)
{
	int nums1, nums2;
	for (nums1 = 0; nums1 <= 46; nums1++)
	{
		for (nums2 = nums1 + 1; nums2 <= 47; nums2++)
		{
			putchar(((nums1/10) + '0')); (((nums1 % 10) + '0'));
			putchar(((nums2/10) + '0')); (((nums2 % 10) + '0'));

			if (nums1 == 46 && nums2 == 47)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
			putchar('\n');
			return (0);
	}
}
