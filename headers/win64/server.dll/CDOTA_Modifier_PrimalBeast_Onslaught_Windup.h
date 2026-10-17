#pragma once

class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bReachedMax; // offset 0x1AA8, size 0x1, align 1
    bool m_bShouldCharge; // offset 0x1AA9, size 0x1, align 1
    char _pad_1AAA[0x2]; // offset 0x1AAA
    float32 m_flLastOverheadTime; // offset 0x1AAC, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AB0, size 0x4, align 4
    VectorWS m_vAimTarget; // offset 0x1AB4, size 0xC, align 4
    ParticleIndex_t m_nCrosshairFX; // offset 0x1AC0, size 0x4, align 255
    float32 m_flChargeDuration; // offset 0x1AC4, size 0x4, align 4
    int32 max_distance; // offset 0x1AC8, size 0x4, align 4
    float32 max_charge_time; // offset 0x1ACC, size 0x4, align 4
    float32 turn_rate; // offset 0x1AD0, size 0x4, align 4
    float32 base_power; // offset 0x1AD4, size 0x4, align 4
    int32 charge_speed; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
