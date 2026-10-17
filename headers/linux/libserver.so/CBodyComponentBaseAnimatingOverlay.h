#pragma once

class CBodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0x9C0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    CBaseAnimatingOverlayController m_animationController; // offset 0x500, size 0x4B8, align 255
    char _pad_09B8[0x8]; // offset 0x9B8
};
