#pragma once

class CDOTA_Item_Miniboss_Minion_Summoner : public CDOTA_Item /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x92C]; // offset 0x0
    GameTime_t m_fEquipTime; // offset 0x92C, size 0x4, align 255
    GameTime_t m_flActivatedTime; // offset 0x930, size 0x4, align 255
    CHandle< CBaseEntity > m_hOwner; // offset 0x934, size 0x4, align 4
    bool m_bItemActivated; // offset 0x938, size 0x1, align 1
    char _pad_0939[0x7]; // offset 0x939
};
