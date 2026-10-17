#pragma once

class C_BaseAnimatingOverlayController : public C_BaseAnimatingController /*0x0*/  // sizeof 0x5F0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x568]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // offset 0x568, size 0x68, align 8
    char _pad_05D0[0x20]; // offset 0x5D0
};
