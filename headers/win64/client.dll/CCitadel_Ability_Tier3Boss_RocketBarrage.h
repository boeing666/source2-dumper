#pragma once

class CCitadel_Ability_Tier3Boss_RocketBarrage : public CTier3BossAbility /*0x0*/  // sizeof 0x1DD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0x16E0, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0x16E4, size 0x4, align 4
    AttachmentHandle_t m_hShootPos; // offset 0x16E8, size 0x1, align 255
    char _pad_16E9[0x6E7]; // offset 0x16E9
};
