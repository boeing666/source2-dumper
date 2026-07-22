#pragma once

class CCitadel_Modifier_NearbyEnemyResistVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flNearbyEnemyResistRange; // offset 0x750, size 0x4, align 4
    char _pad_0754[0x4]; // offset 0x754
    CUtlVector< float32 > m_flResistValues; // offset 0x758, size 0x18, align 8
};
