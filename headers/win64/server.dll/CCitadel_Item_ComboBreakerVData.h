#pragma once

class CCitadel_Item_ComboBreakerVData : public CitadelItemVData /*0x0*/  // sizeof 0x11A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ComboBreakerModifier; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HealModifier; // offset 0x1190, size 0x10, align 8
};
