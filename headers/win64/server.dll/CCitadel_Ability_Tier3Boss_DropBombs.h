#pragma once

class CCitadel_Ability_Tier3Boss_DropBombs : public CTier3BossAbility /*0x0*/  // sizeof 0xF98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF74]; // offset 0x0
    GameTime_t m_tNextBombTime; // offset 0xF74, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vHitTargets; // offset 0xF78, size 0x18, align 8
    AttachmentHandle_t m_hShootPos; // offset 0xF90, size 0x1, align 255
    char _pad_0F91[0x3]; // offset 0xF91
    float32 m_flDetonationTime; // offset 0xF94, size 0x4, align 4
};
