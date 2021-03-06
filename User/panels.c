#include "panels.h"
#include "oled.h"
const double price_watermelon = 2.0;
const double price_apple = 2.5;
const double price_rawegg = 0.5;

int chosen_fruit;
int interface;
void show_price_choose(){
	oled_show_character(0,0,0);
	oled_show_character(16,0,1);
	oled_show_character(32,0,2);
	oled_show_character(48,0,3);
	oled_show_character(64,0,4);
	
	/*单价选择：*/
	for(char i = 0;i<=2;i++){
		oled_clear_specific_area(0,2*i+2);
	}
	oled_show_character(0,2*chosen_fruit+2,19);//表示选中的点
	
	oled_show_character(16,2,5);
	oled_show_character(32,2,6);
	oled_show_character(48,2,4);
	oled_show_character(64,2,13);
	oled_show_string(80,2,"2.00/g",2);
	/*·西瓜：￥2.00/g*/
	oled_show_character(16,4,7);
	oled_show_character(32,4,8);
	oled_show_character(48,4,4);
	oled_show_character(64,4,13);
	oled_show_string(80,4,"2.50/g",2);
	/*苹果：￥2.50/g*/
	oled_show_character(16,6,9);
	oled_show_character(32,6,10);
	oled_show_character(48,6,11);
	oled_show_character(64,6,12);
	oled_show_string(80,6,"0.50/g",2);
	/*生瓜蛋子0.5/g*/
}//单价选择界面
void show_scale(){
	oled_show_character(0,0,14);
	oled_show_character(16,0,15);
	oled_show_character(32,0,4);
	/*重量：*/
	oled_show_character(0,2,16);
	oled_show_character(16,2,17);
	oled_show_character(32,2,4);
	/*价格：*/
	if(chosen_fruit==0){
		oled_show_character(16+10+10,4,5);
		oled_show_character(32+10+10,4,6);
	}else if(chosen_fruit==1){
		oled_show_character(16+10+10,4,7);
		oled_show_character(32+10+10,4,8);
	}else{
		oled_show_character(16+10+10,4,9);
		oled_show_character(32+10+10,4,10);
		oled_show_character(48+10+10,4,11);
		oled_show_character(64+10+10,4,12);
	}
}//称重界面