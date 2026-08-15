class Solution {
    public ArrayList<Integer> quadraticRoots(int a, int b, int c) {
        // code here
        ArrayList<Integer>ans=new ArrayList<>();
        int d=b*b-4*a*c;
        
        if(d<0){
            ans.add(-1);
            return ans;
        }
        double root1=(-b+Math.sqrt(d))/(2.0*a);
        double root2=(-b-Math.sqrt(d))/(2.0*a);
        
        int r1=(int) Math.floor(root1);
        int r2=(int) Math.floor(root2);
        
        if(r1>=r2){
            ans.add(r1);
            ans.add(r2);
        }
        else{
            ans.add(r2);
            ans.add(r1);
        }
        return ans;
    }
}