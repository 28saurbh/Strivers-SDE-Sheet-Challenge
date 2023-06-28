double median(vector<int>& a, vector<int>& b) {

    

    int n=a.size();

    int m=b.size();

 

    vector<int> v;

 

    sort(a.begin(),a.end());

    sort(b.begin(),b.end());

    int i=0;

    int j=0;

    while(i<n&&j<m)

    {

        if(a[i]<b[j])

        {

            v.push_back(a[i]);

            i++;

        }

        else{

            v.push_back(b[j]);

            j++;

        }

    }
