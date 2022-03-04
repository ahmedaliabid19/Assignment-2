#include <iostream>

using namespace std;
void emptyarr(char* arr ,int size)
{
	for (int k = 0; k < size; k++)
	{
		arr[k] = ' ';
	}
}

size_t len(const char* s)
{
	int j = 0;
	while ((*s != '\0'))
	{
		s++;
		j++;
	}
	return j;
}

char* Mystrcpy(char* s1, const char* s2)
{
	for (int i = 0; i < (len(s2)) ; i++)
	{
		s1[i] = s2[i];
	}
	return s1;
}

char* Mystrncpy(char* s1, const char* s2, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		s1[i] = s2[i];
	}
	return s1;
}

char* Mystrcat(char* s1, const char* s2)
{
	int j = 0;
	
	int b = len(s1);
	for (int i = b; s2[j] != '\0'; i++)
	{
		s1[i] = s2[j];
		j++;
	}
	return s1;
}

char* Mystrncat(char* s1, const char* s2, size_t n)
{
	int j = 0;

	int b = len(s1);
	for (int i = b; j<n; i++)
	{
		s1[i] = s2[j];
		j++;
	}
	return s1;
}


int Mystrcmp(const char* s1, const char* s2)
{
	int i = 0,j=0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
		{
			/*return (s1[i] - s2[i]);*/
			return 1;
		}

		else if (s1[i] < s2[i])
		{
			/*return (s1[i] - s2[i]);*/
			return -1;

		}
	
		i++;

		
	}
	return j;
}

int Mystrncmp(const char* s1, const char* s2, size_t n)
{
	int i = 0, j = 0;
	while (i<n)
	{
		if (s1[i] > s2[i])
		{
			/*return (s1[i] - s2[i]);*/
			return 1;
		}

		else if (s1[i] < s2[i])
		{
			/*return (s1[i] - s2[i]);*/
			return -1;

		}

		i++;


	}
	return j;
}

char* Mystrtok(char* s1, const char* s2)
{
	
	static int i = 0;
	int j = 0;
	char temp[10]={};
	char te[10] = {};

	while (s1[i] != '\0')
	{
		if (s1[i] != s2[0])
		{
			temp[j] = s1[i];
			/*cout << i << j;*/
			i++;
			j++;
			
		}
		else
		{
			//temp[j] = '\0';
			cout<< temp << endl;
			emptyarr(temp,j);
			i++;
			j=0;
		}
		
		
	}
	
	cout<< temp;
	return 0;

}

int main()
{
	const char s2[30] = {"_"};
	char s1[30]={"my_name_is"};

	//cout <<Mystrcpy(s1, s2);
	
	//cout << Mystrncpy(s1, s2, 2);
	//cout <<Mystrcat(s1, s2);
	//cout <<Mystrncat(s1, s2, 2);
	//int ans = Mystrcmp(s1, s2);
	//int ans = Mystrncmp(s1, s2, 2);
	//cout << Mystrtok(s1, s2);
	//cout << *ans;*/
	//cout << ans;

}