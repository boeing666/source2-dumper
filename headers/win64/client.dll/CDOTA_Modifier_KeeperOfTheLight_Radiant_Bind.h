#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 slow; // offset 0x1A58, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A5C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A60, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A64, size 0xC, align 4
    bool bResetPosition; // offset 0x1A70, size 0x1, align 1
    char _pad_1A71[0x3]; // offset 0x1A71
    float32 m_fAccumulatedDistance; // offset 0x1A74, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A78, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1A7C, size 0x4, align 255
    bool m_bStunned; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
