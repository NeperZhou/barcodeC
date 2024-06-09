#include <stdio.h>
#include "include/bitmap.h"
#include "bar.cpp"

int width=2;//per data
int height=30;
Bitmap create(string n){
	Bitmap image;
	vector <vector <Pixel> > bmp;
	vector <Pixel> ibmp;
	Pixel rgb0;
	rgb0.red=0;rgb0.green=0;rgb0.blue=0;
	Pixel rgb1;
	rgb1.red=255;rgb1.green=255;rgb1.blue=255;

	string k=j(n);
	/*int l=0;
	for(int i=0;i<k.length();i++){
		l+=(int)k[i]-48;
	}*/
	int w=0;
	bool isblack=true;
	for(int i=0;i<k.length();i++){
		for(int x=0;x<((int)k[i]-48);x++){
			if(isblack){
				ibmp.push_back(rgb0);
			}else{
				ibmp.push_back(rgb1);
			}
			
		}
		isblack=!isblack;
	}
	for(int i=0;i<height;i++){
		bmp.push_back(ibmp);
	}
    image.fromPixelMatrix(bmp);
	return image;
}



int main (int argc, char *argv[]){
	if(argc==3){
		Bitmap img=create((string)argv[1]);
		img.save(argv[2]);
		cout<<"Done at "<<argv[2];
	}else if((string)argv[1]=="-help"){
		cout<<"Tool for bar code 128C"<<endl<<"Usage:bar [[[Numbers] [BMP Save Path]]|-help]";
	}else{
		cout<<"[ERR]Wrong Grammar.Enter [bar -help] for help.";
	}
	return 0;
}



