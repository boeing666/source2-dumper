#pragma once

class CCitadel_Ability_Tier3Boss_DropBombs : public CTier3BossAbility /*0x0*/  // sizeof 0x14C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A4]; // offset 0x0
    GameTime_t m_tNextBombTime; // offset 0x14A4, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets; // offset 0x14A8, size 0x18, align 8
    AttachmentHandle_t m_hShootPos; // offset 0x14C0, size 0x1, align 255
    char _pad_14C1[0x3]; // offset 0x14C1
    float32 m_flDetonationTime; // offset 0x14C4, size 0x4, align 4
};
