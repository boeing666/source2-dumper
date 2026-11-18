#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Radiant_Bind : public CDOTA_Buff /*0x0*/  // sizeof 0x1B28, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 slow; // offset 0x1AF8, size 0x4, align 4
    int32 magic_resistance; // offset 0x1AFC, size 0x4, align 4
    float32 stun_duration; // offset 0x1B00, size 0x4, align 4
    VectorWS vLastPos; // offset 0x1B04, size 0xC, align 4
    bool bResetPosition; // offset 0x1B10, size 0x1, align 1
    char _pad_1B11[0x3]; // offset 0x1B11
    float32 m_fAccumulatedDistance; // offset 0x1B14, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B18, size 0x4, align 255
    ParticleIndex_t m_nStatusFXIndex; // offset 0x1B1C, size 0x4, align 255
    bool m_bStunned; // offset 0x1B20, size 0x1, align 1
    char _pad_1B21[0x7]; // offset 0x1B21
};
