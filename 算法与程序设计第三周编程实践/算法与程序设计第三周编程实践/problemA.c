//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include <vector>
//
//struct Product 
//{
//    int profit, deadline;
//    friend bool operator<(Product a, Product b) 
//	{
//        return a.profit > b.profit; 
//    }
//} products[10000];
//
//int main() 
//{
//    int n;
//    while (scanf("%d", &n) != EOF)
//	{
//        std::vector<bool> slots(10000, false); 
//        for (int i = 0; i < n; i++) 
//		{
//            scanf("%d%d", &products[i].profit, &products[i].deadline);
//        }
//
//        std::sort(products, products + n); 
//
//        int totalProfit = 0;
//        for (int i = 0; i < n; i++) 
//		{
//            for (int j = products[i].deadline; j >= 1; j--) {
//                if (!slots[j]) 
//				{  
//                    totalProfit += products[i].profit;
//                    slots[j] = true;  
//                    break;
//                }
//            }
//        }
//        printf("%d\n", totalProfit);
//    }
//    return 0;
//}