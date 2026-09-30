#pragma once

class CCitadel_Modifier_NearbyAlliesResistVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x780, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flNearbyAllyResistRange; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
    CUtlVector< float32 > m_flResistValues; // offset 0x768, size 0x18, align 8
};
