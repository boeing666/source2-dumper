#pragma once

class CDOTA_Modifier_MonkeyKing_FurArmyThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fDuration; // offset 0x1AA8, size 0x4, align 4
    GameTime_t m_fTimeThinkerCreated; // offset 0x1AAC, size 0x4, align 255
    CUtlVector< VectorWS > m_vTargetPositions; // offset 0x1AB0, size 0x18, align 8
    VectorWS m_vInitialPos; // offset 0x1AC8, size 0xC, align 4
    float32 first_radius; // offset 0x1AD4, size 0x4, align 4
    int32 num_first_soldiers; // offset 0x1AD8, size 0x4, align 4
    float32 second_radius; // offset 0x1ADC, size 0x4, align 4
    int32 num_second_soldiers; // offset 0x1AE0, size 0x4, align 4
    ParticleIndex_t m_nRingFXIndex; // offset 0x1AE4, size 0x4, align 255
    float32 final_radius; // offset 0x1AE8, size 0x4, align 4
    float32 leadership_time_buffer; // offset 0x1AEC, size 0x4, align 4
    GameTime_t m_flLastTimeInsideRing; // offset 0x1AF0, size 0x4, align 255
    char _pad_1AF4[0x4]; // offset 0x1AF4
};
