#pragma once

class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData /*0x0*/  // sizeof 0x19D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x19B8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x19C8, size 0x10, align 8
};
