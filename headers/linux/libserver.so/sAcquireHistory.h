#pragma once

class sAcquireHistory  // sizeof 0x68, align 0xFF (server)
{
public:
    AbilityID_t m_nAbilityID; // offset 0x0, size 0x4, align 255
    int32 m_nLevel; // offset 0x4, size 0x4, align 4
    int32 m_nGold; // offset 0x8, size 0x4, align 4
    int32 m_nNetWorth; // offset 0xC, size 0x4, align 4
    int32 m_bCombinedItem; // offset 0x10, size 0x4, align 4
    float32 m_fGameTime; // offset 0x14, size 0x4, align 4
    CUtlVector< AbilityID_t > m_vecItemList; // offset 0x18, size 0x18, align 8
    CUtlVector< AbilityID_t > m_vecTalentSkilledList; // offset 0x30, size 0x18, align 8
    CUtlVector< AbilityID_t > m_vecAvailableNeutralItemList; // offset 0x48, size 0x18, align 8
    bool m_bSold; // offset 0x60, size 0x1, align 1
    char _pad_0061[0x7]; // offset 0x61
};
