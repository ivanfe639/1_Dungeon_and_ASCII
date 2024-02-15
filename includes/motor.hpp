#ifndef MOTOR_H
#define MOTOR_H

#include <vector>

using namespace std;

typedef vector< vector<string> > Matrix;
typedef vector<string> Row;

class MOTOR{

    public:
        // Constructor
        MOTOR(unsigned int _rows, unsigned int _cols){
            rows = _rows;
            cols = _cols;
            setSizeScene(rows, cols);  
            createRooms();          
        }

        // Methods
        unsigned int getrows(){
            return rows;
        }

        unsigned int getcols(){
            return cols;
        }
        
        void setSizeScene(unsigned int rows, unsigned int cols){
            for(size_t i = 0; i < rows; ++i)
            {
                Row row(cols);
                for(size_t j = 0; j < cols; ++j)
                {
                    row[j] = "?";
                }
                scene.push_back(row); // push each row after you fill it
            }            
        }
        
        void printScene(){  
            for (int i=0; i<rows; i++){
                for (int j=0; j<cols; j++){
                    cout << scene[i][j];
                }
                cout << endl;
            }
        }

        unsigned int maxDim(){

            if (rows <= cols){
                return cols;
            }else{
                return rows;
            }
        }

        //Create rooms
        void createRooms(){
            unsigned int maxDimRoom = maxDim();
            cout << "maxDimRoom" << maxDimRoom << endl;
        }

        

    private:
        unsigned int rows;
        unsigned int cols;
        Matrix scene;

};





void helloWorldHeaders();



#endif
