#pragma once

class CCitadel_BreakableProp_PunchableTrollVData : public CCitadel_BreakablePropVData /*0x0*/  // sizeof 0x680, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x610]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_NearTrollAuraModifier; // offset 0x610, size 0x10, align 8 | MPropertyStartGroup
    CUtlVector< CEmbeddedSubclass< CCitadelModifier > > m_BuffModifiers; // offset 0x620, size 0x18, align 8
    float32 m_flStealCandyChance; // offset 0x638, size 0x4, align 4 | MPropertyDescription
    char _pad_063C[0x4]; // offset 0x63C
    CSoundEventName m_sPickupSound; // offset 0x640, size 0x10, align 8
    CSoundEventName m_sBridgeBuffPickupSound; // offset 0x650, size 0x10, align 8
    CSoundEventName m_sStunSound; // offset 0x660, size 0x10, align 8
    CSoundEventName m_sStealSound; // offset 0x670, size 0x10, align 8
};
