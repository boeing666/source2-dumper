#pragma once

class C_BaseAnimatingOverlayController : public C_BaseAnimatingController /*0x0*/  // sizeof 0x630, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x5A8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // offset 0x5A8, size 0x68, align 8
    char _pad_0610[0x20]; // offset 0x610
};
