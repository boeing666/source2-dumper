#pragma once

class CCitadel_Ability_Tier3Boss_RocketBarrage : public CTier3BossAbility /*0x0*/  // sizeof 0x1B90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    int32 m_nGrenadeIndex; // offset 0x14A0, size 0x4, align 4
    int32 m_nTotalGrenades; // offset 0x14A4, size 0x4, align 4
    AttachmentHandle_t m_hShootPos; // offset 0x14A8, size 0x1, align 255
    char _pad_14A9[0x6E7]; // offset 0x14A9
};
