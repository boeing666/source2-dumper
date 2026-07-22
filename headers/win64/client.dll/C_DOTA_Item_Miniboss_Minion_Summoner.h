#pragma once

class C_DOTA_Item_Miniboss_Minion_Summoner : public C_DOTA_Item /*0x0*/  // sizeof 0x768, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x758]; // offset 0x0
    GameTime_t m_fEquipTime; // offset 0x758, size 0x4, align 255
    GameTime_t m_flActivatedTime; // offset 0x75C, size 0x4, align 255
    CHandle< C_BaseEntity > m_hOwner; // offset 0x760, size 0x4, align 4
    bool m_bItemActivated; // offset 0x764, size 0x1, align 1
    char _pad_0765[0x3]; // offset 0x765
};
