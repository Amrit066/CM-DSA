# To Do Chi Square Test

def get_variable():
  var1=input("Enter the first variable: ")
  var2=input("Enter the second variable: ")
  return var1,var2
  
def get_row_col():
  row=col=0
  print("Enter number of rows and columns as-[ 2 3]: ")
  row,col=tuple([int(x) for x in input().split()])
  return row,col

def get_data(row):
  data={}
  print("Values for each row in a one line separated by space:")
  for i in range(row):
    values=[int(x) for x in input().split()]
    data[i]=values
  return data

def display_data(var1,var2,data,type):
  
  print("******************{} Cross Table: {} vs {}******************".format(type,var1,var2))
  print("="*60)
  for i in data.keys():
    for val in data[i]:
      print("{:<5}".format(val),end="")
    print()
    
def create_expected_table(row,col,data):
  data1={}
  col_total={}
  row_total=[]
  for i in data.keys():
    j=0
    total=0
    for val in data[i]:
      total+=val
      col_total[j]=col_total.get(j,0)+val
      j+=1
    row_total.append(total)

  sum1=sum(row_total)
  for i in range(row):
    values=[]
    for j in range(col):
      cal=round((row_total[j]*col_total[i])/sum1,2)
      values.append(cal)
    data1[i]= values
  return data1

def calculate_chi_value(data1,data2,row,col):
  total=0
  for i in range(row):
    for j in range(col):
      total+=((data1[i][j]-data2[i][j])**2)/data2[i][j]
  return total
  
def main():
  
  while(True):
    data1={}
    data2={}
    var1,var2=get_variable()
    row,col=get_row_col()
    data1=get_data(row)
    display_data(var1,var2,data1,"Observed") 
    data2=create_expected_table(row,col,data1)
    display_data(var1,var2,data2,"Expected") 
    calculated_chi=calculate_chi_value(data1,data2,row,col)
    print("Enter chi value for {} degree of freedom with .05 p-value: ".format((row-1)*(col-1)))
    table_chi=float(input())
    
    H0="{} and {} are independent of each other.".format(var1, var2)
    H1="{} and {} are dependent on each other.".format(var1, var2)
    
    if(table_chi>calculated_chi):
      print(H0)
    else:
      print(H1)

    if(input("Want to continue again? [choose:y or n]: ").lower()=='n'):
      break
    else:
      continue

if __name__=='__main__':
    main()
  
