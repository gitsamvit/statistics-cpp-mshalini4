#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<___>& ) {
   Stats<T> st;
    if(data.size()==0)
    {
       st.Average=NAN;
       st.Max=NAN;
       st.Min=NAN;
    }
    
    st.Max=*max_element(data.begin(),data.end());
    st.Min=*min_element(data.begin(),data.end());
    T sum=accumulate(data.begin(), data.end() , 0);
    st.Average=(sum/data.size());
    return st;
   // float maxi=*max_element(data.begin(),data.end());
    //float mini=*min_element(data.begin(),data.end());
    //float sum=accumulate(data.begin(), data.end() , 0);
    //float avg=sum/data.size();
    //return Statistics::Stats(avg,maxi,mini);
}
