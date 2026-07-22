#pragma once

class CDOTAOverworldHero  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldHeroID_t m_unID; // offset 0x0, size 0x1, align 255
    char _pad_0001[0x1]; // offset 0x1
    OverworldNodeID_t m_unStartNodeID; // offset 0x2, size 0x2, align 255 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< OverworldNodeID_t > m_vecBlockedNodes; // offset 0x8, size 0x18, align 8 | MPropertyDescription
    CDOTAOverworldCharacterBase m_baseAppearance; // offset 0x20, size 0x38, align 8
    CUtlVector< DOTAOverworldCharacterOverrideConditional_t > m_vecOverrides; // offset 0x58, size 0x18, align 8 | MPropertyDescription
};
