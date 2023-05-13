int bitMagic(int n, vector<int> &arr) {
        // code here
         
        int differenceCount = 0;
        
       
        int startIndex = 0;
        int endIndex = n - 1;
        
     
        while (startIndex < endIndex) {
              if (arr[startIndex] != arr[endIndex]) {
                differenceCount++;
            }
            
          
            startIndex++;
            endIndex--;
        }
        
        
        return (differenceCount + 1) / 2;
}
    };
