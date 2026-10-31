#pragma once

class CAbilityThumper3VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1090, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DroneModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
};
