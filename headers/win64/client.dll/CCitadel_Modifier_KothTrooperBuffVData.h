#pragma once

class CCitadel_Modifier_KothTrooperBuffVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    CUtlVector< float32 > m_vecHealthPercents; // offset 0x760, size 0x18, align 8
    CUtlVector< float32 > m_vecDamagePercents; // offset 0x778, size 0x18, align 8
    CUtlVector< float32 > vecSpiritResistPercents; // offset 0x790, size 0x18, align 8
    CUtlVector< float32 > vecMeleeResistPercents; // offset 0x7A8, size 0x18, align 8
    CUtlVector< float32 > m_vecModelScaleFractions; // offset 0x7C0, size 0x18, align 8
};
