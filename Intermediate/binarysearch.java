public class binarysearch{
     public static int binarySearch(int itemList[],int item){
        int leftIndex=0;
        int rightIndex=itemList.length-1;
        int middleIndex;
        
        while(leftIndex<=rightIndex){
            middleIndex=(leftIndex+rightIndex)/2;
            
            if(itemList[middleIndex]<item){
                leftIndex=middleIndex+1;
            }
            else if(itemList[middleIndex]>item){
                rightIndex=middleIndex-1;
            }
            else{
                return middleIndex;
            }
        }
        return -1;
    }
    
    public static void main(String args[]){
        System.out.println(binarySearch(new int[]{1,2,3,4,5},6));
        System.out.println(binarySearch(new int[]{1,2,3,4,5},3));
    }
}
