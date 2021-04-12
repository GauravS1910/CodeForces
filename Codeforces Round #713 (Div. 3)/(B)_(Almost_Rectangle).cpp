#include<bits/stdc++.h>
#define ll          long long
#define ld          long double
#define mod         (1000000000+7)
#define INF         (1000000000+7)
#define INT_MAX     (1e18)
#define ull         unsigned long long
#define pb          push_back
#define pi          acos(-1)
#define pii         pair<ll int,ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define SIZE(X)     ((int)((X).size()))
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
#define fo(i,s,n)   for(int i=s;i<n;i++)
#define FORE(i,s,n) for(int i=s;i<=n;i++)
#define rep(i,n)    for(int i=0;i<(n);++i)
#define repf(i,a,b) for(int i=(a);i<=(b);++i)
#define ERASE(x)    x.erase(unique(x.begin(),x.end()),x.end()) //removes repeated element;
#define Fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(0);

using namespace std;
const int N = 1000010;
vector <ll> is_prime(N+1 , true);
ll to_int(string s){ stringstream geek(s); ll x = 0; geek>>x; return x; }
string to_string(ll n){ ostringstream str1; str1<<n; string geek = str1.str(); return geek; }
bool sortinrev(const pair<int,int> &a,const pair<int,int> &b){return (a.first > b.first);}
bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b){return a.second>b.second;}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b) {return (a.second < b.second);}
ll powerm(ll a, ll k) { if (!k) {return 1;}ll b = powerm(a, k / 2);b = b * b % INF;if (k % 2) {return a * b % INF;} else {return b;}}
ll power(ll a , ll b) { if(b == 1) return a; if(b == 0) return 1; ll m1 = power(a,b/2); if(b%2) return m1*m1*a; return m1*m1; }
void seive_of_eras(ll n) { is_prime[0] = 0; is_prime[1] = 0; for(ll i=2;i*i<=n;i++) { if(is_prime[i]) { for(ll j=i*i;j<=n;j+=i) { is_prime[j] = false; } } } }
bool isprime (ll a) { if(a<=1) return false; if(a==2|a==3) return true; if(a%2==0||a%3==0) return false; for(ll i=5;i*i<=a;i=i+6) { if(a%i==0||a%(i+2)==0) return false; } return true;}

void codeit()
{
    ll n; cin>>n;
    char A[n][n];
    ll f = 0;
    pair<ll , ll> x , y;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cin>>A[i][j];
            if(A[i][j]=='*' && f==0)
            {
                x.first = i;
                x.second = j;
                f++;
            }
            else if(A[i][j]=='*')
            {
                y.first = i;
                y.second = j;
            }
        }
    }
    if(x.first==y.first)
    {
        if(x.first+1<n)
        {
            A[x.first+1][x.second] = '*';
            A[x.first+1][y.second] = '*';
        }
        else
        {
            A[x.first-1][x.second] = '*';
            A[x.first-1][y.second] = '*';
        }
    }
    else if(x.second==y.second)
    {
        if(x.second+1<n)
        {
            A[x.first][x.second+1] = '*';
            A[y.first][y.second+1] = '*';
        }
        else
        {
            A[x.first][x.second-1] = '*';
            A[y.first][y.second-1] = '*';
        }
    }
    else
    {
        A[x.first][y.second] = '*';
        A[y.first][x.second] = '*';
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            cout<<A[i][j];
        } cout<<endl;
    }
    return;
}

int main()
{
    Fast
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //initialize_nCr(); //for nCr;
    //seive_of_eras(1000010);
    ll tt; tt = 1;
    cin>>tt;
    for(ll i=0;i<tt;i++)
    {
        codeit();
    }
}
