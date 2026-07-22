#pragma once

struct HeroStatsUI_t  // sizeof 0x30, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strWeaponNameLocString; // offset 0x0, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strWeaponImage; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    ECitadelWeaponTypes m_eWeaponType; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    EStatsType m_eWeaponStatDisplay; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    CUtlVector< StatWithCategory_t > m_vecDisplayStats; // offset 0x18, size 0x18, align 8 | MPropertyDescription
};
