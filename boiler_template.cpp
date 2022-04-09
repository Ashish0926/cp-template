// author: ash_gt

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;

#define fs first
#define sc second
#define all(i) (i).begin(), (i).end()
#define sort(x) sort(all(x))
#define fill(v, n) fill(all(v), n)
#define set_bits(n) __builtin_popcountll(n)
#define debug(x) cout << #x << " = "; _print(x); cout << "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

typedef long long int ll;
typedef unsigned long long ull;
typedef long double lld;
typedef priority_queue<ll> max_heap;
typedef priority_queue<ll, vector<ll>, greater<ll>> min_heap;

void _print(ll t) {cout << t;}
void _print(int t) {cout << t;}
void _print(string t) {cout << t;}
void _print(char t) {cout << t;}
void _print(lld t) {cout << t;}
void _print(double t) {cout << t;}
void _print(ull t) {cout << t;}

template<class T, class V> void _print(pair<T, V> p);
template<class T> void _print(vector<T> v);
template<class T> void _print(set<T> s);
template<class T> void _print(stack<T> s);
template<class T> void _print(queue<T> q);
template<class T> void _print(unordered_set<T> u);
template<class K, class V> void _print(map<K, V> m);
template<class K, class V> void _print(unordered_map<K, V> m);

template <class T, class V> void _print(pair <T, V> p) {cout << "{"; _print(p.fs); cout << ","; _print(p.sc); cout << "}";}
template <class T> void _print(vector <T> v) {cout << "[ "; for (T i : v) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(set <T> s) {cout << "[ "; for (T i : s) {_print(i); cout << " ";} cout << "]";}
template <class T> void _print(stack<T> s) {while (!s.empty()) {cout << s.top() << " "; s.pop();}}
template <class T> void _print(queue<T> q) {while (!q.empty()) {cout << q.front() << " "; q.pop();}}
template <class T> void _print(unordered_set <T> u) {cout << "[ "; for (T i : u) {_print(i); cout << " ";} cout << "]";}
template <class K, class V> void _print(map <K, V> m) {cout << "[ "; for (auto i : m) {_print(i); cout << " ";} cout << "]";}
template <class K, class V> void _print(unordered_map <K, V> m) {cout << "[ "; for (auto i : m) {_print(i); cout << " ";} cout << "]";}

int main() {
	fastio();
	int t;
	cin >> t;
	while (t--) {

	}
}
