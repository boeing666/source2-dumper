#pragma once

class CDOTA_Modifier_MonkeyKing_Transform : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlString m_strDisguise; // offset 0x1A78, size 0x8, align 8
    int32 movespeed; // offset 0x1A80, size 0x4, align 4
    int32 m_nDisguisedSpeed; // offset 0x1A84, size 0x4, align 4
    int32 reveal_radius; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nDisguiseEffectIndex; // offset 0x1A8C, size 0x4, align 255
    CHandle< C_BaseEntity > m_hCourierToClone; // offset 0x1A90, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCreepToClone; // offset 0x1A94, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_aryBountyRuneSpawners; // offset 0x1A98, size 0x18, align 8
    bool m_bIsFlyingCourier; // offset 0x1AB0, size 0x1, align 1
    bool m_bIsRune; // offset 0x1AB1, size 0x1, align 1
    bool m_bIsBanana; // offset 0x1AB2, size 0x1, align 1
    bool m_bIsFakeAlly; // offset 0x1AB3, size 0x1, align 1
    uint32 m_nMischiefUnitType; // offset 0x1AB4, size 0x4, align 4
    int32 m_nMischiefHealthbarOffset; // offset 0x1AB8, size 0x4, align 4
    float32 invul_duration; // offset 0x1ABC, size 0x4, align 4
};
