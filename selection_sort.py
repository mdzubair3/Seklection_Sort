#Selection Sort
#Done by mohammed zubair
#Date: 15-09-2020
def selection_sort(array,n):
    mini=0
    temp=0
    for i in range(0,n-1):
        mini=i
        for j in range(i+1,n):
            if(array[j]<array[mini]):
                mini=j
        temp=array[i]
        array[i]=array[mini]
        array[mini]=temp
    print("\nSorted List...:")
    for i in array:
        print(i,end=" ")
        
        
        
    
n=int(input("Please Enter the number of elemnts in list:"))
l=[]
print("\nEnter the list elements:")
for i in range(0,n):
    z=int(input())
    l.append(z)
selection_sort(l,n)





    
