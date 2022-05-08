#include <vector>

namespace Statistics
{
    
	template <typename T=double>	//default
	class Stats
   	 {
	   public:
		T Average;
		T Max;
		T Min;
		//float Average;
		//float Max;
		//float Min;
		Stats();//empty array
		//Stats(float avg,float max,float min);
		Stats(T average,T Max,T Min);
	};
	template<typename T=double>
	Stats<T> ComputeStatistics(const std::vector<T>& );
	//Stats ComputeStatistics(const std::vector<float>&);
}
