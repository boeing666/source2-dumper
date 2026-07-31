#pragma once

class CDOTA_Modifier_Twin_Gate_Warp_Channel : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nfxTargetTp2; // offset 0x1A7C, size 0x4, align 255
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nfxPortal1; // offset 0x1A84, size 0x4, align 255
    ParticleIndex_t m_nfxPortal2; // offset 0x1A88, size 0x4, align 255
    float32 animation_rate; // offset 0x1A8C, size 0x4, align 4
    int32 stop_distance; // offset 0x1A90, size 0x4, align 4
    char _pad_1A94[0x4]; // offset 0x1A94
};
