#pragma once

class CCitadel_Ability_Tier3Boss_RocketBarrage : public CTier3BossAbility /*0x0*/  // sizeof 0x1480, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0xF70, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0xF74, size 0x4, align 4
    AttachmentHandle_t m_hShootPos; // offset 0xF78, size 0x1, align 255
    char _pad_0F79[0x507]; // offset 0xF79
};
