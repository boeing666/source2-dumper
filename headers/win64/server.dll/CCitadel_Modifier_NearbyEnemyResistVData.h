#pragma once

class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    float32 m_flNearbyEnemyResistRange; // offset 0x798, size 0x4, align 4
    char _pad_079C[0x4]; // offset 0x79C
    CUtlVector< float32 > m_flResistValues; // offset 0x7A0, size 0x18, align 8
};
