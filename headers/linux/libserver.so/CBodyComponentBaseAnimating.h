#pragma once

class CBodyComponentBaseAnimating : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0x950, align 0xFF [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x500]; // offset 0x0
    CBaseAnimatingController m_animationController; // offset 0x500, size 0x448, align 255
    char _pad_0948[0x8]; // offset 0x948
};
