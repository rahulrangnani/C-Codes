/*
 * binary_loop.c
 * 
 * Copyright 2013 rahul <rahul@rahul-HP-630-Notebook-PC>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	int n,s[50],i=0,k=0;
	printf("Enter nos : ");
	scanf("%d",&n);

	do{
		s[i++] = n % 2;
		}while((n = n / 2) > 0 );
	
	for(k = (i-1); k >= 0; k--)
	  printf("%d",s[k]);


	return 0;
}
