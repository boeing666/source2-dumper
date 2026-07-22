#pragma once

class C_BaseAnimatingOverlayController : public C_BaseAnimatingController /*0x0*/  // sizeof 0x670, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x5E8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // offset 0x5E8, size 0x68, align 8
    char _pad_0650[0x20]; // offset 0x650
};
