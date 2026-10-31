#pragma once

class CCitadelEventDefinition : public CBaseEventDefinition /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x188]; // offset 0x0
    CUtlOrderedMap< CUtlString, CUtlOrderedMap< CUtlString, float32 > > m_mapBreakablePropVDataOverride; // offset 0x188, size 0x28, align 8
    CUtlOrderedMap< CUtlString, CitadelEventMapOverrides_t > m_mapMapOverrides; // offset 0x1B0, size 0x28, align 8
    CUtlVector< CitadelEventPawnModifier_t > m_vecPlayerPawnModifiers; // offset 0x1D8, size 0x18, align 8
};
