#pragma once

class CCitadel_WeaponUpgrade_BurstFireVData : public CitadelItemVData /*0x0*/  // sizeof 0x11B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1190]; // offset 0x0
    CSoundEventName m_ActivationSound; // offset 0x1190, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x11A0, size 0x10, align 8 | MPropertyStartGroup
};
