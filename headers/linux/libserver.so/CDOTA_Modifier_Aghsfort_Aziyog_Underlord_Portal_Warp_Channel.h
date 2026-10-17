#pragma once

class CDOTA_Modifier_Aghsfort_Aziyog_Underlord_Portal_Warp_Channel : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nfxTargetTp; // offset 0x1AA8, size 0x4, align 255
    ParticleIndex_t m_nfxTargetTp2; // offset 0x1AAC, size 0x4, align 255
    ParticleIndex_t m_nfxAmbientFx; // offset 0x1AB0, size 0x4, align 255
    ParticleIndex_t m_nfxPortal1; // offset 0x1AB4, size 0x4, align 255
    ParticleIndex_t m_nfxPortal2; // offset 0x1AB8, size 0x4, align 255
    char _pad_1ABC[0x14]; // offset 0x1ABC
    CHandle< CBaseEntity > m_hPortal; // offset 0x1AD0, size 0x4, align 4
    VectorWS m_vStartPosition; // offset 0x1AD4, size 0xC, align 4
    float32 m_flTotalTime; // offset 0x1AE0, size 0x4, align 4
    float32 m_flElapsedTimePortion; // offset 0x1AE4, size 0x4, align 4
    float32 animation_rate; // offset 0x1AE8, size 0x4, align 4
    int32 stop_distance; // offset 0x1AEC, size 0x4, align 4
};
