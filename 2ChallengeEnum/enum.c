#include <stdio.h>

int main(void){
    enum companyNames {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};
    enum companyNames google;
    google = GOOGLE;
    enum companyNames facebook;
    facebook = FACEBOOK;
    enum companyNames xerox;
    xerox = XEROX;
    enum companyNames yahoo;
    yahoo = YAHOO;
    enum companyNames ebay;
    ebay = EBAY;
    enum companyNames microsoft;
    microsoft = MICROSOFT;
    printf(" %d\n %d\n %d\n", xerox, google, ebay);
    
    return 0;
}