#ifndef HOTELMAN_H
#define HOTELMAN_H
#include<string.h>
#include<conio.h>
class HotelMgnt:public Room
{
public:
HotelMgnt();
void checkIn();
void getAvailRoom();
void searchCustomer(char*);
void checkOut(int);
void guestSummaryReport();
};


#endif
