#include <stdio.h>
#include <math.h>
//CHUONG TRINH TINH KY HANG TRA LAI
void LaiSuatNganHang(){
	// chu thich nay dat cho vui
	float TienNo,TienGocCanTra,LaiSuatCanTra,TongSoTienTra;
	int n = 0;//Ki Han Tra Ngan Hang
	printf("nhap vao so tien ban vay ngan hang:");
	scanf("%f",&TienNo);
	float temp = TienNo;
	while(TienNo>0){
		n++;
		TienGocCanTra = 1*temp/12;
		printf("\nso tien goc can phai tra trong ky %d la %.1f",n,TienGocCanTra);
	}
}
int main()
{
	LaiSuatNganHang();
	return 0;
}
