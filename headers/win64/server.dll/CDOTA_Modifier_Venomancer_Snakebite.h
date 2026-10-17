#pragma once

class CDOTA_Modifier_Venomancer_Snakebite : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 base_damage; // offset 0x1AA8, size 0x4, align 4
    float32 tick_damage; // offset 0x1AAC, size 0x4, align 4
    float32 damage_interval; // offset 0x1AB0, size 0x4, align 4
    bool undispellable; // offset 0x1AB4, size 0x1, align 1
    char _pad_1AB5[0x3]; // offset 0x1AB5
    GameTime_t m_flNextDamageInterval; // offset 0x1AB8, size 0x4, align 255
    int32 m_nWardIndex; // offset 0x1ABC, size 0x4, align 4
    float32 m_flPositionAngle; // offset 0x1AC0, size 0x4, align 4
    float32 m_flTargetPreviousYaw; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AC8, size 0x4, align 255
    bool m_bBittenThisFrame; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
};
