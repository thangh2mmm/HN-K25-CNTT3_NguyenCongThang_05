#include <stdio.h>

int main() {
	        
    int a[100];
    int n = 0;
    int i, j, temp;
    int choice;
    int pos;
    
    do {
        printf("\n===== MENU =====\n");
        printf("1. nhap so luong phan tu va gia tri tung phann tu cho mang\n");
        printf("2. in ra cac gia tri phan tu trong mang\n");
        printf("3. tinh tong cac phan tu chan va tong cac phan tu le trong mang\n");
        printf("4. in ra gia tri lon nhat cua cac phan tu trong mang\n");
        printf("5. them moi mot phan tu vao cuoi mang\n");
        printf("6. xoa phan tu tai mot vi tri cu the\n");
        printf("7. sap xep mang theo thu tu tang dan\n");
        printf("8. kiem tra su ton tai cua phan tu trong mang\n");
        printf("9. in ra phan tu xuat hien dung 2 lan\n");
        printf("10. in ra so lan xuat hien cua mot phan tu\n");
        printf("0. Thoat\n");
        printf("nhap vao lua chon cua ban: ");
        scanf("%d", &choice);


        switch(choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                for(i = 0; i < n; i++) {
                    printf("a[%d] = ", i);
                    scanf("%d", &a[i]);
                }
                break;

            case 2:
                printf("Mang: ");
                for(i = 0; i < n; i++) {
                    printf("%d ", a[i]);
                }
                printf("\n");
                break;

            case 3:
                {
                    int tongChan = 0, tongLe = 0;
                    for(i = 0; i < n; i++) {
                        if(a[i] % 2 == 0)
                            tongChan += a[i];
                        else
                            tongLe += a[i];
                    }
                    printf("tong cac so chan = %d\n", tongChan);
                    printf("tong cac so le = %d\n", tongLe);
                }
                break;

            case 4:
                {
                    int max = a[0];
                    for(i = 1; i < n; i++) {
                        if(a[i] > max)
                            max = a[i];
                    }
                    printf("gia tri lon nhat: %d\n", max);
                }
                break;

            case 5:
                if(n < 100) {
                    printf("nhap gia tri can them: ");
                    scanf("%d", &a[n]);
                    n++;
                } else {
                    printf("mang da day!\n");
                }
                break;

            case 6:
                printf("nhap vao vi tri muon xoa (0 -> %d): ", n-1);
                scanf("%d", &pos);
                if(pos >= 0 && pos < n) {
                    for(i = pos; i < n - 1; i++) {
                        a[i] = a[i + 1];
                    }
                    n--;
                } else {
                    printf("vi tri khong hop le!\n");
                }
                break;

            case 7:
                for(i = 1; i < n; i++) {
                    temp = a[i];
                    j = i - 1;
                    while(j >= 0 && a[j] > temp) {
                        a[j + 1] = a[j];
                        j--;
                    }
                    a[j + 1] = temp;
                }
                printf("mang da dc sap xep tang dan\n");
                break;

            case 8:
               
                break;

            case 9:
               
                break;

            case 10:
               
                break;

            case 0:
                printf("thoat chuong trinh \n");
                break;

            default:
                printf("lua chon khong hop le \n");
        }
    } while(choice != 0);

    return 0;
}
