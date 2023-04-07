#include <stdio.h>
#include <stdlib.h>


#define N 3 //matris boyutu tanýmlamasý

int main() {
	printf("Bahar Urundiker,1220505018,KLU\n");
	
    int img1[N][N] = {{1, 0, 0},
                      {0, 1, 0},
                      {0, 1, 0}}; //img1 tanýmlamasý
                      
    int img2[N][N] = {{0, 1, 0},
                      {1, 0, 1},
                      {0, 0, 1}}; //img2 tanýmlamasý
                      
    int geciciMatris[N][N]; //geçici matris tanýmlamasý

    int gEslesme = 0; //geçici eþleþme sayýsý tanýmlamasý
    
    int eslesmeSayisi = 0; //maksimum eþleþme sayýsý tanýmlamasý
    
    int a, b; //en iyi pozisyonun koordinatlarý tanýmlamasý

    int o = 0;
    //img1 pozisyonlarýný deneyen fonksiyon
    do{

        for (int h = 0; h < N; h++) {//img1'i kaydýrýp,img2 ile karþýlaþtýran fonksiyon
        
            for (int d = 0; d < N; d++) {
            	
                for (int f = 0; f < N; f++) {
                	
                    int farkA = d - o; //koordinat farklarý alýnýyor
                    
                    int farkB = f - h;
                    
                    if (farkA < 0  && farkA >= N && farkB < 0 && farkB >= N) {
                    	
                        geciciMatris[d][f] = 0;
                        
                    } else {
                    	
                        geciciMatris[d][f] = img1[farkA][farkB];
                    }
                }
            }

            //img2 ile eþleþme sayýsýný hesaplayan fonksiyon
            
            gEslesme = 0;
            
            for (int d = 0; d < N; d++) {
            	
                for (int f = 0; f < N; f++) {
                	
                    if (geciciMatris[d][f] == img2[d][f]) 
					{
                        gEslesme++;
                    }
                }
            }

            //en iyi uyacak pozisyonu güncelle
            if (gEslesme > eslesmeSayisi) {
            	
                eslesmeSayisi = gEslesme;
                
                a = o;
                
                b = h;
            }
        }
        
        o++;
        
    }while(o < N); 

    //en iyi pozisyonu ekrana yazdýr
    printf("En iyi pozisyon (%d, %d)\n", a, b);

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

