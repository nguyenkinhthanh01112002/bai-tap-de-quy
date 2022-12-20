#include <stdio.h>
#include <math.h>
//CHUONG TRINH TINH KY HANG TRA LAI
void LaiSuatNganHang()
{
	float TienNo,TienGocCanTra,LaiSuatCanTra,TongSoTienTra;
	int n = 0;//Ki Han Tra Ngan Hang
	printf("nhap vao so tien ban vay ngan hang:");
	scanf("%f",&TienNo);
	float temp = TienNo;
	while(TienNo>0)
	{
		n++;
		TienGocCanTra = 1*temp/12;
		printf("\nso tien goc can phai tra trong ky %d la %.1f",n,TienGocCanTra);
		LaiSuatCanTra = 5*TienNo/100;
		printf("\nso tien lai can tra trong ky %d la %.1f",n,LaiSuatCanTra);
		TongSoTienTra = TienGocCanTra+LaiSuatCanTra;
		printf("\nso tien thuc te can phai trong ky %d la %.1f",n,TongSoTienTra);
		TienNo = TienNo-TienGocCanTra;
		if(n!=12)
		{
			printf("\nso tien con lai sau ky %d la %.1f",n,TienNo);
		}
		else
		{
			printf("\nso tien con lai sau ky %d la 0",n);
		}
	}
}
int main()
{
	LaiSuatNganHang();
	return 0;
}
