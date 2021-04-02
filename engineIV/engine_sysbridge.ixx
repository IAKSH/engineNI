// 系统消息的获取
// -------------
export module engine_sysbridge;

namespace sysbridge::keyboard
{
	export bool checkKeyDown(int) noexcept;

	export enum class KeyList
	{
		N0, N1, N2, N3, N4, N5, N6, N7, N8, N9,
		A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
		F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12,
		L_SHIFT, R_SHITF, L_ALT, R_ALT, L_CTRAL, R_CTRAL, TAB, CAPSLK, DEL, END, PDOWN, PUP, INS
	};

}
