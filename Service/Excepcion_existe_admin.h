#pragma once

namespace ServiceBarry {
	public ref class Excepcion_existe_admin : public System::Exception {
	public:
		Excepcion_existe_admin(System::String^ mensaje) : Exception(mensaje) {}
	};
}