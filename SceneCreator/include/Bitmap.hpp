#pragma once

#include <cstdint>
#include <string>

namespace Scene {
	class Bitmap
	{
	public:
		uint8_t*  m_buffer;
		size_t    m_width, m_height;

		Bitmap() : m_buffer(nullptr), m_width(0), m_height(0)
		{
		}
		virtual ~Bitmap()
		{
			clear();
		}

		void save(const char* file_name) const;
		inline void save(const std::string& file_name) const
		{
			return save(file_name.c_str());
		}

		void clear()
		{
			m_width = m_height = 0;
			delete[] m_buffer;
			m_buffer = nullptr;
		}

	private:
		Bitmap(const Bitmap&) = delete;
		Bitmap& operator = (const Bitmap&) = delete;
	};
}