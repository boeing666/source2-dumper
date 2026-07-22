#pragma once

class CBaseAnimatingOverlayController : public CBaseAnimatingController /*0x0*/  // sizeof 0x538, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x4C8]; // offset 0x0
    CUtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // offset 0x4C8, size 0x68, align 8
    char _pad_0530[0x8]; // offset 0x530
};
