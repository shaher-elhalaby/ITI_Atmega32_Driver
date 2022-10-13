
////////////////////////////////////////////////////////////////////////////////
///////////////////////    EDITOR:      TEAM A /////////////////////////////////
///////////////////////    SW Compponent: APP /////////////////////////////////
///////////////////////    SW : 7_Seqment_H_     /////////////////////////////////
////////////////////////////////////////////////////////////////////////////////


#ifndef _7SEG_H_
#define _7SEG_H_
uint8_t software_7pin_decoder(uint8_t num);

{
	uint8_t count =0;
	
	DDRC =0x0F; //common anode display with 7447 decode
	DDRA =0x0F; //common cathod display with 7448 decoder
	DDRB =0xFF;//common cathod display without 7448 decoder
	
	PORTA =0x00;
	PORTB =0x00;
	PORTC =0X00;
    _delay_ms(500);

    while (1) 
    {
		PORTC =count;
		PORTA =count;
		uint8_t n=software_7pin_decoder(count);
		PORTB =n;
		_delay_ms(500);
		if(count==9){
		        count=0;
		}
		else{ count++ ;}
		
		
		
			
    }
}

uint8_t software_7pin_decoder(uint8_t num){
	// convert num from 0 to 9  to   a b c d e f g in 7 segment  binary or hex code
	//software implementation instead of 7447 decoder 
	uint8_t b_num=0;
	switch (num){
		              //  gfedcba
		case 0:  b_num =0b0111111 ; break;
		case 1:  b_num =0b0000110 ; break;
		case 2:  b_num =0b1011011 ; break;
		case 3:  b_num =0b1001111 ; break;
		case 4:  b_num =0b1100110 ; break;
		case 5:  b_num =0b1101101 ; break;
		case 6:  b_num =0b1111101 ; break;
		case 7:  b_num =0b1000111 ; break;
		case 8:  b_num =0b1111111 ; break;
		case 9:  b_num =0b1101111 ; break;
		default: b_num =0b0111111 ; break;
	}
	
	return b_num;
	
}

#endif