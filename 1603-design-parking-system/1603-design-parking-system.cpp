class ParkingSystem {
public:
    int bc, mc, sc;
    ParkingSystem(int big, int medium, int small) {
        bc = big;
        mc = medium;
        sc = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(bc>0){
                    bc--;
                    return true;
                }
                break;
            case 2:
                if(mc>0){
                    mc--;
                    return true;
                }
                break;
            case 3:
                if(sc>0){
                    sc--;
                    return true;
                }
                break;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */