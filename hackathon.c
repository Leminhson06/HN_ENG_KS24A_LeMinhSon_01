#include <stdio.h>

int main(){
    int  n, choice;
    do {
        printf("MENU");
        printf("1. Nhap so phan tu va gia tri cho mang: \n");
        printf("2. In ra cac gia tri phan tu trong mang theo dang (arr[0]=1, arr[1]=5, ...) \n ");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang: \n");
        printf("4. In ra tong cua tat ca cac phan tu: \n");
        printf("5. Them mot phan tu vao cuoi mang, phan tu moi them vao mang phai do nguoi dung nhap vao: \n");
        printf("6. Xoa phan tu tai mot vi tri cu the: \n");
        printf("7. Sap xep mang theo thu tu giam dan: \n");
        printf("8. Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong ? \n");
        printf("9. In ra toan bo so nguyen to trong mang da duoc binh phuong: \n");
        printf("10. Sap xep mang theo thu tu tang dan: \n");
        printf("11. Thoat\n");
        scanf("%d", &choice);
        switch(choice) {
            case 1: 
                // Nhap so phan tu va gia tri cho mang
                printf("Nhap so phan tu va gia tri cho mang: \n");
                scanf("%d" arr[]);
                printf("Nhap cac gia tri cac phan tu cua mang: \n");
                for(int i = 0;i < n; i++){
                    printf("arr[%d]", i);
                    scanf("%d", arr[i]);
                }
                break;
            case 2:
                // In ra cac gia tri phan tu trong mang theo dang arr[0] = 1, arr[1] =5
                printf("Gia tri cac phan tu trong mang theo dang: \n ");
                for (int i = 0; i<n; i ++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 3:
                // Tim gia tri nho nhat va lon nhat trong mang
                int min = arr[0], max = arr[0];
                printf("Tim cac gia tri nho nhat va lon nhat trong mang: \n");
                for(i = 1; i<n; i++) {
                    if (arr[i] < min) min = arr[i];
                    if (arr[i] > max) max = arr[i];
                }
                printf("Gia tri nho nhat trong mang la: %d\n", min);
                printf("Gia tri lon nhat trong mang la: %d\n", max);
                break;
            case 4:
                // In ra tong cua tat ca cac phan tu
                int sum = 0;
                for(int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Tong cua tat cac phan tu: %d\n", sum);
                break;
            case 5:
                // Them mot phan tu vao cuoi mang, pha  tu moi them vao mang phair do nguoi dung nhap vao
                int x;
                printf("Nhap gia tri phan tu moi: \n");
                scanf("%d", &x);
                arr[n] = x;
                n++;
                printf("Da them phan tu vao cuoi mang.\n");
                break;
            case 6:
                // Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri)
                int pos;;
                printf("Nhap gia tri can xoa \n");
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le \n");
                    return;
                }
                for(int i = pos; i < n - 1; i++) {
                    arr[i]=arr[i+1];
                }
                n--;
                printf("Da xoa phan tu tai vi tri %d\n", pos);
                break;
            case 7:
                // Sap xep mang theo thu tu giam dan
                for (int i = 0; i < n-1;i++) {
                    for (int j = 0; j < n - i - 1; j++) {
                       if (arr[j]<arr[j+1]) {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                       }
                    }
                }
                printf("Da in duoc mang da sap xep theo thu tu giam dan .\n");
                break;
            case 8:
                // Cho nguoi dung nhap vao mot phan tu, tim kiem xem pha tu do co ton tai trong mang hay khong ?
                int x, found = 0;
                printf("Nhap gia tri phan tu can biet: \n");
                scanf("%d", &x);
                for (int i = 0; i < n; i++) {
                    if (arr[i] == x) {
                        printf("Phan tu %d nam o vi tri arr[%d]\n", x, i);
                        found = 1;
                    }
                }
                if (found != 0) {
                    printf("Khong tim thay gia tri nao trong mang", x);
                }
                break;
            case 9:
                // In ra toan bo so nguyen to trong mang
                int found = 0;
                printf("Cac so nguyen to trong mang: \n");
                for (int i = 0; i < n; i++) {
                    if (lasonguyento(arr[i])) {
                        printf("%d", arr[i]);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong co so nguyen to nao trong mang");
                }
            printf("\n");
                break;
            case 10:
                // Sap xep mang theo thu tu tang dan
                int arr[min_idx];
                for (int i = 0; i < n - 1; i++) {
                    int min_idx = i;
                    for (int j = i + 1; j < n; j++) {
                        if (arr[j] < arr[min_idx]) {
                            min_idx = j;
                        }
                    }
                }
                int temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
                }
                printf("Da sap xep mang theo thu tu tang dan.\n");
                break;
            case 11:
                printf("Thoat chuong trinh");
                break;
            default:
                printf("Lua chon khong hop le vui long nhap lai .\n");
        } while (choice != 11);
    
    return 0;
}

            
                 
                

