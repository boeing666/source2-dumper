#pragma once

class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 sidegunner_radius; // offset 0x1A78, size 0x4, align 4
    float32 sidegunner_fire_rate; // offset 0x1A7C, size 0x4, align 4
    float32 m_flRotation; // offset 0x1A80, size 0x4, align 4
    CHandle< CBaseEntity > m_hIdealTarget; // offset 0x1A84, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1A88, size 0x4, align 4
    float32 m_flLastFireTime; // offset 0x1A8C, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1A90, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwningAbility; // offset 0x1A94, size 0x4, align 4
    AttackRecord_t m_iAttackRecord; // offset 0x1A98, size 0x2, align 255
    char _pad_1A9A[0x6]; // offset 0x1A9A
};
