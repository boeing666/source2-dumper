#pragma once

class CDOTA_Modifier_PrimalBeast_Onslaught_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    bool m_bReachedMax; // offset 0x1A78, size 0x1, align 1
    bool m_bShouldCharge; // offset 0x1A79, size 0x1, align 1
    char _pad_1A7A[0x2]; // offset 0x1A7A
    float32 m_flLastOverheadTime; // offset 0x1A7C, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1A80, size 0x4, align 4
    VectorWS m_vAimTarget; // offset 0x1A84, size 0xC, align 4
    ParticleIndex_t m_nCrosshairFX; // offset 0x1A90, size 0x4, align 255
    float32 m_flChargeDuration; // offset 0x1A94, size 0x4, align 4
    int32 max_distance; // offset 0x1A98, size 0x4, align 4
    float32 max_charge_time; // offset 0x1A9C, size 0x4, align 4
    float32 turn_rate; // offset 0x1AA0, size 0x4, align 4
    float32 base_power; // offset 0x1AA4, size 0x4, align 4
    int32 charge_speed; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
