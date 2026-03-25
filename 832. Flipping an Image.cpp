class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {

        int size = image[0].size();
        for( int i = 0;  i<size ; i++){
            int ptr = size - 1;
            for( int j = 0;  j< size/2 ; j++){
                swap( image[i][j] , image[i][ptr]);

                if( image[i][j] == 0) image[i][j] = 1;
                else image[i][j] = 0;

                if( image[i][ptr] == 0 ) image[i][ptr] = 1;
                else image[i][ptr] = 0;

                ptr--;
                

            }

            if ( size%2 != 0){
                if( image[i][size/2] == 0) image[i][size/2] = 1;
                else image[i][size/2] = 0;

            }

        }

        return image;
        
    }
};