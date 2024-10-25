#pragma once
namespace ServiceBarry {
	public ref class PetIdNoFoundException : public System::Exception {
	public:
		PetIdNoFoundException(System::String^ message) : Exception(message) {}
	};
}

