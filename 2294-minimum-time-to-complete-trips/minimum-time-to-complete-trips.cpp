class Solution {
public:
    bool f(vector<int> &time , long long givenTime, int totalTrips){
        long long trips = 0;
        
            for(int i=0;i<time.size();i++){
                trips += givenTime/time[i];
            } 
            return trips >= totalTrips;
    }

    long long minimumTime(vector<int>& time, int totalTrips) {
        long long n = time.size();
        long long mini = *min_element(time.begin(),time.end());
        long long l=1;
        long long r = mini*totalTrips;
        while(l < r){
            long long mid = l + (r-l)/2;
            if(f(time , mid , totalTrips)){
                r = mid;
            }
            else l = mid+1;
        }
        return l;
    }
};