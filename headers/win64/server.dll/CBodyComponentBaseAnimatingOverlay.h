#pragma once

class CBodyComponentBaseAnimatingOverlay : public CBodyComponentSkeletonInstance /*0x0*/  // sizeof 0x9B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4F0]; // offset 0x0
    CBaseAnimatingOverlayController m_animationController; // offset 0x4F0, size 0x4B8, align 255
    char _pad_09A8[0x8]; // offset 0x9A8
};
