#pragma once

class CDOTA_Modifier_Twin_Gate_Warp_Channel : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1A58, size 0x4, align 255
    ParticleIndex_t m_nfxTargetTp2; // offset 0x1A5C, size 0x4, align 255
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1A60, size 0x4, align 255
    ParticleIndex_t m_nfxPortal1; // offset 0x1A64, size 0x4, align 255
    ParticleIndex_t m_nfxPortal2; // offset 0x1A68, size 0x4, align 255
    float32 animation_rate; // offset 0x1A6C, size 0x4, align 4
    int32 stop_distance; // offset 0x1A70, size 0x4, align 4
    char _pad_1A74[0x4]; // offset 0x1A74
};
