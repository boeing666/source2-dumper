#pragma once

class CCitadel_Ability_Tier3Boss_DropBombs : public CTier3BossAbility /*0x0*/  // sizeof 0x14D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14AC]; // offset 0x0
    GameTime_t m_tNextBombTime; // offset 0x14AC, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets; // offset 0x14B0, size 0x18, align 8
    AttachmentHandle_t m_hShootPos; // offset 0x14C8, size 0x1, align 255
    char _pad_14C9[0x3]; // offset 0x14C9
    float32 m_flDetonationTime; // offset 0x14CC, size 0x4, align 4
};
