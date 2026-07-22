#pragma once

class CDOTA_Item_Miniboss_Minion_Summoner : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    GameTime_t m_fEquipTime; // offset 0x658, size 0x4, align 255
    GameTime_t m_flActivatedTime; // offset 0x65C, size 0x4, align 255
    CHandle< CBaseEntity > m_hOwner; // offset 0x660, size 0x4, align 4
    bool m_bItemActivated; // offset 0x664, size 0x1, align 1
    char _pad_0665[0x3]; // offset 0x665
};
