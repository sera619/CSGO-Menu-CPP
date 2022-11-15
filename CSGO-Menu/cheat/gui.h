#pragma once
#include <d3d9.h>


namespace gui {
	// constant window size
	constexpr int WIDTH = 500;
	constexpr int HEIGHT = 300;

	inline bool exit = true;


	// winapi window variables
	inline HWND window = nullptr;
	inline tagWNDCLASSEXA windowClass = { };

	// points for window movement
	inline POINTS position = { };

	// direct x9 state variables
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	// window handler (destroy/create)
	void CreateHWindow(const char* windowName, const char* className) noexcept;
	void DestroyHWindow() noexcept;

	// devicehandler (creation/destroy)
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// ImGuihandler (destroy/create)
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;

}