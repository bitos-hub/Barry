#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Xml::Serialization;
using namespace Barry;

namespace BarryPersistance {
	public ref class Persistance
	{
	public:
		static void PersistBinaryFile(String^ fileName, Object^ persistObject);
		static Object^ LoadBinaryFile(String^ fileName);
		static void PersistTextFile(String^ fileName, Object^ persistObject);

	};
}
