#pragma once

class CDOTA_Modifier_ChaosKnight_Armageddon_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 max_charge_time; // offset 0x1AF8, size 0x4, align 4
    float32 windup_turn_rate; // offset 0x1AFC, size 0x4, align 4
    float32 m_flChargeSpeed; // offset 0x1B00, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1B04, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1B08, size 0xC, align 4
    bool m_bReleased; // offset 0x1B14, size 0x1, align 1
    bool m_bCharging; // offset 0x1B15, size 0x1, align 1
    char _pad_1B16[0x2]; // offset 0x1B16
    ParticleIndex_t m_nRangeFinderFX; // offset 0x1B18, size 0x4, align 255
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
