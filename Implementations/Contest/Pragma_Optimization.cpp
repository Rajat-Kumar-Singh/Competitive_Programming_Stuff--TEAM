#pragma comment(linker, "/stack:200000000") // works only with MS Visual C++
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// also better to use a[i] -= a[i] > x ? x : 0; rather than if (a[i] > x) a[i] -= x;