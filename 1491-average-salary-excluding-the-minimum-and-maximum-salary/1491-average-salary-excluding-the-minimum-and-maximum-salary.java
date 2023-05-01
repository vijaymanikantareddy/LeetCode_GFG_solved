class Solution {
    public double average(int[] salary) {
        double res = 0;
        int mi = salary[0], ma = salary[1];
        for(int ele: salary){
            mi = mi > ele? ele: mi;
            ma = ma > ele? ma: ele;
            res += ele;
        }
        res = res - ma - mi;
        res = res/(salary.length-2);
        return res;
    }
}