#pragma once

class CBodyComponentBaseAnimating : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0x920, align 0xFF [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x4D0]; // offset 0x0
    CBaseAnimatingController m_animationController; // offset 0x4D0, size 0x448, align 255
    char _pad_0918[0x8]; // offset 0x918
};
