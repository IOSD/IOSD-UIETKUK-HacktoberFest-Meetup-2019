package basics;

public class fibonacci {

public static void main(String[] args) {

int n=5;
int f0=0;
int f1=1;
int ct=1;
while(ct<=n){
int f2=f1+f0;
f0=f1;
f1=f2;
ct++;
}
System.out.println(f0);
}

}
