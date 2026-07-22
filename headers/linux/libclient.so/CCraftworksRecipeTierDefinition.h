#pragma once

class CCraftworksRecipeTierDefinition  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
public:
    CraftworksRecipeTierID_t m_unRecipeTierID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_strLocName; // offset 0x8, size 0x8, align 8
    char _pad_0010[0x18]; // offset 0x10
    CUtlString m_strUnlockAction; // offset 0x28, size 0x8, align 8
    CUtlString m_strUnlockLocDesc; // offset 0x30, size 0x8, align 8
    CUtlString m_strUnlockLocProgress; // offset 0x38, size 0x8, align 8
    CUtlString m_strCraftAction; // offset 0x40, size 0x8, align 8
    CUtlString m_strTierClass; // offset 0x48, size 0x8, align 8
};
