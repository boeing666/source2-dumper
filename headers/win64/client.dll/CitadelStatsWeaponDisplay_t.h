#pragma once

struct CitadelStatsWeaponDisplay_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strWeaponNameLocString; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strWeaponDescLocString; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CPanoramaImageName m_strWeaponImage; // offset 0x10, size 0x10, align 8 | MPropertyDescription
    CUtlString m_strSecondaryWeaponDescLocString; // offset 0x20, size 0x8, align 8 | MPropertyDescription
    ECitadelWeaponAttributes m_eWeaponAttributes; // offset 0x28, size 0x2, align 2 | MPropertyDescription
    char _pad_002A[0x6]; // offset 0x2A
    CUtlVector< EStatsType > m_vecDisplayStats; // offset 0x30, size 0x18, align 8 | MPropertyDescription
    CUtlVector< EStatsType > m_vecOtherDisplayStats; // offset 0x48, size 0x18, align 8 | MPropertyDescription
};
