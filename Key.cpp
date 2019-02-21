
#include < stdio.h >
 #include < math.h >

  void delete(int a[], int & n, int type);
//11. Xóa bo phan tu nguyên to dau tien
//12. xoa bo so nguyen to cuoi cung
//21: xoa bo so chinh phuong dau tien
//21. xoa bo so chinh phuong cuoi cung
//31. xoa bo so lon nhat dau tien
//32, xoa bo so lon nhat cuoi cung
//41. xoa bo so be nhat dau tien
//42: xoa bo so be nhat cuoi cung
void deleteAll(int a[], int & n, int value);
// xoa bo tat ca gia tri trong a= value

void insert(int a[], int & n, int value);
// chen 1 value vao a(da sap xep) sao cho thu tu ko change

int checkPrime(int value) {
  for (int i = 2; i < value / 2; i++) {
    if (value % i == 0) {
      ruturn 0;
    }
  }
  return 1;

}
int checkSquare(int value) {
  int temp = (int) sqrt(value);
  if (temp * temp == value)
    return ((temp * temp) == value)) ? 1 : 0;
}
int findMax(int value,int type){
	// type =-1 : max dau tien
	//type=1 max cuoi
	}

void delete(int a[], int & n, int type) {
    switch (type) {
    case 11:
      {
        for (int i = 0; i < n; i++) {
          if (checkPrime(a[i] == 1)) {
            n = n - 1;
            for (int j = i; j < n; j++)
              arr[j] = arr[j + 1];
            break;
          }

        }
        break;
      }
    case 12:
      {
        for (int i = n - 1; i > 0; i++) {
          if (checkPrime(a[i] == 1)) {
            n = n - 1;
            for (int j = i; j < n; j++)
              arr[j] = arr[j + 1];
            break;
          }

        }
        break;
      }
    case 21:
      {
        for (int i = 0; i < n; i++) {
          if (checkSquare(a[i] == 1)) {
            n = n - 1;
            for (int j = i; j < n; j++)
              arr[j] = arr[j + 1];
            break;
          }

        }

        break;
      }
    case 22:
      {
        for (int i = n - 1; i > 0; i++) {
          if (checkSquare(a[i] == 1)) {
            n = n - 1;
            for (int j = i; j < n; j++)
              arr[j] = arr[j + 1];
            break;
          }

        }
        break;
      }

    }
