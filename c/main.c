#include <stdio.h>
#define PI 3
#include <math.h>


int main(void) {
    
    int sekil,secim;
    float h,r,s,a,b,c,area,volume; // Hocam ödevi ingilizce verdiğiniz için çıkan sonuçları ingilizce yazdım.
    
    
    printf("Please select one shape:\n\n");
    
    printf("1. Right Circular Cone \n");
    printf("2. Sphere \n");
    printf("3. Cuboid \n");
    printf("4. Tetrahedron \n");
    printf("5. Square Prism \n");
    printf("6. Rectangular Prism \n");
    printf("7. Triangle Prism \n");
    printf("8. Ellipsoid \n\n");
    
    scanf("%d", &sekil);
    
    switch(sekil){
    	
    case 1: // Burada hangi şekili seçtiğimizi daha rahat görebilelim diye switch case ile yazı ekledim.
      printf("\nYou have selected Right Circular Cone\n\n");	
    break;
    
    case 2:
    	printf("\nYou have selected Sphere\n\n");
    break;
    
    case 3:
    	printf("\nYou have selected Cuboid\n\n");
    break;
    
	case 4:
    	printf("\nYou have selected Tetrahedron\n\n");
    break;
	
	case 5:
    	printf("\nYou have selected Square Prism\n\n");
    break;
	
	case 6:
    	printf("\nYou have selected Rectangular Prism\n\n");
    break;
	
	case 7:
    	printf("\nYou have selected Triangle Prism\n\n");
    break;
	
	case 8:
    	printf("\nYou have selected Ellipsoid\n\n");
    break;
		
    default:
    	printf("\nYou didnt select one of the eight shapes\n\n");
    	break;
	}
    
    if (sekil<=8 && sekil >0){ // Burada eğer 1-8 arasında bir sayı girilmezse işlemi bitiriyor.
	
    printf("Now please select which one you want to calculate\n\n");
    printf("1. Area\n");
    printf("2. Volume\n\n");
    
    scanf("%d",&secim);
    
    switch(secim){
    	
    case 1: 
      printf("\nArea will be calculated\n\n");	
    break;
    
    case 2:
    	printf("\nVolume will be calculated\n\n");
    break;
    
    default:
    	printf("\nYou must select one of two options\n");
    break;
}


}
if (secim<=2 && secim>0){  //Aynı şekilde eğer alan ya da hacim dışında bir seçenek seçilirse komut işlemini sonlandırıyor.
	
	
    switch(sekil){
	
	case 1:
    	if (secim == 1){
    		printf("Please input r, h, s\n\n");
    	scanf("%f %f %f",&r,&h,&s);
    	if(r < 0 || h < 0 || s < 0){
		printf("\nLength cant be negative");  //Burada negatif uzunluk girilirse durduruyor.
		} else {
		
    	area = PI*r*r + PI*r*s;
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input r, h\n\n"); // Burada da switch case ile eğer seçim değeri 1 ise alan 2 ise hacim hesaplanıyor.
    	scanf("%f %f",&r,&h);
    	if(r < 0 || h < 0 ){
		printf("\nLength cant be negative");
		} else {
    	volume = PI*r*r*h/3;
    	printf("\nResult is %f",volume); }}
    
    break;

	
	
    case 2:
    	if (secim == 1){
    		printf("Please input r\n\n");
    	scanf("%f",&r);
    	if(r < 0){
		printf("\nLength cant be negative");
		} else {
    	area = 4*PI*r*r;
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input r\n\n");
    	scanf("%f",&r);
    	if(r < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = 4*PI*r*r*r/3;
    	printf("\nResult is %f",volume); }}
    break;
    
    
    case 3:
    	if (secim == 1){
    		printf("Please input a, b, c\n\n");
    	scanf("%f %f %f",&a,&b,&c);
    	if(a < 0 || b < 0 || c < 0){
		printf("\nLength cant be negative");
		} else {
    	area = 2*(a*b+a*c+b*c);
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input a, b, c\n\n");
    	scanf("%f %f %f",&a,&b,&c); 
    	if(a < 0 || b < 0 || c < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = a*b*c;
    	printf("\nResult is %f",volume); }}
    break;
    	
    	
    	
    case 4:
    		if (secim == 1){
    		printf("Please input a\n\n");
    	scanf("%f",&a);
    	if(a < 0){
		printf("\nLength cant be negative");
		} else {
    	area = sqrt(3)*a*a;
    	printf("\nResult is %f",area); }}
		
    	else { 
    	printf("Please input a\n\n");
    	scanf("%f",&a);
    	if(a < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = a*a*a/6*sqrt(2);
    	printf("\nResult is %f",volume); }}
    break;
    		
    		
    
    case 5:
    	if (secim == 1){
    		printf("Please input a, h\n\n");
    	scanf("%f %f",&a, &h);
    	if(a < 0 || h < 0){
		printf("\nLength cant be negative");
		} else {
    	area = 4*a*h + 2*a*a;
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input a, h\n\n");
    	scanf("%f %f",&a,&h);
    	if(a < 0 || h < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = a*a*h;
    	printf("\nResult is %f",volume); }}
    break;
    	
    	
   
   case 6:
   	if (secim == 1){
    		printf("Please input a, b, c\n\n");
    	scanf("%f%f%f",&a,&b,&c);
    	if(a < 0 || b < 0 || c < 0){
		printf("\nLength cant be negative");
		} else {
    	area = 2*(a*b+a*c+b*c);
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input a, b, c\n\n");
    	scanf("%f%f%f",&a,&b,&c);
    	if(a < 0 || b < 0 || c < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = a*b*c;
    	printf("\nResult is %f",volume); }}
   	break;
   	
   	
   	
    case 7:
   	if (secim == 1){
    		printf("Please input a, b, h\n\n");
    	scanf("%f%f%f",&a,&b,&h);
    	if(a < 0 || b < 0 || h < 0){
		printf("\nLength cant be negative");
		} else {
    	area = a*h+3*a*b;
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input a, b, h\n\n");
    	scanf("%f%f%f",&a,&b,&h);
    	if(a < 0 || b < 0 || h < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = a*b*h/2;
    	printf("\nResult is %f",volume); }}
   	break;
   	
   	
   	
   	case 8:
   		if (secim == 1){
    		printf("Please input a, b\n\n");
    	scanf("%f%f",&a,&b);
    	if(a < 0 || b < 0){
		printf("\nLength cant be negative");
		} else {
    	area = PI*a*b;
    	printf("\nResult is %f",area); }}
		
    	else {
    	printf("Please input a, b, c\n\n");
    	scanf("%f%f%f",&a,&b,&c);
    	if(a < 0 || b < 0 || c < 0){
		printf("\nLength cant be negative");
		} else {
    	volume = 4*PI*a*b*c/3;
    	printf("\nResult is %f",volume); }}
   	break;
   		
   		
    	
}

}



    return 0;
}