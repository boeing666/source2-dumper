#pragma once

class C_DOTA_Item_Miniboss_Minion_Summoner : public C_DOTA_Item /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x8CC]; // offset 0x0
    GameTime_t m_fEquipTime; // offset 0x8CC, size 0x4, align 255
    GameTime_t m_flActivatedTime; // offset 0x8D0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hOwner; // offset 0x8D4, size 0x4, align 4
    bool m_bItemActivated; // offset 0x8D8, size 0x1, align 1
    char _pad_08D9[0x7]; // offset 0x8D9
};
