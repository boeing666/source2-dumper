#pragma once

struct GoldChangeSounds_t  // sizeof 0x180, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CSoundEventName m_strItemSale; // offset 0x0, size 0x10, align 8 | MPropertyStartGroup MPropertyDescription
    CSoundEventName m_strTreasureChest; // offset 0x10, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strPlayerKill; // offset 0x20, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strPlayerKillAssist; // offset 0x30, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strBossKill; // offset 0x40, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strLaneTrooperKill; // offset 0x50, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strNeutralTrooperKill; // offset 0x60, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strBaseSentryKill; // offset 0x70, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strPlayerOrb; // offset 0x80, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbDeny; // offset 0x90, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strLaneTrooperOrb; // offset 0xA0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strNeutralTrooperOrb; // offset 0xB0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strTier1BossOrb; // offset 0xC0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strTier2BossOrb; // offset 0xD0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strTier3BossOrb; // offset 0xE0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strBaseSentryOrb; // offset 0xF0, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strOrbDeployable; // offset 0x100, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strNeutralBossKill; // offset 0x110, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strTrophyKillOrb; // offset 0x120, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strNeutralWorldPickup; // offset 0x130, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strItemPurchase; // offset 0x140, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strItemUpgrade; // offset 0x150, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strStartingAmount; // offset 0x160, size 0x10, align 8 | MPropertyDescription
    CSoundEventName m_strCheats; // offset 0x170, size 0x10, align 8 | MPropertyDescription
};
