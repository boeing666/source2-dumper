#pragma once

class CCitadel_Item_Disarm_VData : public CCitadel_Item_TrackingProjectileApplyModifierVData /*0x0*/  // sizeof 0x1628, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1608, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1618, size 0x10, align 8
};
