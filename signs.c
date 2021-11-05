#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short:\n\tsigned:%hd to %hd",SHRT_MIN,SHRT_MAX);
	printf("\n\tunsigned:%d to %hu",0,USHRT_MAX);
	printf("\nint:\n\tsigned:%d to %d",INT_MIN,INT_MAX);
	printf("\n\tunsigned:%d to %u",0,UINT_MAX);
	printf("\nlong:\n\tsigned:%ld to %ld",LONG_MIN,LONG_MAX);
	printf("\n\tunsigned:%d to %lu",0,ULONG_MAX);
	printf("\nlong long:\n\tsigned:%lld to %lld",LLONG_MIN,LLONG_MAX);
	printf("\n\tunsigned:%d to %llu",0,ULLONG_MAX);
	
                  printf("\n\t\t\tor");
	
	printf("\nshort:\n\tsigned:%hd to %hd\n\tunsigned:%d to %hu\n",SHRT_MIN,SHRT_MAX,0,USHRT_MAX);
	printf("\nint:\n\tsigned:%d to %d\n\tunsigned:%d to %u\n",INT_MIN,INT_MAX,0,UINT_MAX);
	printf("\nlong:\n\tsigned:%ld to %ld\n\tunsigned:%d to %lu",LONG_MIN,LONG_MAX,0,ULONG_MAX);
	printf("\nlong long:\n\tsigned:%lld to %lld\n\tunsigned:%d to %llu",LLONG_MIN,LLONG_MAX,0,ULLONG_MAX);
}
