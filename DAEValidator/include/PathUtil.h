#pragma once

#include <list>
#include <string>

namespace opencollada
{
	class Path
	{
	public:
		static const std::string & Separator();
		static std::string Join(const std::string & path_a, const std::string & path_b);
		static bool IsDirectory(const std::string & path);
		static bool Exists(const std::string & path);
		static std::string GetExecutablePath();
		static std::string GetExecutableDirectory();
		static std::string GetWorkingDirectory();
		static std::list<std::string> ListDaes(const std::string & path, bool recursive);
		static std::string GetAbsolutePath(const std::string & path);
		static std::string RemoveDotSegments(const std::string & path);
		static std::string GetFileBase(const std::string & path);

	private:
		static std::string mSeparator;
	};
}