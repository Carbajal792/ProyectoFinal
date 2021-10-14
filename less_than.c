#define N 10
int array[N] = {1,2,3,4,5,6,7,8,9,0};
int search(int *a, int i){
    int x;
    for(int n=0;n<i;n++){
      if(a[n]>=100){
        x=n;
        return n;
      } 
    }
    return -1;
}

void double_array(int *a, int i){
    int x;
    for(int n=0;n<i;n++){
      a[i] = a[i]*2;
    }
    x = search(*a,i);
    if(x!=-1){
      return;
    }
    else 
    double_array(*a,i);
}
int main(){
  double_array(array,N);
  return 0;
}