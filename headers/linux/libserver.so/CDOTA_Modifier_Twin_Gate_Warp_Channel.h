#pragma once

class CDOTA_Modifier_Twin_Gate_Warp_Channel : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1AF8, size 0x4, align 255
    ParticleIndex_t m_nfxTargetTp2; // offset 0x1AFC, size 0x4, align 255
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1B00, size 0x4, align 255
    ParticleIndex_t m_nfxPortal1; // offset 0x1B04, size 0x4, align 255
    ParticleIndex_t m_nfxPortal2; // offset 0x1B08, size 0x4, align 255
    CHandle< CBaseEntity > m_hPortal; // offset 0x1B0C, size 0x4, align 4
    CHandle< CBaseEntity > m_hOtherPortal; // offset 0x1B10, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1B14, size 0xC, align 4
    float32 m_flTotalTime; // offset 0x1B20, size 0x4, align 4
    float32 m_flElapsedTimePortion; // offset 0x1B24, size 0x4, align 4
    float32 animation_rate; // offset 0x1B28, size 0x4, align 4
    int32 stop_distance; // offset 0x1B2C, size 0x4, align 4
};
