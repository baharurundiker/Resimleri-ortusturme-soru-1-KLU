#include <stdio.h>
#include <stdlib.h>


#define N 3 //matris boyutu tan�mlamas�

int main() {
	printf("Bahar Urundiker,1220505018,KLU\n");
	
    int img1[N][N] = {{1, 0, 0},
                      {0, 1, 0},
                      {0, 1, 0}}; //img1 tan�mlamas�
                      
    int img2[N][N] = {{0, 1, 0},
                      {1, 0, 1},
                      {0, 0, 1}}; //img2 tan�mlamas�
                      
    int geciciMatris[N][N]; //ge�ici matris tan�mlamas�

    int gEslesme = 0; //ge�ici e�le�me say�s� tan�mlamas�
    
    int eslesmeSayisi = 0; //maksimum e�le�me say�s� tan�mlamas�
    
    int a, b; //en iyi pozisyonun koordinatlar� tan�mlamas�

    int o = 0;
    //img1 pozisyonlar�n� deneyen fonksiyon
    do{

        for (int h = 0; h < N; h++) {//img1'i kayd�r�p,img2 ile kar��la�t�ran fonksiyon
        
            for (int d = 0; d < N; d++) {
            	
                for (int f = 0; f < N; f++) {
                	
                    int farkA = d - o; //koordinat farklar� al�n�yor
                    
                    int farkB = f - h;
                    
                    if (farkA < 0  && farkA >= N && farkB < 0 && farkB >= N) {
                    	
                        geciciMatris[d][f] = 0;
                        
                    } else {
                    	
                        geciciMatris[d][f] = img1[farkA][farkB];
                    }
                }
            }

            //img2 ile e�le�me say�s�n� hesaplayan fonksiyon
            
            gEslesme = 0;
            
            for (int d = 0; d < N; d++) {
            	
                for (int f = 0; f < N; f++) {
                	
                    if (geciciMatris[d][f] == img2[d][f]) 
					{
                        gEslesme++;
                    }
                }
            }

            //en iyi uyacak pozisyonu g�ncelle
            if (gEslesme > eslesmeSayisi) {
            	
                eslesmeSayisi = gEslesme;
                
                a = o;
                
                b = h;
            }
        }
        
        o++;
        
    }while(o < N); 

    //en iyi pozisyonu ekrana yazd�r
    printf("En iyi pozisyon (%d, %d)\n", a, b);

    return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

