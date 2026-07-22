#pragma once

class CDOTAOverworldCharacter  // sizeof 0x88, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CDOTAOverworldCharacterBase m_appearance; // offset 0x8, size 0x38, align 8 | MPropertyDescription
    CDOTAOverworldCharacterConditional m_conditions; // offset 0x40, size 0x20, align 8
    OverworldHeroID_t m_unHeroPartyID; // offset 0x60, size 0x1, align 255
    char _pad_0061[0x7]; // offset 0x61
    CDOTAOverworldCharacterConditional m_partyConditions; // offset 0x68, size 0x20, align 8
};
