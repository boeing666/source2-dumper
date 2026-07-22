#pragma once

struct CitadelStatsDisplay_t  // sizeof 0xA8, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CitadelStatsWeaponDisplay_t m_eWeaponStatsDisplay; // offset 0x0, size 0x60, align 8 | MPropertyDescription
    CitadelStatsVitalityDisplay_t m_eVitalityStatsDisplay; // offset 0x60, size 0x30, align 8 | MPropertyDescription
    CitadelStatsSpiritDisplay_t m_eSpiritStatsDisplay; // offset 0x90, size 0x18, align 8 | MPropertyDescription
};
