#pragma once

class CDOTA_Modifier_Gyrocopter_Side_Gunner : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hIdealTarget; // offset 0x1AA8, size 0x4, align 4
    float32 sidegunner_radius; // offset 0x1AAC, size 0x4, align 4
    float32 sidegunner_fire_rate; // offset 0x1AB0, size 0x4, align 4
    float32 m_flRotation; // offset 0x1AB4, size 0x4, align 4
    CHandle< CBaseEntity > m_hSecondaryTarget; // offset 0x1AB8, size 0x4, align 4
    float32 m_flLastFireTime; // offset 0x1ABC, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwnerNPC; // offset 0x1AC0, size 0x4, align 4
    CHandle< CBaseEntity > m_hOwningAbility; // offset 0x1AC4, size 0x4, align 4
    int32 m_nSideGunnerIndex; // offset 0x1AC8, size 0x4, align 4
    AttackRecord_t m_iAttackRecord; // offset 0x1ACC, size 0x2, align 255
    char _pad_1ACE[0x2]; // offset 0x1ACE
};
