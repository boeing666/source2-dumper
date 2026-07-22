#pragma once

class C_BaseAnimatingOverlayController : public C_BaseAnimatingController /*0x0*/  // sizeof 0x6B0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x628]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< CAnimationLayer > m_AnimOverlay; // offset 0x628, size 0x68, align 8
    char _pad_0690[0x20]; // offset 0x690
};
