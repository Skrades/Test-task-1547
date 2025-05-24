#include "Bitmap.hpp"

#include <fstream>
#include <istream>
#include <ostream>
#include <cstring>
#include <memory>

namespace Scene {
	void Bitmap::save(const char* filename) const
	{
		std::ofstream file(filename, std::ios::binary);

		const int fileSize = 54 + m_width * m_height * 3;
		const int dataOffset = 54;
		const int headerSize = 40;
		const int planes = 1;
		const int bpp = 24;

		file.write("BM", 2);
		file.write(reinterpret_cast<const char*>(&fileSize), 4);
		file.write("\0\0\0\0", 4);

		file.write(reinterpret_cast<const char*>(&dataOffset), 4);
		file.write(reinterpret_cast<const char*>(&headerSize), 4);
		file.write(reinterpret_cast<const char*>(&m_width), 4);
		file.write(reinterpret_cast<const char*>(&m_height), 4);
		file.write(reinterpret_cast<const char*>(&planes), 2);
		file.write(reinterpret_cast<const char*>(&bpp), 2);
		file.write("\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 24);

		for (int y = m_height - 1; y >= 0; --y) {
			file.write(reinterpret_cast<const char*>(&m_buffer[y * m_width * 3]), m_width * 3);
		}
	}
}