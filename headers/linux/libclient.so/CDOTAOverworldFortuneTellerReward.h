#pragma once

class CDOTAOverworldFortuneTellerReward  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EOverworldFortuneReward m_eReward; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    float32 m_flWeight; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    uint32 m_unEventActionID; // offset 0x8, size 0x4, align 4 | MPropertyDescription
};
