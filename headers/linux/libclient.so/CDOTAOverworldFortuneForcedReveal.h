#pragma once

class CDOTAOverworldFortuneForcedReveal  // sizeof 0x8, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    OverworldTarotCardID_t m_unID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x3]; // offset 0x1
    int32 m_nForcedRevealCount; // offset 0x4, size 0x4, align 4 | MPropertyDescription
};
