#ifndef CAST_HPP
#define CAST_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Cast
{
	public:

		Cast();
		virtual ~Cast();
		Cast(const Cast &cpy);

        Cast &operator = (const Cast &arg);

		float		change(std::string const str);
		void 		toInt(float str);
        void 		toChar(float str);
        void 		toDouble(float str);
        void 		toFloat(float str);

	private:
		bool flag = false;
		bool stop = false;
};

std::ostream &operator<<(std::ostream & out, const Cast & Cast);

#endif