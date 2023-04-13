#define PI 3.14159265359

float luasLingkaran(float radius)
{
	return (PI * radius * radius);
}

float luasPermukaanBola(float radius)
{
	return(4 * PI * radius * radius);
}

float volumeSilinder(float radius, float tinggi)
{
	return(tinggi * PI * radius * radius);
}

float volumeBola(float radius)
{
	return((4/3) * PI * radius * radius * radius);
}

float volumeKubus(float sisi)
{	
	return(sisi * sisi * sisi);
}