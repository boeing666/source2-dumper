#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_fDuration; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_fTimeThinkerCreated; // offset 0x1AFC, size 0x4, align 255
    CUtlVector< VectorWS > m_vTargetPositions; // offset 0x1B00, size 0x18, align 8
    VectorWS m_vInitialPos; // offset 0x1B18, size 0xC, align 4
    float32 first_radius; // offset 0x1B24, size 0x4, align 4
    int32 num_first_soldiers; // offset 0x1B28, size 0x4, align 4
    float32 second_radius; // offset 0x1B2C, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x1B30, size 0x4, align 4
    ParticleIndex_t m_nRingFXIndex; // offset 0x1B34, size 0x4, align 255
    float32 final_radius; // offset 0x1B38, size 0x4, align 4
    float32 leadership_time_buffer; // offset 0x1B3C, size 0x4, align 4
    GameTime_t m_flLastTimeInsideRing; // offset 0x1B40, size 0x4, align 255
    char _pad_1B44[0x4]; // offset 0x1B44
};
