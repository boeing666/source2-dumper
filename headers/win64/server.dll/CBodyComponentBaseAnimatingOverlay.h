#pragma once

class CBodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0xA20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4E0]; // offset 0x0
    CBaseAnimatingOverlayController m_animationController; // offset 0x4E0, size 0x538, align 255
    char _pad_0A18[0x8]; // offset 0xA18
};
