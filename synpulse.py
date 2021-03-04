''' Read input from STDIN. Print your output to STDOUT '''
    #Use input() to read input from STDIN and use print to write your output to STDOUT

def main():

 # Write code here 
 l=input()
 inp = list(map(int,input().split())) 
 product=1
 count=0
 for i in inp:
     product=product*i
     if(i==0):
         count=count+1
 product1=1
 for i in inp:
     if(count==1):
         if(i==0):
             continue
         else:
             product1=product1*i
 for i in inp:
     if(i==0 and count>=2):
         print(0,end=" ")
     elif(i==0 and count==1):
         print(product1,end=" ")
     else:
         print(int(product/i),end =" ")
  

main()
