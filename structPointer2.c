#include<stdio.h>

struct stores
{
	char name[20];
	float price;
	int quantity;
};

void update(struct stores *product, float p, int q)
{
	product->price += p;
	product->quantity += q;
}

float mul(struct stores *stock)
{
	return(stock->price * stock->quantity);
}

int main()
{
	float p_increment, value;
	int q_increment;
	struct stores item = {"xyz",25.75,12};
	struct stores *ptr = &item;
	printf("input price increment and quantity increment\n");
	scanf("%f %d", &p_increment, &q_increment);
	update(&item, p_increment, q_increment);
	printf("updated values of item\n");
	printf("name : %s\n", ptr->name );
	printf("price : %f\n", ptr->price );
	printf("quantity : %d\n",ptr->quantity );

	value = mul(&item);
	printf("\n values of the item = %f\n",value );
	return 0;
}