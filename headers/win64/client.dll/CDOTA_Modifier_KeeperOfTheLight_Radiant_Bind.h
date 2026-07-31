#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 slow; // offset 0x1A78, size 0x4, align 4
    int32 magic_resistance; // offset 0x1A7C, size 0x4, align 4
    float32 stun_duration; // offset 0x1A80, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1A84, size 0xC, align 4
    bool bResetPosition; // offset 0x1A90, size 0x1, align 1
    char _pad_1A91[0x3]; // offset 0x1A91
    float32 m_fAccumulatedDistance; // offset 0x1A94, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A98, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1A9C, size 0x4, align 255
    bool m_bStunned; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
};
