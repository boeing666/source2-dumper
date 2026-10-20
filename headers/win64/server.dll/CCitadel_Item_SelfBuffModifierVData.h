#pragma once

class CCitadel_Item_SelfBuffModifierVData : public CitadelItemVData /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1180, size 0x10, align 8 | MPropertyStartGroup
};
