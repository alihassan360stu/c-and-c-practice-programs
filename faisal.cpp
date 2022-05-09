#include<conio.h>
#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;

struct TimeStamp {
       int tm_sec;
       int tm_min;
       int tm_hour;
       int tm_mday;
       int tm_mon;
       int tm_year;
       int fullTime;
};

int TOINT(char *, int);

main()
{
      char mm[2],ss[2],hh[2],yy[4],mo[2],dd[2], *string;
      TimeStamp event, current;
      do{
      cout<<"Enter date in formate YYYY-MM-DD hh:mm:ss\nTime:";
      yy[0] = getche();
      yy[1] = getche();
      yy[2] = getche();
      yy[3] = getche();
      cout<<"-";
      mo[0] = getche();
      mo[1] = getche();
      cout<<"-";
      dd[0] = getche();
      dd[1] = getche();
      cout<<" ";
      hh[0] = getche();
      hh[1] = getche();
      cout<<":";
      mm[0] = getche();
      mm[1] = getche();
      cout<<":";
      ss[0] = getche();
      ss[1] = getche();
      event.tm_sec = TOINT(ss, 2);
      event.tm_min = TOINT(mm,2);
      event.tm_hour = TOINT(hh,2);
      event.tm_mday = TOINT(dd,2);
      event.tm_mon = TOINT(mo,2);
      event.tm_year = TOINT(yy,4);
      event.fullTime = event.tm_sec+event.tm_min*60+event.tm_hour*3600+event.tm_mday*24*3600;
      struct tm *ptr;
      time_t lt;
      lt = time('\0');
      ptr = localtime(&lt);
      current.tm_hour = ptr->tm_hour;
      current.tm_sec = ptr->tm_sec;
      current.tm_min = ptr->tm_min;
      current.tm_year = ptr->tm_year+1900;
      current.tm_mday = ptr->tm_mday;
      current.tm_mon = ptr->tm_mon+1;
      current.fullTime = current.tm_sec+current.tm_min*60+current.tm_hour*3600+current.tm_mday*24*3600;
      int magic_5_mins = 300;
      int magic_15_mins = 900;
	  int magic_30_mins = 1800;
      int magic_1_hour = 3600;
      int magic_1_day = 86400;
	  int magic_1_week = 604800;
	  int diff = event.fullTime - current.fullTime;
	  
	  if(event.tm_year == current.tm_year && event.tm_mon == current.tm_mon && event.tm_mday == current.tm_mday)
	  {
         if(diff > 0){
			if(diff < magic_5_mins){
				string =  "Now";
			} else if (diff < magic_15_mins){
				string = "In the next few minutes";
			} else if (diff < magic_30_mins){
				string = "In the next half hour";
			} else if (diff < magic_1_hour){
				string = "In the next hour";
			} else {
				string = "Today...";// + date('H:i' , $this->event_timestamp);
			}
         }
		  // Past Events
		 else {
			diff = -(diff);
			if(diff < magic_5_mins){
				string = "Just now";
			} else if (diff < magic_15_mins){
				string = "A few minutes ago";
			} else if (diff < magic_30_mins){
				string = "In the last half hour";
			} else if (diff < magic_1_hour){
				string = "In the last hour";
			} else  if (diff < (magic_1_hour * 2)){
				string = "1 hour ago";
			} else {
				string = "Few hours ago";
				//$this->string = 'today at ' . date('H:i' , $this->event_timestamp);
			}
		
         }
    }
    else
    {
        if(event.tm_year == current.tm_year && event.tm_mon == current.tm_mon)
        {
            int dayDiff=0;
            dayDiff = event.tm_mday-current.tm_mday;
            
            if(dayDiff<0)
            {
                   if(dayDiff>-2)
                   {
                   string = "Yesterday";
                   }
                   else if(dayDiff>-5)
                   {
                        string = "Few days ago";
                   }
                   else
                   {
                       string = "Last month";
                   }
            }
            else if(dayDiff==0)
            {
                  string = "Today";
            }
            else
            {
                  if(dayDiff<7)
                  {
                       string = "Coming week";
                  }
                  else
                  {
                  string = "Few weeks after";
                  }
            }
        }
        else if(event.tm_year == current.tm_year)
        {
             int monDiff = event.tm_mon - current.tm_mon;
             if(monDiff>0)
             {
                  if(monDiff == 1)
                  {
                             string = "This month";
                  }
                  else if(monDiff <4)
                  {
                             string = "Few months after";
                  }
                  else
                  {
                             string = "Many months after";
                  }
             }
             else
             {
                 if(monDiff>-2)
                 {
                               string = "Last month";
                 }
                 else if(monDiff>-5)
                 {
                      string = "Few months ago";
                 }
                 else
                 {
                     string = "Last year";
                 }
             }
        }
        else
        {
            int yearDiff = event.tm_year-current.tm_year;
            if(yearDiff>0)
            {
                          if(yearDiff<2)
                          {
                                        string = "This year";
                          }
                          else if(yearDiff<5)
                          {
                               string = "Few years after";
                          }
                          else
                          {
                              string = "Many years after";
                          }
            }
            else
            {
                if(yearDiff>-2)
                {
                      string = "Last year";
                }
                else if(yearDiff>-5)
                {
                     string = "Few years ago";
                }
                else
                {
                    string = "Many many years ago";
                }
            }
        }
    }
    
	cout<<endl<<endl<<"The event you entered has occured or will be occuring on :\n\n"<<endl<<"Time: "<<string;
    cout<<endl<<endl;
    cout<<"Do you want to try again (Y/N)...\n\n\n";
    }
    while(getch()=='y' || getch()=='Y');
}


int TOINT(char *value, int x)
{
    int result = 0;
    for(int i = 0; i<x; i++)
    {
        result+= ((int)value[i]-48)*pow(10, x-(i+1));
    }
    return result;
}
