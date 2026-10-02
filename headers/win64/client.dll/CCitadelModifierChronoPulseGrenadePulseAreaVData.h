#pragma once

class CCitadelModifierChronoPulseGrenadePulseAreaVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x9A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x790, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SlowModifier; // offset 0x7A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PreviewRingParticle; // offset 0x7B0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AreaEffect; // offset 0x890, size 0xE0, align 8
    CSoundEventName m_strArmingSound; // offset 0x970, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strArmedSound; // offset 0x980, size 0x10, align 8
    CSoundEventName m_strHitSound; // offset 0x990, size 0x10, align 8
};
