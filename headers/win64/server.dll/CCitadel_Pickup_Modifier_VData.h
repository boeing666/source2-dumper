#pragma once

class CCitadel_Pickup_Modifier_VData : public CCitadel_Pickup_VData /*0x0*/  // sizeof 0x9E8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_sModifer; // offset 0x9D8, size 0x10, align 8
};
