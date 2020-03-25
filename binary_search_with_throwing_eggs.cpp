#include <bits/stdc++.h>
#include "lib0020.h"

long long height_limit(long long M){
	long long l=1;
	long long r = M;
	while(l!=r ){
		if(r-l == 1){
			break;
		}
		long long m = (l+r)/2;
		if(is_broken(m)){
			r = m-1;	
		}else{
			l = m;
		} 
		
		
	}
	if(is_broken(r)){
		return l;	
	}else{
		return r;
	}

}
