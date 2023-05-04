bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n){
    if(n == 0){
            return true;
        }
    for(int i = 0 ; i < flowerbedSize ; i++){
            if(flowerbed[i]==0 && (i == 0 || flowerbed[i-1] == 0) && (i+1 == flowerbedSize || flowerbed[i+1]==0 )){
                flowerbed[i] = 1;
                n--;
            }
            if(n == 0){
                return true;
            }
        }
        return false;
}